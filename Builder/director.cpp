//
//  director.cpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "director.hpp"
#include "builder.hpp"

Director::Director(Builder* bld){
    _bld=bld;
}

Director::~Director(){}

void Director::Construct(){
    _bld->BuildPartA("user-defined");
    _bld->BuildPartB("user-defined");
    _bld->BuildPartC("user-defined");
}


