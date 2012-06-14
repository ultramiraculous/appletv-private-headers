/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString *_syncToken;	// 32 = 0x20
}
@property(readonly, assign) NSString *syncToken;	// G=0x35f78d79; @synthesize=_syncToken
+ (id)copyParseRules;	// 0x35f78b2d
- (void)_setSyncTokenItem:(id)item;	// 0x35f78d25
- (void)dealloc;	// 0x35f78a2d
- (id)description;	// 0x35f78a79
// declared property getter: - (id)syncToken;	// 0x35f78d79
@end
