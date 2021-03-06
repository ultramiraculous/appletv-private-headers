/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSMessageAutosave : MSMailDefaultService {
}
+ (void)autosaveMessageData:(id)data withIdentifier:(id)identifier handler:(id)handler;	// 0x34658d41
+ (id)autosavedMessageDataWithIdentifier:(id)identifier error:(id *)error;	// 0x34658aa1
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)identifier;	// 0x3465882d
+ (void)removeAutosavedMessageWithIdentifier:(id)identifier;	// 0x34658e7d
@end

