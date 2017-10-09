//
//  main.cpp
//  工厂模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "factory.hpp"
#include "product.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Factory* fac = new ConcreteFactory();
    Product* p = fac->CreteProduct();
    return 0;
}
