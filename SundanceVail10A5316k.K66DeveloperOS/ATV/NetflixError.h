/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixError : XXUnknownSuperclass {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x456cb5
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x456dfd
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x456dc5
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x45711d
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x4577b9
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x457749
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x456e39
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x456f95
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x456f65
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x456ff1
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x456fc5
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x45709d
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x457071
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x4569d5
@end

