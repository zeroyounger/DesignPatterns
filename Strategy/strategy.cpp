//
//  strategy.cpp
//  策略模式
//
//  Created by 杨子荣 on 2017/10/6.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "strategy.hpp"
#include <iostream>
using namespace std;
//changed something
Strategy::Strategy(){}
Strategy::~Strategy(){
    cout<<"~Strategy..."<<endl;
}

void Strategy::AlgrithmInterface(){//这只是一个纯虚函数，怎么做？
}

ConcreteStrategyA::ConcreteStrategyA(){}
ConcreteStrategyA::~ConcreteStrategyA(){
    cout<<"~ConcreteStrategyA..."<<endl;
}

void ConcreteStrategyA::AlgrithmInterface(){
    cout<<"test ConcreteStrategyA..."<<endl;
}

ConcreteStrategyB::ConcreteStrategyB(){}
ConcreteStrategyB::~ConcreteStrategyB(){
    cout<<"~ConcreteStrategyB..."<<endl;
}

void ConcreteStrategyB::AlgrithmInterface(){
    cout<<"test ConcreteStrategyB..."<<endl;
}

