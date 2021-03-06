/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class APSConnection, NSData;
@protocol OS_dispatch_semaphore;

@interface AADeviceInfo : NSObject {
	APSConnection *_apsConnection;	// 4 = 0x4
	BOOL _tokenDone;	// 8 = 0x8
	NSData *_token;	// 12 = 0xc
	NSObject<OS_dispatch_semaphore> *_tokenSema;	// 16 = 0x10
}
+ (id)apnsToken;	// 0x33622bcd
+ (id)appleIDClientIdentifier;	// 0x33622c1d
+ (id)clientInfoHeader;	// 0x33622c6d
+ (id)infoDictionary;	// 0x33622a89
+ (id)osVersion;	// 0x33622b2d
+ (id)productVersion;	// 0x33623005
+ (id)serialNumber;	// 0x33622b7d
+ (id)signatureWithDictionary:(id)dictionary;	// 0x33622ad9
+ (id)udid;	// 0x33622add
+ (id)userAgentHeader;	// 0x33622f2d
- (id)init;	// 0x33622a4d
- (void).cxx_destruct;	// 0x33623055
- (id)apnsToken;	// 0x33623369
- (id)appleIDClientIdentifier;	// 0x336233f1
- (id)buildVersion;	// 0x33623309
- (id)deviceClass;	// 0x336233d5
- (id)deviceInfoDictionary;	// 0x3362309d
- (id)osName;	// 0x336232ad
- (id)osVersion;	// 0x336231a9
- (id)productType;	// 0x33623281
- (id)productVersion;	// 0x33623255
- (id)regionCode;	// 0x33623365
- (id)serialNumber;	// 0x3362320d
- (id)udid;	// 0x336231e1
- (id)wifiMacAddress;	// 0x33623239
@end

