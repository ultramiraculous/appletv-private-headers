/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVErrorItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem : CoreDAVItem {
	CoreDAVLeafItem *_status;	// 24 = 0x18
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVErrorItem *_errorItem;	// 32 = 0x20
	CoreDAVLeafItem *_responseDescription;	// 36 = 0x24
}
@property(retain, nonatomic) CoreDAVErrorItem *errorItem;	// G=0x35f749b1; S=0x35f74901; @synthesize=_errorItem
@property(retain) CoreDAVItem *prop;	// G=0x35f7498d; S=0x35f749a1; @synthesize=_prop
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x35f749c1; S=0x35f749d5; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *status;	// G=0x35f74969; S=0x35f7497d; @synthesize=_status
+ (id)copyParseRules;	// 0x35f745dd
- (id)init;	// 0x35f743fd
- (void)dealloc;	// 0x35f74429
- (id)description;	// 0x35f744b5
// declared property getter: - (id)errorItem;	// 0x35f749b1
// declared property getter: - (id)prop;	// 0x35f7498d
// declared property getter: - (id)responseDescription;	// 0x35f749c1
// declared property setter: - (void)setErrorItem:(id)item;	// 0x35f74901
// declared property setter: - (void)setProp:(id)prop;	// 0x35f749a1
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x35f749d5
// declared property setter: - (void)setStatus:(id)status;	// 0x35f7497d
// declared property getter: - (id)status;	// 0x35f74969
@end

