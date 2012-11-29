/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class XPCProxy;
@protocol WebBookmarksSettingsProtocol;

@interface WebBookmarksSettingsGateway : NSObject <XPCProxyTarget> {
	XPCProxy<WebBookmarksSettingsProtocol> *_settingsProxy;	// 4 = 0x4
}
- (id)init;	// 0x33b086cd
- (void)dealloc;	// 0x33b08851
- (void)getCellularReadingListAllowedWithCompletion:(id)completion;	// 0x33b088ed
- (void)invalidate;	// 0x33b088b1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x33b089f1
- (void)setCellularReadingListAllowed:(BOOL)allowed;	// 0x33b089cd
@end
