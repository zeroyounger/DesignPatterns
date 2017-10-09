//
//  product.hpp
//  抽象工厂
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef product_hpp
#define product_hpp

#include <stdio.h>

class AbstractProductA{
public:
    virtual ~AbstractProductA();
protected:
    AbstractProductA();
};

class AbstractProductB{
public:
    virtual ~AbstractProductB();
protected:
    AbstractProductB();
};

class ProductA1:public AbstractProductA{
public:
    ProductA1();
    ~ProductA1();
};

class ProductA2:public AbstractProductA{
public:
    ProductA2();
    ~ProductA2();
};

class ProductB1:public AbstractProductB{
public:
    ProductB1();
    ~ProductB1();
};

class ProductB2:public AbstractProductB{
public:
    ProductB2();
    ~ProductB2();
};

#endif /* product_hpp */
