//
//  product.cpp
//  抽象工厂
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "product.hpp"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA(){}
AbstractProductA::~AbstractProductA(){}
AbstractProductB::AbstractProductB(){}
AbstractProductB::~AbstractProductB(){}

ProductA1::ProductA1(){
    cout<<"ProductA1..."<<endl;
}
ProductA1::~ProductA1(){}

ProductA2::ProductA2(){
    cout<<"ProductA2..."<<endl;
}
ProductA2::~ProductA2(){}

ProductB1::ProductB1(){
    cout<<"ProductB1..."<<endl;
}
ProductB1::~ProductB1(){}

ProductB2::ProductB2(){
    cout<<"ProductB2..."<<endl;
}
ProductB2::~ProductB2(){}

