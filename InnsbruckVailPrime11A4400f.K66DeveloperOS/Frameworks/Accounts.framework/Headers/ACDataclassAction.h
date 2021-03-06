/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import </libobjc.A.h>
#import "NSSecureCoding.h"


@interface ACDataclassAction : NSObject <NSSecureCoding> {
	BOOL _isDestructive;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL isDestructive;	// G=0x2c995615; @synthesize=_isDestructive
@property(readonly, assign, nonatomic) int type;	// G=0x2c995605; @synthesize=_type
+ (id)actionWithType:(int)type;	// 0x2c99521d
+ (id)destructiveActionWithType:(int)type;	// 0x2c99525d
+ (BOOL)supportsSecureCoding;	// 0x2c995219
- (id)initWithCoder:(id)coder;	// 0x2c9952ed
- (id)initWithType:(int)type destructivity:(BOOL)destructivity;	// 0x2c99529d
- (id)description;	// 0x2c9954c9
- (void)encodeWithCoder:(id)coder;	// 0x2c9953f9
- (unsigned)hash;	// 0x2c9955f5
// declared property getter: - (BOOL)isDestructive;	// 0x2c995615
- (BOOL)isEqual:(id)equal;	// 0x2c995575
// declared property getter: - (int)type;	// 0x2c995605
@end

