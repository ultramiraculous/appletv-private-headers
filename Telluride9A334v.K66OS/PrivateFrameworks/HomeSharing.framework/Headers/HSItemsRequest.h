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
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x34967bb1; S=0x34967bc1; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x34967a61
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x34967af1
- (id)initWithAction:(id)action;	// 0x349679d9
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x34967a19
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x34967a9d
- (id)canonicalResponseForResponse:(id)response;	// 0x34967b31
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x34967bc1
// declared property getter: - (BOOL)shouldParseResponse;	// 0x34967bb1
@end

