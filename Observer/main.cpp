//
//  main.cpp
//  观察者模式
//
//  Created by 杨子荣 on 2017/10/7.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "Subject.hpp"
#include "Observer.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    ConcreteSubject* sub=new ConcreteSubject();
    Observer* o1=new ConcreteObserverA(sub);
    Observer* o2=new ConcreteObserverB(sub);
    sub->SetState("old");
    sub->Notify();
    sub->SetState("new");
    sub->Notify();
    return 0;
}
