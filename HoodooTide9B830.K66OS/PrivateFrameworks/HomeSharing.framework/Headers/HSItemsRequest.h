/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSItemsRequest : HSRequest {
@private
	BOOL _shouldParseResponse;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x35169811; S=0x35169821; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x351696c1
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x35169751
- (id)initWithAction:(id)action;	// 0x35169639
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x35169679
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x351696fd
- (id)canonicalResponseForResponse:(id)response;	// 0x35169791
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x35169821
// declared property getter: - (BOOL)shouldParseResponse;	// 0x35169811
@end

