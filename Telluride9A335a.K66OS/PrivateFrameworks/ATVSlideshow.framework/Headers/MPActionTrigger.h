/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPActionTrigger : MPAction {
	NSString *_actionKey;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *actionKey;	// G=0x31a3d0f9; S=0x31a3cf1d; @synthesize=_actionKey
+ (id)actionTrigger;	// 0x31a3cddd
- (id)init;	// 0x31a3ce21
- (id)initWithCoder:(id)coder;	// 0x31a3ce61
// declared property getter: - (id)actionKey;	// 0x31a3d0f9
- (id)copyWithZone:(NSZone *)zone;	// 0x31a3d049
- (void)dealloc;	// 0x31a3ced1
- (void)encodeWithCoder:(id)coder;	// 0x31a3cfe9
- (void)setAction:(id)action;	// 0x31a3d09d
// declared property setter: - (void)setActionKey:(id)key;	// 0x31a3cf1d
@end

