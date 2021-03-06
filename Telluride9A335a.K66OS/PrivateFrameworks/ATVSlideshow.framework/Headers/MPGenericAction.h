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
	NSMutableDictionary *_attributes;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *attributes;	// G=0x31a3d609; S=0x31a3d31d; @synthesize=_attributes
+ (id)genericAction;	// 0x31a3d109
- (id)init;	// 0x31a3d14d
- (id)initWithCoder:(id)coder;	// 0x31a3d18d
- (id)attributeForKey:(id)key;	// 0x31a3d2fd
// declared property getter: - (id)attributes;	// 0x31a3d609
- (id)copyWithZone:(NSZone *)zone;	// 0x31a3d2a9
- (void)dealloc;	// 0x31a3d1fd
- (void)encodeWithCoder:(id)coder;	// 0x31a3d249
- (void)removeAttributeForKey:(id)key;	// 0x31a3d4f9
- (void)setAction:(id)action;	// 0x31a3d5ad
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x31a3d3e9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31a3d31d
@end

