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
@property(copy, nonatomic) NSDictionary *attributes;	// G=0x3618d685; S=0x3618d5bd; @synthesize=_attributes
+ (id)genericAction;	// 0x3618d3ad
- (id)init;	// 0x3618d3f1
- (id)initWithCoder:(id)coder;	// 0x3618d431
- (id)attributeForKey:(id)key;	// 0x3618d59d
// declared property getter: - (id)attributes;	// 0x3618d685
- (id)copyWithZone:(NSZone *)zone;	// 0x3618d549
- (void)dealloc;	// 0x3618d4a1
- (void)encodeWithCoder:(id)coder;	// 0x3618d4ed
- (void)setAction:(id)action;	// 0x3618d629
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3618d5bd
@end

