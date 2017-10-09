//
//  product.hpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef product_hpp
#define product_hpp

#include <stdio.h>
class Product{
public:
    Product();
    ~Product();
    void ProductPart();
};

class ProductPart{
public:
    ProductPart();
    ~ProductPart();
    ProductPart* BuildPart();
};

#endif /* product_hpp */
