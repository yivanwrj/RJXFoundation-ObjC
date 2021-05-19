//
//  NSString+RJXVerify.h
//  Pods-RJXFoundation-ObjC_Example
//
//  Created by WRJ Yivan on 2021/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 验证分类
@interface NSString (RJXVerify)

/// 验证是否符合邮件格式 正常Yes
/// @param email 邮件地址
+ (BOOL)verifyEmail:(NSString *)email;

/// 验证是否符合电话格式(中国大陆) 正常Yes
/// @param phone 手机号
+ (BOOL)verifyPhone:(NSString *)phone;

/// 判断是否为纯数字 正常Yes
/// @param digitalString 待判定的字符串
+ (BOOL)verifyPureDigital:(NSString *)digitalString;

/// 判断是否有特殊符号 正常Yes
/// @param content 待判定的字符串
+ (BOOL)verifyIllegalCharacter:(NSString *)content;

/// 判断是否符合身份证号 正常Yes
/// @param identityCard 待判定的身份证号
+ (BOOL)verifyIdentityCard:(NSString *)identityCard;

/// 判断字符串是否为空 正常返回NO，否则返回Yes
/// @param string 待判定的字符串
+ (BOOL)verifyBlankString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
