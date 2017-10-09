//
//  prototype.hpp
//  原型模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef prototype_hpp
#define prototype_hpp

#include <stdio.h>
class Prototype{
public:
    virtual ~Prototype();
    virtual Prototype* Clone()const=0;
protected:
    Prototype();
};

class ConcretePrototype:public Prototype{
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype& cp);
    ~ConcretePrototype();
    Prototype* Clone()const;
};

#endif /* prototype_hpp */
