/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSError.h> // Unknown library


@interface NSError (TSUAdditions)
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message;	// 0x371bc96d
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message underlyingError:(id)error;	// 0x371bca21
+ (id)errorWithDomain:(id)domain code:(int)code description:(id)description recoverySuggestion:(id)suggestion;	// 0x371bc829
+ (id)tsuErrorWithCode:(int)code;	// 0x371bc8c1
- (BOOL)isOutOfSpaceError;	// 0x371bcb5d
- (id)localizedAlertMessage;	// 0x371bcb29
- (id)localizedAlertTitle;	// 0x371bcaf5
@end

