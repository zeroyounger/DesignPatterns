//
//  abstraction.hpp
//  桥接模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef abstraction_hpp
#define abstraction_hpp

#include <stdio.h>
class AbstractionImp;
class Abstraction{
public:
    virtual ~Abstraction();
    virtual void Operation()=0;
protected:
    Abstraction();
};

class RefinedAbstraction:public Abstraction{
public:
    RefinedAbstraction(AbstractionImp* imp);
    ~RefinedAbstraction();
    void Operation();
private:
    AbstractionImp* _imp;
};

#endif /* abstraction_hpp */
