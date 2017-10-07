//
//  Subject.cpp
//  观察者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "Subject.hpp"
#include "Observer.hpp"

#include <iostream>
#include <list>
#include <string>
using namespace std;
typedef string  state;

Subject::Subject(){
    //在模板的使用之前一定要new，创建
    _obvs=new list<Observer*>;
}

Subject::~Subject(){
}

void Subject::Attach(Observer *obv){
    _obvs->push_front(obv);
}

void Subject::Detach(Observer *obv){
    if(obv!=NULL)
        _obvs->remove(obv);
}

void Subject::Notify(){
    list<Observer*>::iterator it;
    it=_obvs->begin();
    for(;it!=_obvs->end();it++){
        (*it)->Update(this);
    }
}

ConcreteSubject::ConcreteSubject(){
    _st='\0';
}

ConcreteSubject::~ConcreteSubject(){}

State ConcreteSubject::GetState(){
    return _st;
}

void ConcreteSubject::SetState(const State& st){
    _st=st;
}


