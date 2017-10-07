//
//  strategy.hpp
//  策略模式
//
//  Created by 杨子荣 on 2017/10/6.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef strategy_hpp
#define strategy_hpp

#include <stdio.h>
//changed
//在父类中定义一个纯虚函数
//定义两个子类，分别实现父类中的纯虚函数，不同的实现方法
//区分两个子类

class Strategy{
public:
    Strategy();
    virtual ~Strategy();
    virtual void AlgrithmInterface()=0;//定义虚函数
protected:
private:
    
};

class ConcreteStrategyA:public Strategy{//具体实现
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();
    void AlgrithmInterface();//实现父类的纯虚函数
};

class ConcreteStrategyB:public Strategy{//具体实现2，主要是对纯虚函数的不同实现
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();
    void AlgrithmInterface();
};

#endif /* strategy_hpp */
