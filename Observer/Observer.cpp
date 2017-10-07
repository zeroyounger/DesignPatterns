//
//  Observer.cpp
//  观察者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "Observer.hpp"
#include "Subject.hpp"
#include <iostream>
#include <string>
using namespace std;

Observer::Observer(){
    _st='\0';
}

Observer::~Observer(){}

ConcreteObserverA::ConcreteObserverA(Subject* sub){
    _sub=sub;
    _sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA(){
    _sub->Detach(this);
    if(_sub!=0)
        delete _sub;
}

Subject* ConcreteObserverA::GetSubject(){
    return _sub;
}

void ConcreteObserverA::PrintInfo(){
    cout<<"ConcreteObserverA observer..."<<_sub->GetState()<<endl;
}

void ConcreteObserverA::Update(Subject *sub){
    _st=sub->GetState();
    PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub){
    _sub=sub;
    _sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB(){
    _sub->Detach(this);
    if(_sub!=0)
        delete _sub;
}

Subject* ConcreteObserverB::GetSubject(){
    return _sub;
}

void ConcreteObserverB::PrintInfo(){
    cout<<"ConcreteObserverB observer...."<<_sub->GetState()<<endl;
}

void ConcreteObserverB::Update(Subject *sub){
    _st=sub->GetState();
    PrintInfo();
}



















