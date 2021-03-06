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
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x36eea415; @synthesize=_appleAttributes
@property(retain) NSString *bulkParsedCTag;	// G=0x36eea425; S=0x36eea439; @synthesize=_bulkParsedCTag
@property(retain) NSString *bulkParsedPTag;	// G=0x36eea45d; S=0x36eea471; @synthesize=_bulkParsedPTag
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x36eea495; S=0x36eea4a9; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;	// G=0x36eea405; @synthesize=_childrenOrder
@property(readonly, assign) NSData *dataPayload;	// G=0x36eea3fd; 
@property(assign) BOOL isBookmarkBarFolder;	// G=0x36ee9c59; S=0x36ee9e35; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x36ee9c29; S=0x36ee9d71; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x36ee9c89; S=0x36ee9ef9; @dynamic
@property(retain) NSURL *serverID;	// G=0x36eea3e9; S=0x36eea3f9; 
@property(readonly, assign) NSString *syncKey;	// G=0x36eea401; 
+ (id)copyPropertyMappingsForParser;	// 0x36ee9991
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x36ee96f5
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x36ee9771
- (id)_appleAttributesString;	// 0x36ee9fbd
- (void)_faultResourceType;	// 0x36ee9cb9
// declared property getter: - (id)appleAttributes;	// 0x36eea415
- (void)applyParsedProperties:(id)properties;	// 0x36ee9a9d
// declared property getter: - (id)bulkParsedCTag;	// 0x36eea425
// declared property getter: - (id)bulkParsedPTag;	// 0x36eea45d
// declared property getter: - (id)bulkUploadErrorItem;	// 0x36eea495
// declared property getter: - (id)childrenOrder;	// 0x36eea405
- (id)copyMkcolTask;	// 0x36eea215
- (id)copyPropPatchTask;	// 0x36eea029
// declared property getter: - (id)dataPayload;	// 0x36eea3fd
- (void)dealloc;	// 0x36ee98f5
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x36ee9c59
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x36ee9c29
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x36ee9c89
// declared property getter: - (id)serverID;	// 0x36eea3e9
// declared property setter: - (void)setBulkParsedCTag:(id)tag;	// 0x36eea439
// declared property setter: - (void)setBulkParsedPTag:(id)tag;	// 0x36eea471
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x36eea4a9
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x36ee9e35
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x36ee9d71
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x36ee9ef9
// declared property setter: - (void)setServerID:(id)anId;	// 0x36eea3f9
// declared property getter: - (id)syncKey;	// 0x36eea401
@end

