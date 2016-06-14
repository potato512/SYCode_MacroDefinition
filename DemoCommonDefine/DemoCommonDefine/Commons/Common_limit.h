//
//  Common_limit.h
//  zhangshaoyu
//
//  Created by zhangshaoyu on 14-10-27.
//  Copyright (c) 2014年 zhangshaoyu. All rights reserved.
//  功能描述：常用限制

#ifndef zhangshaoyu_Common_limit_h
#define zhangshaoyu_Common_limit_h

/********************** limit ****************************/

#pragma mark - 时间限制

/// 提示符时间长度
#define kHUDTime 2.5

/// 动画时间长度
#define kAnimationsTime 0.3

#pragma mark - 宽高限制

/// 分割线高度
#define kSeparatorlineHeight 0.5

/// IQKeyboard与输入控件间距
#define IQKeyboardDistanceFromTextField 10.0

#pragma mark - 字数输入限制

/// 用户名：4-20 字母数字下划线构成 可以是邮箱
#define kMax_Account             20

/// 密码：6-20位，最大位数
#define kMax_Password            20

/// 密码：6-20位，最小位数
#define kMin_Password            6

/// 交易密码: 6-16位
#define kMax_PayPassword         16

/// 昵称：最多20位字符
#define kMax_NickName            10

/// 验证码：6位
#define kMax_MessageValidateCode 6

/// 个性签名
#define kMax_Signature           100

/// 地址
#define kMax_Address             100

/// 手机号
#define kMax_Phone               11

/// 电话号
#define kMax_Tel                 18

/// 身份证号
#define kMax_IDCardNum           18
/// 真实姓名
#define kMax_RealName            20
/// 金额位数限制
#define kMax_Money               12
/// 银行卡号，12位号码
#define kMin_BankCardNumber      12
/// 银行卡号，19位号码
#define kMax_BankCardNumber      19

#pragma mark - 字符输入限制

/// 字符输入限制
#define kNUMBERS     @"0123456789"
#define kxX          @"xX"
#define kAlphaNum    @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

#define kSpecial_Character  @"[-/:\\;()$&@.,?!'\"{}#%^*+=_|~<>£¥€•]-：；（）¥@“”。，、？！.【】｛｝#%^*+=_—|～《》$&•…,^_^?!'"

#define kSpecialCharacterAndNumber @"[-/:\\;()$&@.,?!'\"{}#%^*+=_|~<>£¥€•]-：；（）¥@“”。，、？！.【】｛｝#%^*+=_—|～《》$&•…,^_^?!'0123456789"

#define kAllCharacterAndNumber @"[-/:\\;()$&@.,?!'\"{}#%^*+=_|~<>£¥€•]-：；（）¥@“”。，、？！.【】｛｝#%^*+=_—|～《》$&•…,^_^?!'0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

/// 验证码，或其他数字输入（数字）
#define kRegexNumber          @"[0-9]"

/// 验证码，或其他数字输入（数字/大小写字母）
#define kRegexNumberLetter    @"[A-Za-z0-9]"

/// 验证码，或其他数字输入（大小写字母）
#define kRegexLetter          @"[A-Za-z]"

/// 验证码，或其他数字输入（大写字母）
#define kRegexUppercaseLetter @"[A-Z]"

/// 验证码，或其他数字输入（小定字母）
#define kRegexLowercaseLetter @"[a-z]"

/// 验证码，或其他数字输入（中文）
#define kRegexCN              @"[0x4e00-0x9fff]"

/// 验证码，或其他数字输入（数字/大小写字母/中文）
#define kRegexNumberLetterCN  @"[A-Za-z0-9\u4e00-\u9fa5]" // \u4e00-\u9fa5 \0x4e00-\0x9fff

//@"^[0-9a-zA-Z]{4,12}$"

/********************** limit ****************************/

#endif
