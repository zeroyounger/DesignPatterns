//
//  factory.cpp
//  工厂模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "factory.hpp"
#include "product.hpp"
#include <iostream>
using namespace std;

Factory::Factory(){}
Factory::~Factory(){}

ConcreteFactory::ConcreteFactory(){
    cout<<"ConcteteFactory..."<<endl;
}

ConcreteFactory::~ConcreteFactory(){}

Product* ConcreteFactory::CreteProduct(){
    return new ConcreteProduct();
}

