//
//  builder.cpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "builder.hpp"
#include "product.hpp"
#include <iostream>
using namespace std;

Builder::Builder(){}
Builder::~Builder(){}
ConcreteBuilder::ConcreteBuilder(){}
ConcreteBuilder::~ConcreteBuilder(){}

void ConcreteBuilder::BuildPartA(const string &buildPara){
    cout<<"Step1:Build PartA..."<<buildPara<<endl;
}

void ConcreteBuilder::BuildPartB(const string &buildPara){
    cout<<"Step1:Build PartB..."<<buildPara<<endl;
}

void ConcreteBuilder::BuildPartC(const string &buildPara){
    cout<<"Step1:Build PartC..."<<buildPara<<endl;
}

Product* ConcreteBuilder::GetProduct(){
    BuildPartA("pre-defined");
    BuildPartB("pre-defined");
    BuildPartC("pre-defined");
    return new Product();
}
