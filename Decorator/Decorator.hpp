//
//  Decorator.hpp
//  装饰者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef Decorator_hpp
#define Decorator_hpp

#include <stdio.h>

class Component{
public:
    virtual ~Component();
    virtual void Operation();
protected:
    Component();
};

class ConcreteComponent:public Component{
public:
    ConcreteComponent();
    ~ConcreteComponent();
    void Operation();
};

class Decorator:public Component{
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Operation();
protected:
    Component* _com;
};

class ConcreteDecorator:public Decorator{
public:
    ConcreteDecorator(Component* com);
    ~ConcreteDecorator();
    void Operation();
    void AddedBehavior();
};


#endif /* Decorator_hpp */
