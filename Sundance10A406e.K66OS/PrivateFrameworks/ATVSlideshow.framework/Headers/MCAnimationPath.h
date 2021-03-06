/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class NSString;

@interface MCAnimationPath : MCObjectLight {
	NSString *mKey;	// 4 = 0x4
	BOOL mIsTriggered;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL isTriggered;	// G=0x3613ea25; S=0x3613ea35; @synthesize=mIsTriggered
@property(copy) NSString *key;	// G=0x3613ea01; S=0x3613ea15; @synthesize=mKey
+ (id)animationPathWithKey:(id)key;	// 0x3613e7ed
- (id)initWithImprint:(id)imprint;	// 0x3613e841
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3613e9c5
- (void)demolish;	// 0x3613e8ed
- (id)imprint;	// 0x3613e919
// declared property getter: - (BOOL)isTriggered;	// 0x3613ea25
// declared property getter: - (id)key;	// 0x3613ea01
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3613ea35
// declared property setter: - (void)setKey:(id)key;	// 0x3613ea15
@end

