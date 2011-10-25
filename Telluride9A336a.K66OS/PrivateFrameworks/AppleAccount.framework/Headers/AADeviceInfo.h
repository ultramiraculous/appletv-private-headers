/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class APSConnection, NSData;

@interface AADeviceInfo : NSObject {
	lockdown_connection *connection;	// 4 = 0x4
	APSConnection *_apsConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	NSData *_token;	// 16 = 0x10
	dispatch_semaphore_s *_tokenSema;	// 20 = 0x14
}
+ (id)apnsToken;	// 0x3389f10d
+ (id)clientInfoHeader;	// 0x3389f15d
+ (id)infoDictionary;	// 0x3389efc9
+ (id)osVersion;	// 0x3389f06d
+ (id)productVersion;	// 0x3389f359
+ (id)serialNumber;	// 0x3389f0bd
+ (id)signatureWithDictionary:(id)dictionary;	// 0x3389f019
+ (id)udid;	// 0x3389f01d
- (id)init;	// 0x3389ef45
- (id)apnsToken;	// 0x3389f719
- (id)buildVersion;	// 0x3389f61d
- (void)dealloc;	// 0x3389ef89
- (id)deviceInfoDictionary;	// 0x3389f3a9
- (id)lockDownValueForKey:(CFStringRef)key;	// 0x3389f4a9
- (id)mobileMeSetupToken;	// 0x3389f685
- (id)osName;	// 0x3389f5b9
- (id)osVersion;	// 0x3389f4e1
- (id)productType;	// 0x3389f599
- (id)productVersion;	// 0x3389f579
- (id)regionCode;	// 0x3389f681
- (id)serialNumber;	// 0x3389f539
- (id)udid;	// 0x3389f519
- (id)wifiMacAddress;	// 0x3389f559
@end

