/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>


@interface ATVEvaluation : NSObject {
}
+ (id)evaluationWithName:(id)name;	// 0x30429975
+ (void)initialize;	// 0x30429909
+ (void)registerEvaluation:(id)evaluation withName:(id)name;	// 0x30429991
- (BOOL)evaluateValue:(id)value usingOperator:(id)anOperator withUserInfo:(id)userInfo;	// 0x30429b01
- (SEL)selectorForOperator:(id)anOperator;	// 0x304299cd
@end

