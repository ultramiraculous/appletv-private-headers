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
@property(copy, nonatomic) NSString *actionKey;	// G=0x342570f9; S=0x34256f1d; @synthesize=_actionKey
+ (id)actionTrigger;	// 0x34256ddd
- (id)init;	// 0x34256e21
- (id)initWithCoder:(id)coder;	// 0x34256e61
// declared property getter: - (id)actionKey;	// 0x342570f9
- (id)copyWithZone:(NSZone *)zone;	// 0x34257049
- (void)dealloc;	// 0x34256ed1
- (void)encodeWithCoder:(id)coder;	// 0x34256fe9
- (void)setAction:(id)action;	// 0x3425709d
// declared property setter: - (void)setActionKey:(id)key;	// 0x34256f1d
@end
