/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
	int _maxSize;	// 16 = 0x10
}
@property(readonly, assign) int bodyFormat;	// G=0x31eb6269; converted property
@property(readonly, assign) int maxSize;	// G=0x31eb6279; converted property
@property(readonly, retain) NSString *messageID;	// G=0x31eb6259; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withMessageID:(id)messageID withBodySizeLimit:(int)bodySizeLimit;	// 0x31eb61c9
// converted property getter: - (int)bodyFormat;	// 0x31eb6269
- (void)dealloc;	// 0x31eb6471
- (id)description;	// 0x31eb63e9
- (unsigned)hash;	// 0x31eb6289
- (BOOL)isEqual:(id)equal;	// 0x31eb6325
// converted property getter: - (int)maxSize;	// 0x31eb6279
// converted property getter: - (id)messageID;	// 0x31eb6259
@end
