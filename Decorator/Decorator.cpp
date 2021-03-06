//
//  Decorator.cpp
//  装饰者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "Decorator.hpp"
#include <iostream>

Component::Component(){}
Component::~Component(){}
void Component::Operation(){}

ConcreteComponent::ConcreteComponent(){}
ConcreteComponent::~ConcreteComponent(){}
void ConcreteComponent::Operation(){
    std::cout<<"ConcreteComponent operation..."<<std::endl;
}

Decorator::Decorator(Component* com){
    this->_com=com;
}

Decorator::~Decorator(){
    delete _com;
}

void Decorator::Operation(){}

ConcreteDecorator::ConcreteDecorator(Component* com):Decorator(com){}

ConcreteDecorator::~ConcreteDecorator(){}

void ConcreteDecorator::AddedBehavior(){
    std::cout<<"ConcreteDecorator::AddedBehavior..."<<std::endl;
}

void ConcreteDecorator::Operation(){
    _com->Operation();
}

