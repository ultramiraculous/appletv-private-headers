/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import </libobjc.A.h>

@class NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject {
	int _defaultsDidChangeToken;	// 4 = 0x4
	SSURLConnectionRequest *_groupIDRequest;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleID;	// G=0x310860f9; S=0x31086221; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x310862f5; S=0x31086af9; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x31086b4d; S=0x31086b5d; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x31086325; S=0x3108633d; @dynamic
+ (id)defaultStore;	// 0x31085e59
- (id)init;	// 0x31085f0d
// declared property getter: - (id)appleID;	// 0x310860f9
- (BOOL)canDetermineGroupID;	// 0x310863d9
- (void)clearAllCredentials;	// 0x31086a5d
- (void)clearCaches;	// 0x31086aa5
- (void)clearGroupID;	// 0x31086ae5
- (void)dealloc;	// 0x31086085
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x31086415
// declared property getter: - (id)groupID;	// 0x310862f5
// declared property getter: - (id)groupIDRequest;	// 0x31086b4d
// declared property getter: - (id)password;	// 0x31086325
// declared property setter: - (void)setAppleID:(id)anId;	// 0x31086221
// declared property setter: - (void)setGroupID:(id)anId;	// 0x31086af9
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x31086b5d
// declared property setter: - (void)setPassword:(id)password;	// 0x3108633d
@end
