/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionTrigger : MCAction {
	NSString *_actionKey;	// 12 = 0xc
}
@property(copy) NSString *actionKey;	// G=0x32508be5; S=0x32508bf9; @synthesize=_actionKey
+ (id)actionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withActionKey:(id)actionKey;	// 0x325089a5
- (id)initWithImprint:(id)imprint;	// 0x32508a19
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32508b39
// declared property getter: - (id)actionKey;	// 0x32508be5
- (void)demolish;	// 0x32508a89
- (id)description;	// 0x32508b8d
- (id)imprint;	// 0x32508ad9
// declared property setter: - (void)setActionKey:(id)key;	// 0x32508bf9
@end

