//
//  abstraction.cpp
//  桥接模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "abstraction.hpp"
#include "abstractionImp.hpp"

#include <iostream>
using namespace std; 

Abstraction::Abstraction(){}
Abstraction::~Abstraction(){}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp){
    _imp=imp;
}
RefinedAbstraction::~RefinedAbstraction(){}

void RefinedAbstraction::Operation(){
    _imp->Operation();
}



