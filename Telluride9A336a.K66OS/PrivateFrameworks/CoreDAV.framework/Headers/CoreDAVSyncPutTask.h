/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPutTask.h"

@class CoreDAVAction;

@interface CoreDAVSyncPutTask : CoreDAVPutTask {
	CoreDAVAction *_action;	// 152 = 0x98
}
@property(readonly, assign) CoreDAVAction *action;	// G=0x32c34aad; @synthesize=_action
// declared property getter: - (id)action;	// 0x32c34aad
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x32c34a1d
- (void)setAction:(id)action;	// 0x32c34a0d
@end

