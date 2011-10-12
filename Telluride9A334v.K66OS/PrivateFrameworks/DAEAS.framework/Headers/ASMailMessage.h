/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x30a69615
- (id)initWithCoder:(id)coder;	// 0x30a69d9d
- (id)attachments;	// 0x30a69b21
- (id)body;	// 0x30a69a51
- (int)bodySize;	// 0x30a69a71
- (int)bodyTruncated;	// 0x30a69add
- (id)cc;	// 0x30a69929
- (id)conversationId;	// 0x30a69ba1
- (id)conversationIndex;	// 0x30a69bc1
- (id)date;	// 0x30a69989
- (void)dealloc;	// 0x30a695c9
- (id)description;	// 0x30a69669
- (id)displayTo;	// 0x30a699c9
- (void)encodeWithCoder:(id)coder;	// 0x30a69e9d
- (BOOL)flagged;	// 0x30a69a2d
- (BOOL)flaggedIsSet;	// 0x30a69c85
- (id)folderID;	// 0x30a69c21
- (id)from;	// 0x30a69949
- (int)importance;	// 0x30a699e9
- (int)lastVerb;	// 0x30a69c41
- (id)longID;	// 0x30a69c01
- (id)meetingRequestMetaData;	// 0x30a69b61
- (id)meetingRequestUUID;	// 0x30a69b41
- (id)messageClass;	// 0x30a69b01
- (BOOL)read;	// 0x30a69a09
- (BOOL)readIsSet;	// 0x30a69c61
- (id)remoteID;	// 0x30a69be1
- (id)replyTo;	// 0x30a69969
- (id)rfc822Data;	// 0x30a69d39
- (int)smimeType;	// 0x30a69ccd
- (id)subject;	// 0x30a699a9
- (id)threadTopic;	// 0x30a69b81
- (id)to;	// 0x30a69909
- (BOOL)verbIsSet;	// 0x30a69ca9
@end

