/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCAnimationTrigger : MCAction {
	NSString *mAnimationKey;	// 24 = 0x18
	NSMutableDictionary *mAnimationAttributes;	// 28 = 0x1c
}
@property(copy) NSDictionary *animationAttributes;	// G=0x33da8ff9; S=0x33da90e9; @synthesize=mAnimationAttributes
@property(copy) NSString *animationKey;	// G=0x33da92b1; S=0x33da92c9; @synthesize=mAnimationKey
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33da8b75
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33da9235
- (id)animationAttributeForKey:(id)key;	// 0x33da8d41
// declared property getter: - (id)animationAttributes;	// 0x33da8ff9
// declared property getter: - (id)animationKey;	// 0x33da92b1
- (void)demolish;	// 0x33da8c45
- (id)imprint;	// 0x33da8cbd
- (void)setAnimationAttribute:(id)attribute forKey:(id)key;	// 0x33da8e59
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x33da90e9
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x33da92c9
@end
