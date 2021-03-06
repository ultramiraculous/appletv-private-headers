/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class SSURLConnectionRequest, NSString;

@interface HSAccountStore : NSObject {
	int _defaultsDidChangeToken;	// 4 = 0x4
	SSURLConnectionRequest *_groupIDRequest;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleID;	// G=0x33380aa5; S=0x33380bcd; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x33380ca1; S=0x33381511; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x33381565; S=0x33381575; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x33380cd1; S=0x33380ce9; @dynamic
+ (id)defaultStore;	// 0x33380809
- (id)init;	// 0x333808b9
// declared property getter: - (id)appleID;	// 0x33380aa5
- (BOOL)canDetermineGroupID;	// 0x33380d85
- (void)clearAllCredentials;	// 0x33381475
- (void)clearCaches;	// 0x333814bd
- (void)clearGroupID;	// 0x333814fd
- (void)dealloc;	// 0x33380a31
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x33380dc1
// declared property getter: - (id)groupID;	// 0x33380ca1
// declared property getter: - (id)groupIDRequest;	// 0x33381565
// declared property getter: - (id)password;	// 0x33380cd1
// declared property setter: - (void)setAppleID:(id)anId;	// 0x33380bcd
// declared property setter: - (void)setGroupID:(id)anId;	// 0x33381511
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x33381575
// declared property setter: - (void)setPassword:(id)password;	// 0x33380ce9
@end

