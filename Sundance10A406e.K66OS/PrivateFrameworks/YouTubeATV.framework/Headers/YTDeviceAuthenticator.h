/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSData, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSMutableData *_responseData;	// 8 = 0x8
	NSString *_token;	// 12 = 0xc
	double _timeTokenGranted;	// 16 = 0x10
	int _phase;	// 24 = 0x18
	NSData *_r1;	// 28 = 0x1c
	NSData *_r1Hash;	// 32 = 0x20
	NSData *_r2;	// 36 = 0x24
	NSData *_hmac;	// 40 = 0x28
}
@property(readonly, retain) NSString *token;	// G=0x32f52e91; converted property
+ (id)sharedAuthenticator;	// 0x32f523d5
- (BOOL)_authenticate1;	// 0x32f52529
- (BOOL)_authenticate2;	// 0x32f527bd
- (void)_clearNonces;	// 0x32f52c81
- (void)_connectionDidEnd;	// 0x32f53019
- (void)_copyCertificateData:(id *)data privateKey:(SecKey **)key;	// 0x32f5241d
- (void)_failWithErrorCode:(int)errorCode;	// 0x32f52d01
- (void)_loadStatusChanged;	// 0x32f52391
- (void)_succeeded;	// 0x32f52fb1
- (void)authenticate;	// 0x32f52de1
- (BOOL)canAuthenticate;	// 0x32f524e1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32f533a9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32f52f6d
- (void)connectionDidFinishLoading:(id)connection;	// 0x32f53069
- (void)invalidateToken;	// 0x32f52f29
- (BOOL)isAuthenticating;	// 0x32f52e79
// converted property getter: - (id)token;	// 0x32f52e91
@end

