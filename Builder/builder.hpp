//
//  builder.hpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef builder_hpp
#define builder_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Product;
class Builder{
public:
    virtual ~Builder();
    virtual void BuildPartA(const string& buildPara)=0;
    virtual void BuildPartB(const string& buildPara)=0;
    virtual void BuildPartC(const string& buildPara)=0;
    virtual Product* GetProduct()=0;
protected:
    Builder();
};

class ConcreteBuilder:public Builder{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuildPartA(const string& buildPara);
    void BuildPartB(const string& buildPara);
    void BuildPartC(const string& buildPara);
    Product* GetProduct();
    
};

#endif /* builder_hpp */
