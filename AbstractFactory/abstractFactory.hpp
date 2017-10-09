//
//  abstractFactory.hpp
//  抽象工厂
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef abstractFactory_hpp
#define abstractFactory_hpp

#include <stdio.h>
class AbstractProductA;
class AbstractProductB;

class AbstractFactory{
public:
    virtual ~AbstractFactory();
    virtual AbstractProductA* CreateProductA()=0;
    virtual AbstractProductB* CreateProductB()=0;
protected:
    AbstractFactory();
};

class ConcreteFactory1:public AbstractFactory{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

class ConcreteFactory2:public AbstractFactory{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

#endif /* abstractFactory_hpp */
