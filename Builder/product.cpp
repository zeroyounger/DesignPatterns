//
//  product.cpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#include "product.hpp"
#include <iostream>
using namespace std;

Product::Product(){
    ProductPart();
    cout<<"return a product"<<endl;
}

Product::~Product(){}

void Product::ProductPart(){
    cout<<"build part of product.."<<endl;
}

ProductPart::ProductPart(){
    //cout<<"build productpart.."<<endl;
}

ProductPart::~ProductPart(){}

ProductPart* ProductPart::BuildPart(){
    return new ProductPart;
}
