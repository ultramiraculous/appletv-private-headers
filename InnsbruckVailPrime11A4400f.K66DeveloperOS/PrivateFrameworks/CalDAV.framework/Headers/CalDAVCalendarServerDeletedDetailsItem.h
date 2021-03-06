/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {
	NSString *_componentType;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_displayName;	// 36 = 0x24
	ICSDateValue *_nextInstance;	// 40 = 0x28
	BOOL _hadMoreInstances;	// 44 = 0x2c
}
@property(retain) NSString *componentType;	// G=0x3028adcd; S=0x3028ade1; @synthesize=_componentType
@property(retain) NSString *displayName;	// G=0x3028ae15; S=0x3028ae29; @synthesize=_displayName
@property(assign) BOOL hadMoreInstances;	// G=0x3028ae5d; S=0x3028ae75; @synthesize=_hadMoreInstances
@property(retain) ICSDateValue *nextInstance;	// G=0x3028ae39; S=0x3028ae4d; @synthesize=_nextInstance
@property(retain) NSString *summary;	// G=0x3028adf1; S=0x3028ae05; @synthesize=_summary
- (id)init;	// 0x3028a90d
// declared property getter: - (id)componentType;	// 0x3028adcd
- (id)copyParseRules;	// 0x3028aabd
- (void)dealloc;	// 0x3028a93d
// declared property getter: - (id)displayName;	// 0x3028ae15
// declared property getter: - (BOOL)hadMoreInstances;	// 0x3028ae5d
// declared property getter: - (id)nextInstance;	// 0x3028ae39
// declared property setter: - (void)setComponentType:(id)type;	// 0x3028ade1
- (void)setComponentTypeItem:(id)item;	// 0x3028a9c9
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3028ae29
- (void)setDisplayNameItem:(id)item;	// 0x3028aa29
// declared property setter: - (void)setHadMoreInstances:(BOOL)instances;	// 0x3028ae75
- (void)setHadMoreInstancesItem:(id)item;	// 0x3028aaa9
// declared property setter: - (void)setNextInstance:(id)instance;	// 0x3028ae4d
- (void)setNextInstanceItem:(id)item;	// 0x3028aa59
// declared property setter: - (void)setSummary:(id)summary;	// 0x3028ae05
- (void)setSummaryItem:(id)item;	// 0x3028a9f9
// declared property getter: - (id)summary;	// 0x3028adf1
@end

