/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixError : XXUnknownSuperclass {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x5680e5
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x568215
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x5681d9
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x56852d
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x568969
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x5688f9
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x568251
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x5683a5
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x568375
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x568401
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x5683d5
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x5684ad
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x568481
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x567e0d
@end

