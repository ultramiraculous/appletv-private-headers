/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSCoding> {
@private
	NSString *_type;	// 4 = 0x4
	NSString *_qualifier;	// 8 = 0x8
	id<NSObject> _criteria;	// 12 = 0xc
}
@property(readonly, retain) NSString *qualifier;	// G=0x34f11079; converted property
@property(readonly, retain) NSString *type;	// G=0x34f11069; converted property
- (id)init;	// 0x34f107b5
- (id)initWithCoder:(id)coder;	// 0x34f10cd9
- (id)initWithCriteria:(id)criteria allRequired:(BOOL)required;	// 0x34f10c65
- (id)initWithType:(id)type qualifier:(id)qualifier expression:(id)expression;	// 0x34f10c09
- (id)_initWithType:(id)type qualifier:(id)qualifier criteria:(id)criteria;	// 0x34f107cd
- (id)criteria;	// 0x34f11089
- (void)dealloc;	// 0x34f10b49
- (id)description;	// 0x34f10b95
- (void)encodeWithCoder:(id)coder;	// 0x34f10f89
// converted property getter: - (id)qualifier;	// 0x34f11079
// converted property getter: - (id)type;	// 0x34f11069
@end

