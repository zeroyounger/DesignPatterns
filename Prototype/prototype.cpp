//
//  prototype.cpp
//  原型模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "prototype.hpp"
#include <iostream>
using namespace std;

Prototype::Prototype(){}
Prototype::~Prototype(){}
Prototype* Prototype::Clone()const{
    return 0;
}

ConcretePrototype::ConcretePrototype(){}
ConcretePrototype::~ConcretePrototype(){}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp){
    cout<<"ConcretePrototype..."<<endl;
}

Prototype* ConcretePrototype::Clone()const{
    return new ConcretePrototype(*this);
}
