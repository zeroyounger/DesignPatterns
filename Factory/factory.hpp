//
//  factory.hpp
//  工厂模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef factory_hpp
#define factory_hpp

#include <stdio.h>

class Product;
class Factory{
public:
    virtual ~Factory()=0;
    virtual Product* CreteProduct()=0;
protected:
    Factory();
};

class ConcreteFactory:public Factory{
public:
    ~ConcreteFactory();
    ConcreteFactory();
    Product* CreteProduct();
};


#endif /* factory_hpp */
