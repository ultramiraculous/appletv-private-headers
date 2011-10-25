/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "CoreDAVLeafDataPayload.h"
#import "CoreDAVModifiedContainer.h"
#import "CoreDAVAddedContainer.h"
#import <CoreDAVContainer.h> // Unknown library

@class NSURL, NSDictionary, NSData, NSString, NSArray, CoreDAVErrorItem, NSMutableArray;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {
	NSDictionary *_appleAttributes;	// 76 = 0x4c
	NSMutableArray *_childrenOrder;	// 80 = 0x50
	NSString *_bulkParsedCTag;	// 84 = 0x54
	NSString *_bulkParsedPTag;	// 88 = 0x58
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 92 = 0x5c
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x337d5415; @synthesize=_appleAttributes
@property(retain) NSString *bulkParsedCTag;	// G=0x337d5425; S=0x337d5439; @synthesize=_bulkParsedCTag
@property(retain) NSString *bulkParsedPTag;	// G=0x337d545d; S=0x337d5471; @synthesize=_bulkParsedPTag
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x337d5495; S=0x337d54a9; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;	// G=0x337d5405; @synthesize=_childrenOrder
@property(readonly, assign) NSData *dataPayload;	// G=0x337d53fd; 
@property(assign) BOOL isBookmarkBarFolder;	// G=0x337d4c59; S=0x337d4e35; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x337d4c29; S=0x337d4d71; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x337d4c89; S=0x337d4ef9; @dynamic
@property(retain) NSURL *serverID;	// G=0x337d53e9; S=0x337d53f9; 
@property(readonly, assign) NSString *syncKey;	// G=0x337d5401; 
+ (id)copyPropertyMappingsForParser;	// 0x337d4991
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x337d46f5
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x337d4771
- (id)_appleAttributesString;	// 0x337d4fbd
- (void)_faultResourceType;	// 0x337d4cb9
// declared property getter: - (id)appleAttributes;	// 0x337d5415
- (void)applyParsedProperties:(id)properties;	// 0x337d4a9d
// declared property getter: - (id)bulkParsedCTag;	// 0x337d5425
// declared property getter: - (id)bulkParsedPTag;	// 0x337d545d
// declared property getter: - (id)bulkUploadErrorItem;	// 0x337d5495
// declared property getter: - (id)childrenOrder;	// 0x337d5405
- (id)copyMkcolTask;	// 0x337d5215
- (id)copyPropPatchTask;	// 0x337d5029
// declared property getter: - (id)dataPayload;	// 0x337d53fd
- (void)dealloc;	// 0x337d48f5
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x337d4c59
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x337d4c29
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x337d4c89
// declared property getter: - (id)serverID;	// 0x337d53e9
// declared property setter: - (void)setBulkParsedCTag:(id)tag;	// 0x337d5439
// declared property setter: - (void)setBulkParsedPTag:(id)tag;	// 0x337d5471
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x337d54a9
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x337d4e35
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x337d4d71
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x337d4ef9
// declared property setter: - (void)setServerID:(id)anId;	// 0x337d53f9
// declared property getter: - (id)syncKey;	// 0x337d5401
@end

