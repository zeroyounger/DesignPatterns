//
//  main.cpp
//  桥接模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include <iostream>
#include "abstraction.hpp"
#include "abstractionImp.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    AbstractionImp* imp=new ConcreteAbstractionImpA();
    Abstraction* abs=new RefinedAbstraction(imp);
    abs->Operation();
    return 0;
}
