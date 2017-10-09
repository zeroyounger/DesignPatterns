//
//  director.hpp
//  建造模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef director_hpp
#define director_hpp

#include <stdio.h>
class Builder;

class Director{
public:
    Director(Builder* bld);
    ~Director();
    void Construct();
private:
    Builder* _bld;
};

#endif /* director_hpp */
