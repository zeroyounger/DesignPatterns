//
//  Subject.hpp
//  观察者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include <stdio.h>
#include <list>
#include <string>
using namespace std;
typedef string State;
class Observer;

class Subject{
public:
    virtual ~Subject();
    virtual void Attach(Observer* obv);//注册
    virtual void Detach(Observer* obv);//注销
    virtual void Notify();//观察者同步
    virtual void SetState(const State& st)=0;//设置状态和获取状态
    virtual State GetState()=0;
protected:
    Subject();
private:
    list<Observer*>* _obvs;
};

class ConcreteSubject:public Subject{
public:
    ConcreteSubject();
    ~ConcreteSubject();
    State GetState();
    void SetState(const State& st);
protected:
private:
    State _st;
};

#endif /* Subject_hpp */
