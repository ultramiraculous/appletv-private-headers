/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerShareItem : CoreDAVItem {
	NSMutableSet *_shareesToRemove;	// 28 = 0x1c
	NSMutableSet *_shareesToSet;	// 32 = 0x20
}
@property(readonly, assign) NSMutableSet *shareesToRemove;	// G=0x347097ad; @synthesize=_shareesToRemove
@property(readonly, assign) NSMutableSet *shareesToSet;	// G=0x347097c1; @synthesize=_shareesToSet
// declared property getter: - (id)shareesToRemove;	// 0x347097ad
// declared property getter: - (id)shareesToSet;	// 0x347097c1
@end

