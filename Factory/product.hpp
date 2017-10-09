//
//  product.hpp
//  工厂模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef product_hpp
#define product_hpp

#include <stdio.h>

class Product{
public:
    virtual ~Product()=0;
protected:
    Product();//屏蔽构造函数
};

class ConcreteProduct:public Product{
public:
    ~ConcreteProduct();
    ConcreteProduct();
};
#endif /* product_hpp */
