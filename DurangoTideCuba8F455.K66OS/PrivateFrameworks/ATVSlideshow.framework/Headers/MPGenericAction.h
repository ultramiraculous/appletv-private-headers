/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MPGenericAction : MPAction {
	NSMutableDictionary *_attributes;	// 16 = 0x10
}
@property(copy, nonatomic) NSDictionary *attributes;	// G=0x33c69d8d; S=0x33c69bb9; @synthesize=_attributes
+ (id)genericAction;	// 0x33c699b1
- (id)init;	// 0x33c699ed
- (id)initWithCoder:(id)coder;	// 0x33c69a2d
- (id)attributeForKey:(id)key;	// 0x33c69b99
// declared property getter: - (id)attributes;	// 0x33c69d8d
- (id)copyWithZone:(NSZone *)zone;	// 0x33c69b41
- (void)dealloc;	// 0x33c69a99
- (void)encodeWithCoder:(id)coder;	// 0x33c69ae5
- (void)removeAttributeForKey:(id)key;	// 0x33c69ce9
- (void)setAction:(id)action;	// 0x33c69d31
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x33c69c39
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33c69bb9
@end

