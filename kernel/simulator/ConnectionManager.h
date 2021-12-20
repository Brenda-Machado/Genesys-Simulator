/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ConnectionManager.h
 * Author: rlcancian
 *
 * Created on 1 de Julho de 2019, 18:39
 */

#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H

#include <utility>
#include "../util/List.h"

//namespace GenesysKernel {

class ModelComponent;

typedef std::pair<ModelComponent*, unsigned int> Connection;
/**
 * ConnectionManager defines how a ModelComponent is output connected to none, one or more following ModelComponents. It has a list of nextConnections, where each Connection is a pair, defining the next ModelComponent and an input port on that component (usefull only if the next component has more than one input). The number of the output conection is its rank in the nextConnections list. Min and max number of input and output connectons can be defined.
 */
class ConnectionManager {
public:
    ConnectionManager();
    virtual ~ConnectionManager() = default;
public:
    unsigned int size();
    ModelComponent* front(); /*!< DEPRECTED. Use  frontConnection instead */
    ModelComponent* atRank(unsigned int rank); /*!< DEPRECTED. Use  getConnectionAtRank instead */
    Connection* getFrontConnection();
    Connection* getConnectionAtRank(unsigned int rank);
    void insert(ModelComponent* component, unsigned int inputNumber = 0);
    void insert(Connection* connection);
    void insertAtRank(unsigned int rank, Connection* connection);
    //void insert(ModelComponent* component, unsigned int inputNumber = 0);
    std::list<Connection*>* list() const;
    //void setCurrentOutputConnections(unsigned int _currentOutputConnections);
    unsigned int getCurrentOutputConnections() const;
    void setMaxOutputConnections(unsigned int _maxOutputConnections);
    unsigned int getMaxOutputConnections() const;
    void setMinOutputConnections(unsigned int _minOutputConnections);
    unsigned int getMinOutputConnections() const;
    //void setCurrentInputConnections(unsigned int _currentInputConnections);
    unsigned int getCurrentInputConnections() const;
    void setMaxInputConnections(unsigned int _maxInputConnections);
    unsigned int getMaxInputConnections() const;
    void setMinInputConnections(unsigned int _minInputConnections);
    unsigned int getMinInputConnections() const;
private:
    List<Connection*>* _nextConnections = new List<Connection*>();
    unsigned int _minInputConnections = 1;
    unsigned int _maxInputConnections = 1;
    unsigned int _currentInputConnections = 1;
    unsigned int _minOutputConnections = 1;
    unsigned int _maxOutputConnections = 1;
    unsigned int _currentOutputConnections = 1;
};
//namespace\\}
#endif /* CONNECTIONMANAGER_H */

