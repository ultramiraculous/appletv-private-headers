/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "XPCProxyTarget.h"
#import <NSObject.h> // Unknown library


@interface BBSettingsGateway : NSObject <XPCProxyTarget> {
	id _serverProxy;	// 4 = 0x4
}
+ (void)initialize;	// 0x36d2666d
- (id)init;	// 0x36d26671
- (void)dealloc;	// 0x36d267f9
- (void)getSectionInfoWithCompletion:(id)completion;	// 0x36d26859
- (void)getSectionOrderRuleWithCompletion:(id)completion;	// 0x36d26925
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x36d26a79
- (void)setOrderedSectionIDs:(id)ids;	// 0x36d26a25
- (void)setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x36d26a49
- (void)setSectionOrderRule:(unsigned)rule;	// 0x36d26a01
@end
