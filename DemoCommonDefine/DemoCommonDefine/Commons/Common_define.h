//
//  Common_define.h
//  zhangshaoyu
//
//  Created by zhangshaoyu on 14-10-27.
//  Copyright (c) 2014年 zhangshaoyu. All rights reserved.
//  功能描述：常用宏定义


/********************** 头文件 ****************************/

#pragma mark - 导入头文件

#import "AppDelegate.h"

// 常用宏定义
#import "Common_font.h"
#import "Common_color.h"
#import "Common_Markwords.h"
#import "Common_time.h"
#import "Common_limit.h"
#import "Common_Image.h"
#import "Common_Device.h"
#import "Common_Symbol.h"
#import "Common_FilePath.h"

#ifndef HKC_Common_define_h
#define HKC_Common_define_h

///********************** app环境 ****************************/


#pragma mark - app环境

#define isTrueEnvironment 0

#if isTrueEnvironment

/// 真实环境
#define kServerHost         @"121.199.22.45:1080/rrcpro-api"

#else

/// 测试环境
#define kServerHost         @"192.168.16.219:8082/rrcpro-api"

#endif

/// 判断无网络情况
#define GetNetworkStatusNotReachable ()

/********************** 跳转App操作 ****************************/

#pragma mark - app跳转

/// 人人创
#define UrlRRC         @"RenRenChuangMember://"

/// 人人创投注界面
#define UrlRRCRegister @"RenRenChuangMember://RRCRegister"

/********************** 常用宏 ****************************/

#pragma mark - 强弱引用

/// block self
#define kSelfWeak __weak typeof(self) weakSelf = self
#define kSelfStrong __strong __typeof__(self) strongSelf = weakSelf

#pragma mark - 国际化字符串

#define kLocalizedString(key) NSLocalizedString(key, nil)

#pragma mark - tag属性

/// 设置View的tag属性
#define kViewWithTag(object,tag) [object viewWithTag:tag]

#pragma mark - GCD

#define GCDBackComplete(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define GCDMainComplete(block) dispatch_async(dispatch_get_main_queue(),block)

#pragma mark - 常用单例

#define kUserDefault [NSUserDefaults standardUserDefaults]

#define kFileManager [NSFileManager defaultManager]

#pragma mark - 角度弧度转换

/// 由角度获取弧度，有弧度获取角度
#define kDegreesToRadian(radian) (M_PI * (radian) / 180.0)
#define kRadianToDegrees(radian) ((radian * 180.0) / (M_PI))

#pragma mark - 日志打印

/// Dlog
#ifdef DEBUG
#   define DLog(fmt, ...) {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
#   define ELog(err) {if(err) DLog(@"%@", err)}
#else
#   define DLog(...)
#   define ELog(err)
#endif

#pragma mark - 对象转换

/// 字符串导url
#define URLWithString(str)  [NSURL URLWithString:str]

/// number转字符串
#define StringWithNumber(number) ([NSString stringWithFormat:@"%@", number])

/// 整型数值转字符串
#define StringWithIntValue(int) ([NSString stringWithFormat:@"%@", @(int)])

/// 整型数值转字符串
#define StringWithIntegerValue(integer) ([NSString stringWithFormat:@"%@", @(integer)])

/// 单精度数值转字符串
#define StringWithFloadValue(float) ([NSString stringWithFormat:@"%@", @(float)])

/// 双精度数值转字符串
#define StringWithDoubleValue(double) ([NSString stringWithFormat:@"%@", @(double)])

/********************** 常用宏 ****************************/

#endif


