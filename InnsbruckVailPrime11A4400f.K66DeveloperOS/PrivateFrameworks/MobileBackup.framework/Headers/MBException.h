/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSException.h>


__attribute__((objc_exception))
@interface MBException : NSException {
}
- (id)initWithCode:(int)code format:(id)format;	// 0x314802e1
- (id)initWithCode:(int)code format:(id)format args:(void *)args;	// 0x31480309
- (id)error;	// 0x31480421
- (int)errorCode;	// 0x314803dd
@end

