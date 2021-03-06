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
+ (id)apnsToken;	// 0x372747b1
+ (id)appleIDClientIdentifier;	// 0x37274801
+ (id)clientInfoHeader;	// 0x37274851
+ (id)infoDictionary;	// 0x3727466d
+ (id)osVersion;	// 0x37274711
+ (id)productVersion;	// 0x37274be9
+ (id)serialNumber;	// 0x37274761
+ (id)signatureWithDictionary:(id)dictionary;	// 0x372746bd
+ (id)udid;	// 0x372746c1
+ (id)userAgentHeader;	// 0x37274b11
- (id)init;	// 0x37274631
- (void).cxx_destruct;	// 0x37274c39
- (id)apnsToken;	// 0x37274f4d
- (id)appleIDClientIdentifier;	// 0x37274fd5
- (id)buildVersion;	// 0x37274eed
- (id)deviceClass;	// 0x37274fb9
- (id)deviceInfoDictionary;	// 0x37274c81
- (id)osName;	// 0x37274e91
- (id)osVersion;	// 0x37274d8d
- (id)productType;	// 0x37274e65
- (id)productVersion;	// 0x37274e39
- (id)regionCode;	// 0x37274f49
- (id)serialNumber;	// 0x37274df1
- (id)udid;	// 0x37274dc5
- (id)wifiMacAddress;	// 0x37274e1d
@end

