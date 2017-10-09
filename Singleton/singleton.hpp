//
//  singleton.hpp
//  单例模式
//
//  Created by 杨子荣 on 2017/10/9.
//  Copyright © 2017年 杨子荣. All rights reserved.
//

#ifndef singleton_hpp
#define singleton_hpp

#include <stdio.h>

class Singleton{
public:
    static Singleton* Instance();
protected:
    Singleton();
private:
    static Singleton* _instance;
};

#endif /* singleton_hpp */
