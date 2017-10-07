//
//  Context.cpp
//  策略模式
//
//  Created by 杨子荣 on 2017/10/6.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "Context.hpp"
#include "strategy.hpp"
#include <iostream>
using namespace std;
//changed
Context::Context(Strategy* stg){
    _stg=stg;
}

Context::~Context(){
    if(!_stg)
        delete _stg;
}

void Context::DoAction(){//实现action的方式是，stg调用方法，但是具体是调用哪个方法？
    _stg->AlgrithmInterface();
}
