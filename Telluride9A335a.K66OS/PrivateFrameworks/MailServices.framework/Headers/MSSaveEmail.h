/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSaveEmail : MSMailDefaultService {
}
+ (id)saveEmail:(id)email delegate:(id)delegate;	// 0x33f8daad
+ (id)smi_serverCommandName;	// 0x33f8daa1
- (id)_didSaveEmail:(id)email userInfo:(id)info;	// 0x33f8dcc1
- (id)_saveEmail:(id)email delegate:(id)delegate;	// 0x33f8db49
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x33f8ddf9
@end
