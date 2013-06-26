/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {
	NSMutableSet *_changedProperties;	// 28 = 0x1c
}
@property(retain) NSMutableSet *changedProperties;	// G=0x30270e89; S=0x30270e9d; @synthesize=_changedProperties
- (id)init;	// 0x30270c49
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x30270c79
- (void)addChangedProperty:(id)property;	// 0x30270d55
// declared property getter: - (id)changedProperties;	// 0x30270e89
- (id)copyParseRules;	// 0x30270d81
- (void)dealloc;	// 0x30270ce5
- (id)description;	// 0x30270d29
// declared property setter: - (void)setChangedProperties:(id)properties;	// 0x30270e9d
@end
