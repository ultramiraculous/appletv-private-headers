/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCCertificatePayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {
	NSString *_certificateFileName;	// 48 = 0x30
	NSData *_certificateData;	// 52 = 0x34
	NSString *_password;	// 56 = 0x38
	int _dataEncoding;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSData *certificateData;	// G=0x32ba3bb1; @synthesize=_certificateData
@property(readonly, assign, nonatomic) NSString *certificateFileName;	// G=0x32ba3b91; @synthesize=_certificateFileName
@property(readonly, assign, nonatomic) int dataEncoding;	// G=0x32ba3ba1; @synthesize=_dataEncoding
@property(readonly, assign, nonatomic) NSString *password;	// G=0x32ba3bc1; @synthesize=_password
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32ba3249
+ (id)typeStrings;	// 0x32ba31f1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32ba32d1
- (void).cxx_destruct;	// 0x32ba3bd1
// declared property getter: - (id)certificateData;	// 0x32ba3bb1
// declared property getter: - (id)certificateFileName;	// 0x32ba3b91
- (SecCertificate *)copyCertificate;	// 0x32ba3869
// declared property getter: - (int)dataEncoding;	// 0x32ba3ba1
- (id)description;	// 0x32ba39c1
- (id)installationWarnings;	// 0x32ba3719
- (BOOL)isIdentity;	// 0x32ba3b11
- (BOOL)isSigned;	// 0x32ba36b9
// declared property getter: - (id)password;	// 0x32ba3bc1
- (id)persistentResourceID;	// 0x32ba3ac9
@end
