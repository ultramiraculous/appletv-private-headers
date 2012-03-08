/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionTrigger : MCAction {
	NSString *mActionKey;	// 16 = 0x10
}
@property(copy) NSString *actionKey;	// G=0x343ac1b9; S=0x343ac1cd; @synthesize=mActionKey
+ (id)actionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withActionKey:(id)actionKey;	// 0x343abfc5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x343ac03d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x343ac161
// declared property getter: - (id)actionKey;	// 0x343ac1b9
- (void)demolish;	// 0x343ac0ad
- (id)imprint;	// 0x343ac101
// declared property setter: - (void)setActionKey:(id)key;	// 0x343ac1cd
@end
