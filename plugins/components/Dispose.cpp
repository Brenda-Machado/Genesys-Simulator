/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dispose.cpp
 * Author: rafael.luiz.cancian
 * 
 * Created on 21 de Junho de 2018, 20:13
 */

#include "Dispose.h"
#include "../../kernel/simulator/Model.h"

#ifdef PLUGINCONNECT_DYNAMIC

extern "C" StaticGetPluginInformation GetPluginInformation() {
	return &Dispose::GetPluginInformation;
}
#endif

ModelDataDefinition* Dispose::NewInstance(Model* model, std::string name) {
	return new Dispose(model, name);
}

Dispose::Dispose(Model* model, std::string name) : SinkModelComponent(model, Util::TypeOf<Dispose>(), name) {
	//_numberOut = new Counter(_parentModel, getName() + "." + "Count_number_out", this);
	_connections->setMinOutputConnections(0);
	_connections->setMaxOutputConnections(0);
}

std::string Dispose::show() {
	return SinkModelComponent::show();
}

void Dispose::_onDispatchEvent(Entity* entity) {
	if (_reportStatistics) {
		_numberOut->incCountValue();
		if (entity->getEntityType()->isReportStatistics()) {
			double timeInSystem = _parentModel->getSimulation()->getSimulatedTime() - entity->getAttributeValue("Entity.ArrivalTime");
			entity->getEntityType()->addGetStatisticsCollector(entity->getEntityTypeName() + "." + "TotalTimeInSystem")->getStatistics()->getCollector()->addValue(timeInSystem);
		}
	}
	_parentModel->removeEntity(entity); //, _reportStatistics);
}

bool Dispose::_loadInstance(std::map<std::string, std::string>* fields) {
	return ModelComponent::_loadInstance(fields);
}

void Dispose::_initBetweenReplications() {
	SinkModelComponent::_initBetweenReplications();
}

std::map<std::string, std::string>* Dispose::_saveInstance(bool saveDefaultValues) {
	std::map<std::string, std::string>* fields = ModelComponent::_saveInstance(saveDefaultValues);
	return fields;

}

bool Dispose::_check(std::string* errorMessage) {
	//*errorMessage += "";
	return true;
}

void Dispose::_createInternalData() {
	if (_reportStatistics && _numberOut == nullptr) {
		// creates the counter (and then the CStats)
		_numberOut = new Counter(_parentModel, getName() + "." + "CountNumberIn", this);
		_internalData->insert({"CountNumberIn", _numberOut});
		// include StatisticsCollector needed for each EntityType
		std::list<ModelDataDefinition*>* enttypes = _parentModel->getDataManager()->getDataDefinitionList(Util::TypeOf<EntityType>())->list();
		for (ModelDataDefinition* modeldatum : *enttypes) {
			if (modeldatum->isReportStatistics())
				static_cast<EntityType*> (modeldatum)->addGetStatisticsCollector(modeldatum->getName() + "." + "TotalTimeInSystem"); // force create this CStat before model checking
		}
	} else if (!_reportStatistics && _numberOut != nullptr) {
		_removeInternalDatas();
	}
}

PluginInformation* Dispose::GetPluginInformation() {
	PluginInformation* info = new PluginInformation(Util::TypeOf<Dispose>(), &Dispose::LoadInstance, &Dispose::NewInstance);
	info->setSink(true);
    info->setMinimumOutputs(0);
    info->setMaximumOutputs(0);
	std::string text = "This module is intended as the ending point for entities in a simulation model.";
	text += " Entity statistics may be recorded before the entity is disposed.";
	text += " Animation showing the number of entities disposed is displayed when the module is placed.";
	text += " TYPICAL USES: (1) Parts leaving the modeled facility; (2) The termination of a business process; (3) Customers departing from the store";
	info->setDescriptionHelp(text);
	return info;
}

ModelComponent* Dispose::LoadInstance(Model* model, std::map<std::string, std::string>* fields) {
	Dispose* newComponent = new Dispose(model);
	try {
		newComponent->_loadInstance(fields);
	} catch (const std::exception& e) {

	}
	return newComponent;
}
