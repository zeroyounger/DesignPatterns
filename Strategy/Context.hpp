//
//  Context.hpp
//  策略模式
//
//  Created by 杨子荣 on 2017/10/6.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef Context_hpp
#define Context_hpp

#include <stdio.h>
//changed

class Strategy;//这是什么意思？声明了一个类，但是没有具体实现？
//这个类是Strategy模式的关键，是Strategy和Template模式的根本区别所在
//通过组合（委托）方式实现算法（实现）的异构
//Template通过继承的方式
//这两种模式的区别也就是继承和组合两种实现接口重用的方式的区别

//声明了一个Strategy类，然后在委托模式的构造函数里面，是一个Strategy指针，Context有一个私有的stg指针

class Context{
public:
    Context(Strategy* stg);
    ~Context();
    void DoAction();
private:
    Strategy* _stg;
};

#endif /* Context_hpp */
