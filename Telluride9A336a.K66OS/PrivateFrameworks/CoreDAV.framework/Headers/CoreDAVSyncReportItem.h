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
@property(readonly, assign) NSString *syncToken;	// G=0x32c5ba01; @synthesize=_syncToken
- (void)_setSyncTokenItem:(id)item;	// 0x32c5b9a9
- (id)copyParseRules;	// 0x32c5b831
- (void)dealloc;	// 0x32c5b731
- (id)description;	// 0x32c5b77d
// declared property getter: - (id)syncToken;	// 0x32c5ba01
@end

