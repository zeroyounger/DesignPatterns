//
//  main.cpp
//  单例模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "singleton.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Singleton* sgn=Singleton::Instance();
    return 0;
}
