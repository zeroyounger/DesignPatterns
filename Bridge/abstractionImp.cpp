//
//  abstractionImp.cpp
//  桥接模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "abstractionImp.hpp"
#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp(){}
AbstractionImp::~AbstractionImp(){}
void AbstractionImp::Operation(){
    cout<<"AbstractionImp...imp..."<<endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA(){}
ConcreteAbstractionImpA::~ConcreteAbstractionImpA(){}
void ConcreteAbstractionImpA::Operation(){
    cout<<"ConcreteAbstractionImpA..."<<endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB(){}
ConcreteAbstractionImpB::~ConcreteAbstractionImpB(){}
void ConcreteAbstractionImpB::Operation(){
    cout<<"ConcreteAbstractionImpB..."<<endl;
}


