//
//  LGSingleton.h
//  haha
//
//  Created by Try.Lee on 2017/4/15.
//  Copyright © 2017年 Try.Lee. All rights reserved.
//

#import <UIKit/UIKit.h>



//******************************** 将类方法声明宏，传入类名 ********************************
#define LGSingletonH(ClassName) +(instancetype) share##ClassName;



//********************************* 将方法的实现声明为宏 **********************************
#define LGSingletonM(ClassName) static id _instance;\
\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
\
    return _instance;\
}\
\
\
+(instancetype)share##ClassName\
{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [[self alloc] init];\
    });\
\
    return _instance;\
}\
\
\
-(id)copyWithZone:(NSZone *)zone\
{\
    return _instance;\
}\
\
\
- (id)mutableCopyWithZone:(nullable NSZone *)zone\
{\
    return _instance;\
}
