//
//  product.cpp
//  工厂模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "product.hpp"
#include <iostream>
using namespace std;

Product::Product(){}
Product::~Product(){}

ConcreteProduct::ConcreteProduct(){
    cout<<"ConcreteProduct..."<<endl;
}

ConcreteProduct::~ConcreteProduct(){
}


