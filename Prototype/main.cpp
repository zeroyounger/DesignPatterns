//
//  main.cpp
//  原型模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "prototype.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Prototype* p=new ConcretePrototype();
    Prototype* p1=p->Clone();
    return 0;
}
