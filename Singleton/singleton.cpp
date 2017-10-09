//
//  singleton.cpp
//  单例模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "singleton.hpp"
#include <iostream>
using namespace std;

Singleton* Singleton::_instance=0;

Singleton::Singleton(){
    cout<<"Singleton..."<<endl;
}

Singleton* Singleton::Instance(){
    if(_instance==0)
        _instance=new Singleton();
    return _instance;
}

