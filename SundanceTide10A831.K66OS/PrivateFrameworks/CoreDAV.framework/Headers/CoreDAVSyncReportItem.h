/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString *_syncToken;	// 36 = 0x24
}
@property(readonly, assign) NSString *syncToken;	// G=0x334258d1; @synthesize=_syncToken
+ (id)copyParseRules;	// 0x33425685
- (void)_setSyncTokenItem:(id)item;	// 0x3342587d
- (void)dealloc;	// 0x33425585
- (id)description;	// 0x334255d1
// declared property getter: - (id)syncToken;	// 0x334258d1
@end

