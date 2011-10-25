/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSURL, NSString;

@interface BBAction : NSObject <NSCopying, NSCoding> {
@private
	id _internalBlock;	// 4 = 0x4
	BOOL _hasCallblock;	// 8 = 0x8
	BOOL _canBypassPinLock;	// 9 = 0x9
	NSURL *_launchURL;	// 12 = 0xc
	NSString *_launchBundleID;	// 16 = 0x10
	int replyType;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL canBypassPinLock;	// G=0x337f643d; S=0x337f644d; @synthesize=_canBypassPinLock
@property(assign, nonatomic) BOOL hasCallblock;	// G=0x337f6395; S=0x337f63a5; @synthesize=_hasCallblock
@property(copy, nonatomic) id internalBlock;	// G=0x337f6361; S=0x337f6371; @synthesize=_internalBlock
@property(copy, nonatomic) NSString *launchBundleID;	// G=0x337f63e9; S=0x337f63f9; @synthesize=_launchBundleID
@property(retain, nonatomic) NSURL *launchURL;	// G=0x337f63b5; S=0x337f63c5; @synthesize=_launchURL
@property(assign, nonatomic) int replyType;	// G=0x337f641d; S=0x337f642d; @synthesize
+ (id)actionWithCallblock:(id)callblock;	// 0x337f5a7d
+ (id)actionWithLaunchBundleID:(id)launchBundleID callblock:(id)callblock;	// 0x337f5aed
+ (id)actionWithLaunchURL:(id)launchURL callblock:(id)callblock;	// 0x337f5ab9
+ (id)actionWithTextReplyCallblock:(id)textReplyCallblock;	// 0x337f5b21
- (id)initWithCallblock:(id)callblock;	// 0x337f5b5d
- (id)initWithCoder:(id)coder;	// 0x337f60c1
- (id)initWithTextReplyCallblock:(id)textReplyCallblock;	// 0x337f5bd1
- (id)_initWithInternalCallblock:(id)internalCallblock replyType:(int)type;	// 0x337f5c65
- (id)bundleID;	// 0x337f5ddd
// declared property getter: - (BOOL)canBypassPinLock;	// 0x337f643d
- (id)copyWithZone:(NSZone *)zone;	// 0x337f5f99
- (void)dealloc;	// 0x337f5cdd
- (void)deliverResponse:(id)response;	// 0x337f5ded
- (id)description;	// 0x337f62f1
- (void)encodeWithCoder:(id)coder;	// 0x337f61fd
// declared property getter: - (BOOL)hasCallblock;	// 0x337f6395
- (BOOL)hasLaunchInfo;	// 0x337f5d51
// declared property getter: - (id)internalBlock;	// 0x337f6361
- (BOOL)isAppLaunchAction;	// 0x337f5db5
- (BOOL)isURLLaunchAction;	// 0x337f5d9d
// declared property getter: - (id)launchBundleID;	// 0x337f63e9
// declared property getter: - (id)launchURL;	// 0x337f63b5
- (id)partialDescription;	// 0x337f5e35
// declared property getter: - (int)replyType;	// 0x337f641d
// declared property setter: - (void)setCanBypassPinLock:(BOOL)lock;	// 0x337f644d
// declared property setter: - (void)setHasCallblock:(BOOL)callblock;	// 0x337f63a5
// declared property setter: - (void)setInternalBlock:(id)block;	// 0x337f6371
// declared property setter: - (void)setLaunchBundleID:(id)anId;	// 0x337f63f9
// declared property setter: - (void)setLaunchURL:(id)url;	// 0x337f63c5
// declared property setter: - (void)setReplyType:(int)type;	// 0x337f642d
- (id)url;	// 0x337f5dcd
- (BOOL)wantsTextReply;	// 0x337f5d7d
@end

