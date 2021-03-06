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
@property(retain) CoreDAVBulkRequestsItem *crudItem;	// G=0x34c28bdd; S=0x34c28bf1; @synthesize=_crudItem
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x34c28af1; 
@property(retain) CoreDAVBulkRequestsItem *simpleItem;	// G=0x34c28c01; S=0x34c28c15; @synthesize=_simpleItem
+ (id)copyParseRules;	// 0x34c288d9
- (id)init;	// 0x34c28775
// declared property getter: - (id)crudItem;	// 0x34c28bdd
- (void)dealloc;	// 0x34c287a1
- (id)description;	// 0x34c28805
// declared property getter: - (id)dictRepresentation;	// 0x34c28af1
// declared property setter: - (void)setCrudItem:(id)item;	// 0x34c28bf1
// declared property setter: - (void)setSimpleItem:(id)item;	// 0x34c28c15
// declared property getter: - (id)simpleItem;	// 0x34c28c01
@end

