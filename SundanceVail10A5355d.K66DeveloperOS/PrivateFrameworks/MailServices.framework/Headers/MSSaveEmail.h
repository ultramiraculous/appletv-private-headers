/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSaveEmail : MSMailDefaultService {
}
+ (void)saveEmail:(id)email completionBlock:(id)block;	// 0x33469de5
+ (void)saveMessageData:(id)data forAccountWithID:(id)anId autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x33469d75
- (void)_saveEmail:(id)email completionBlock:(id)block;	// 0x33469e49
- (void)_saveMessageData:(id)data forAccountWithID:(id)anId autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x33469fbd
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x3346a169
@end
