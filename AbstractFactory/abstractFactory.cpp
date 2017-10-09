//
//  abstractFactory.cpp
//  抽象工厂
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "abstractFactory.hpp"
#include "product.hpp"
#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory(){}
AbstractFactory::~AbstractFactory(){}

ConcreteFactory1::ConcreteFactory1(){}
ConcreteFactory1::~ConcreteFactory1(){}

AbstractProductA* ConcreteFactory1::CreateProductA(){
    return new ProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB(){
    return new ProductB1();
}

ConcreteFactory2::ConcreteFactory2(){}
ConcreteFactory2::~ConcreteFactory2(){}

AbstractProductA* ConcreteFactory2::CreateProductA(){
    return new ProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB(){
    return new ProductB2();
}
