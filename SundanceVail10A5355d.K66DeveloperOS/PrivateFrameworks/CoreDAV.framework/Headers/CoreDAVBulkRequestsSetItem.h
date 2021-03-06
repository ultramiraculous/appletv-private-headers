/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {
	CoreDAVBulkRequestsItem *_crudItem;	// 28 = 0x1c
	CoreDAVBulkRequestsItem *_simpleItem;	// 32 = 0x20
}
@property(retain) CoreDAVBulkRequestsItem *crudItem;	// G=0x304a6a05; S=0x304a6a19; @synthesize=_crudItem
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x304a6919; 
@property(retain) CoreDAVBulkRequestsItem *simpleItem;	// G=0x304a6a29; S=0x304a6a3d; @synthesize=_simpleItem
+ (id)copyParseRules;	// 0x304a6701
- (id)init;	// 0x304a659d
// declared property getter: - (id)crudItem;	// 0x304a6a05
- (void)dealloc;	// 0x304a65c9
- (id)description;	// 0x304a662d
// declared property getter: - (id)dictRepresentation;	// 0x304a6919
// declared property setter: - (void)setCrudItem:(id)item;	// 0x304a6a19
// declared property setter: - (void)setSimpleItem:(id)item;	// 0x304a6a3d
// declared property getter: - (id)simpleItem;	// 0x304a6a29
@end

