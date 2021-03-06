/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_transparent;	// 28 = 0x1c
}
@property(readonly, assign) BOOL isScheduleTransparent;	// G=0x3140ec81; 
@property(retain) CoreDAVItemWithNoChildren *transparent;	// G=0x3140eda1; S=0x3140edb5; @synthesize=_transparent
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3140ebf5
- (id)copyParseRules;	// 0x3140ec9d
- (void)dealloc;	// 0x3140ec3d
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x3140ec81
// declared property setter: - (void)setTransparent:(id)transparent;	// 0x3140edb5
// declared property getter: - (id)transparent;	// 0x3140eda1
@end

