/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface DAMailMessage : NSObject <NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x3395a36d
- (id)attachments;	// 0x3395a0dd
- (id)body;	// 0x3395a0cd
- (int)bodySize;	// 0x3395a0d1
- (int)bodyTruncated;	// 0x3395a0d5
- (id)cc;	// 0x3395a0a9
- (id)conversationId;	// 0x3395a0f1
- (id)conversationIndex;	// 0x3395a0f5
- (id)date;	// 0x3395a0b5
- (id)displayTo;	// 0x3395a0bd
- (void)encodeWithCoder:(id)coder;	// 0x3395a3ad
- (BOOL)flagged;	// 0x3395a0c9
- (BOOL)flaggedIsSet;	// 0x3395a10d
- (id)folderID;	// 0x3395a101
- (id)from;	// 0x3395a0ad
- (int)importance;	// 0x3395a0c1
- (int)lastVerb;	// 0x3395a105
- (id)longID;	// 0x3395a0fd
- (BOOL)meetingRequestIsActionable;	// 0x3395a0e9
- (id)meetingRequestMetaData;	// 0x3395a0e5
- (id)meetingRequestUUID;	// 0x3395a0e1
- (id)messageClass;	// 0x3395a0d9
- (BOOL)read;	// 0x3395a0c5
- (BOOL)readIsSet;	// 0x3395a109
- (id)remoteID;	// 0x3395a0f9
- (id)replyTo;	// 0x3395a0b1
- (id)rfc822Data;	// 0x3395a119
- (int)smimeType;	// 0x3395a115
- (id)subject;	// 0x3395a0b9
- (id)threadTopic;	// 0x3395a0ed
- (id)to;	// 0x3395a0a5
- (BOOL)verbIsSet;	// 0x3395a111
@end

