/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateRemoveAnimation : CAStateElement {
@private
	NSString *_key;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *key;	// G=0x32a7b83d; S=0x32a7b851; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x32a7b6f9
- (void)apply:(id)apply;	// 0x32a7b4ad
- (id)copyWithZone:(NSZone *)zone;	// 0x32a7b621
- (void)dealloc;	// 0x32a7b76d
- (id)debugDescription;	// 0x32a7b7b9
- (void)encodeWithCoder:(id)coder;	// 0x32a7b69d
// declared property getter: - (id)key;	// 0x32a7b83d
- (id)keyPath;	// 0x32a7b391
- (BOOL)matches:(id)matches;	// 0x32a7b3d5
// declared property setter: - (void)setKey:(id)key;	// 0x32a7b851
@end
