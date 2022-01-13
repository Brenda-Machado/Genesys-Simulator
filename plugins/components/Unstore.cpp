/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unstore.cpp
 * Author: rlcancian
 * 
 * Created on 11 de Setembro de 2019, 13:08
 */

#include "Unstore.h"
#include "../../kernel/simulator/Model.h"

Unstore::Unstore(Model* model, std::string name) : ModelComponent(model, Util::TypeOf<Unstore>(), name) {
}

std::string Unstore::show() {
	return ModelComponent::show() + "";
}

ModelComponent* Unstore::LoadInstance(Model* model, std::map<std::string, std::string>* fields) {
	Unstore* newComponent = new Unstore(model);
	try {
		newComponent->_loadInstance(fields);
	} catch (const std::exception& e) {

	}
	return newComponent;
}

void Unstore::_execute(Entity* entity) {
	_parentModel->getTracer()->trace("I'm just a dummy model and I'll just send the entity forward");
	this->_parentModel->sendEntityToComponent(entity, this->getConnections()->getFrontConnection());
}

bool Unstore::_loadInstance(std::map<std::string, std::string>* fields) {
	bool res = ModelComponent::_loadInstance(fields);
	if (res) {
		// \todo: not implemented yet
	}
	return res;
}

void Unstore::_initBetweenReplications() {
}

std::map<std::string, std::string>* Unstore::_saveInstance(bool saveDefaultValues) {
	std::map<std::string, std::string>* fields = ModelComponent::_saveInstance();
	// \todo: not implemented yet
	return fields;
}

bool Unstore::_check(std::string* errorMessage) {
	bool resultAll = true;
	// \todo: not implemented yet
	*errorMessage += "";
	return resultAll;
}

PluginInformation* Unstore::GetPluginInformation() {
	PluginInformation* info = new PluginInformation(Util::TypeOf<Unstore>(), &Unstore::LoadInstance);
	// ...
	return info;
}


