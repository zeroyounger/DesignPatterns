//
//  main.cpp
//  装饰者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "Decorator.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

    Component* com=new ConcreteComponent();
    Decorator* dec=new ConcreteDecorator(com);
    dec->Operation();
    delete dec;
    return 0;
}
