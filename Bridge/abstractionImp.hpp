//
//  abstractionImp.hpp
//  桥接模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef abstractionImp_hpp
#define abstractionImp_hpp

#include <stdio.h>

class AbstractionImp{
public:
    virtual ~AbstractionImp();
    virtual void Operation()=0;
protected:
    AbstractionImp();
};

class ConcreteAbstractionImpA:public AbstractionImp{
public:
    ConcreteAbstractionImpA();
    ~ConcreteAbstractionImpA();
    virtual void Operation();
};

class ConcreteAbstractionImpB:public AbstractionImp{
public:
    ConcreteAbstractionImpB();
    ~ConcreteAbstractionImpB();
    virtual void Operation();
};


#endif /* abstractionImp_hpp */
