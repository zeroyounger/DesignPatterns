//
//  main.cpp
//  策略模式
//
//  Created by 杨子荣 on 2017/10/6.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "Context.hpp"
#include "strategy.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    Strategy* ps=new ConcreteStrategyB();//定义一个策略模式，使用方法A的实现
    //把算法封装到Strategy中，具体实现是不同的Concrete，运行时指定用哪个实现。
    //然后把这个指定了具体实现的指针，传到Context中
    
    Context* pc=new Context(ps);//定义一个Context，里面只有一个stg的指针
    pc->DoAction();
    if(NULL!=pc)
        delete pc;
    return 0;
}
