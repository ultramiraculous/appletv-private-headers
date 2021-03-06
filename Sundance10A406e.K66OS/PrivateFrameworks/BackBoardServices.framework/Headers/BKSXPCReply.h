/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_xpc_object;

@interface BKSXPCReply : NSObject {
	NSObject<OS_xpc_object> *_message;	// 4 = 0x4
}
+ (id)messageWithReply:(id)reply;	// 0x3641ee79
- (id)initWithReply:(id)reply;	// 0x3641eec1
- (void)dealloc;	// 0x3641ef09
- (id)message;	// 0x3641ef75
- (long long)messageKind;	// 0x3641ef4d
- (void)sendReply:(id)reply;	// 0x3641ef85
@end

