//
//  Observer.hpp
//  观察者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp

#include "Subject.hpp"
#include <stdio.h>
#include <string>
using namespace std;

typedef string State;

class Observer{
public:
    virtual ~Observer();
    virtual void Update(Subject* sub)=0;
    virtual void PrintInfo()=0;
protected:
    Observer();
    State _st;
private:
};

class ConcreteObserverA:public Observer{
public:
    virtual Subject* GetSubject();
    ConcreteObserverA(Subject* sub);
    virtual ~ConcreteObserverA();
    void Update(Subject* sub);
    void PrintInfo();
protected:
private:
    Subject* _sub;
};

class ConcreteObserverB:public Observer{
public:
    virtual Subject* GetSubject();
    ConcreteObserverB(Subject* sub);
    virtual ~ConcreteObserverB();
    void Update(Subject* sub);
    void PrintInfo();
protected:
private:
    Subject* _sub;
};


#endif /* Observer_hpp */
