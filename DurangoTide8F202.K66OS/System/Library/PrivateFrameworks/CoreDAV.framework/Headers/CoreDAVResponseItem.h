/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableArray, NSMutableSet, CoreDAVLeafItem, CoreDAVItemWithHrefChildItem, CoreDAVErrorItem;

@interface CoreDAVResponseItem : CoreDAVItem {
	NSMutableArray *_hrefs;	// 24 = 0x18
	CoreDAVLeafItem *_status;	// 28 = 0x1c
	NSMutableSet *_propStats;	// 32 = 0x20
	CoreDAVErrorItem *_errorItem;	// 36 = 0x24
	CoreDAVLeafItem *_responseDescription;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_location;	// 44 = 0x2c
}
@property(retain) CoreDAVErrorItem *errorItem;	// G=0x317a8c61; S=0x317a8d2d; @synthesize=_errorItem
@property(retain) NSMutableArray *hrefs;	// G=0x317a8c19; S=0x317a8ca9; @synthesize=_hrefs
@property(retain) CoreDAVItemWithHrefChildItem *location;	// G=0x317a8c91; S=0x317a8d85; @synthesize=_location
@property(retain) NSMutableSet *propStats;	// G=0x317a8c49; S=0x317a8d01; @synthesize=_propStats
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x317a8c79; S=0x317a8d59; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *status;	// G=0x317a8c31; S=0x317a8cd5; @synthesize=_status
- (id)init;	// 0x317a8409
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x317a8649
- (void)addHref:(id)href;	// 0x317a80c9
- (void)addPropStat:(id)stat;	// 0x317a80f1
- (id)copyParseRules;	// 0x317a8119
- (void)dealloc;	// 0x317a85b1
- (id)description;	// 0x317a8435
// declared property getter: - (id)errorItem;	// 0x317a8c61
- (id)firstHref;	// 0x317a80a5
- (void)generateItemTreeString:(id)string withDepth:(unsigned)depth;	// 0x317a8729
- (BOOL)hasPropertyError;	// 0x317a8905
// declared property getter: - (id)hrefs;	// 0x317a8c19
// declared property getter: - (id)location;	// 0x317a8c91
// declared property getter: - (id)propStats;	// 0x317a8c49
// declared property getter: - (id)responseDescription;	// 0x317a8c79
// declared property setter: - (void)setErrorItem:(id)item;	// 0x317a8d2d
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x317a8ca9
// declared property setter: - (void)setLocation:(id)location;	// 0x317a8d85
// declared property setter: - (void)setPropStats:(id)stats;	// 0x317a8d01
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x317a8d59
// declared property setter: - (void)setStatus:(id)status;	// 0x317a8cd5
// declared property getter: - (id)status;	// 0x317a8c31
- (id)successfulPropertiesToValues;	// 0x317a89f5
@end

