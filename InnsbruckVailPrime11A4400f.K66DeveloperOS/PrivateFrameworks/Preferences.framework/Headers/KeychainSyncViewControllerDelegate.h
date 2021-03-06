/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "NSObject.h"


@protocol KeychainSyncViewControllerDelegate <NSObject>
- (void)keychainSyncController:(id)controller didFinishWithResult:(id)result error:(id)error;
@optional
- (void)keychainSyncControllerCancel:(id)cancel;
@end

