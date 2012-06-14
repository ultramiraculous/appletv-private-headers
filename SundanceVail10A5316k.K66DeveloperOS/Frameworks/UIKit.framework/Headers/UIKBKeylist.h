/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keys;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3037b295; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x3037b2d5; S=0x3037b2e5; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x3037b2b5; S=0x3037b2c5; @synthesize=m_name
+ (id)keylist;	// 0x3037ac55
- (id)init;	// 0x3037ad05
- (id)initWithCoder:(id)coder;	// 0x3037add1
- (id)initWithName:(id)name keys:(id)keys;	// 0x3037ac9d
- (id)copyWithZone:(NSZone *)zone;	// 0x3037aea1
// declared property getter: - (unsigned)count;	// 0x3037b295
- (void)dealloc;	// 0x3037ad6d
- (id)description;	// 0x3037b215
- (void)encodeWithCoder:(id)coder;	// 0x3037ae49
- (id)keyWithName:(id)name;	// 0x3037b015
// declared property getter: - (id)keys;	// 0x3037b2d5
- (id)keysWithInteractionType:(id)interactionType;	// 0x3037b0fd
// declared property getter: - (id)name;	// 0x3037b2b5
// declared property setter: - (void)setKeys:(id)keys;	// 0x3037b2e5
// declared property setter: - (void)setName:(id)name;	// 0x3037b2c5
@end
