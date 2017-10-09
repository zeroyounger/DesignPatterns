//
//  main.cpp
//  抽象工厂
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "abstractFactory.hpp"
#include "product.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    AbstractFactory* cf1 = new ConcreteFactory1();
    cf1->CreateProductA();
    cf1->CreateProductB();
    AbstractFactory* cf2 = new ConcreteFactory2();
    cf2->CreateProductA();
    cf2->CreateProductB();
    
    return 0;
}
