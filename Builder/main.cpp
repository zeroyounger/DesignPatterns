//
//  main.cpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "builder.hpp"
#include "product.hpp"
#include "director.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Director* d=new Director(new ConcreteBuilder());
    d->Construct();
    return 0;
}
