/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCConfigurationProfile.h"


@interface MCCertificateWrapperProfile : MCConfigurationProfile {
}
+ (id)_basicWrapperProfileForCertificateName:(id)certificateName fileName:(id)name identifier:(id)identifier;	// 0x348ccb9d
+ (id)_identifierHashFromData:(id)data;	// 0x348cd0ad
+ (id)_wrapperPayloadDictWithCertData:(id)certData fileName:(id)name name:(id)name3 identifier:(id)identifier type:(id)type;	// 0x348cc9a9
+ (id)_wrapperProfileForCertificate:(SecCertificate *)certificate fileName:(id)name certData:(id)data type:(id)type;	// 0x348ccfd5
+ (id)_wrapperProfileForWAPICertificate:(SecCertificate *)wapicertificate fileName:(id)name PEMData:(id)data;	// 0x348ccf01
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)pemdata fileName:(id)name name:(id)name3 identifier:(id)identifier;	// 0x348ccab5
+ (id)wrapperProfileDictionaryWithCertificateData:(id)certificateData fileName:(id)name;	// 0x348ccd01
- (id)initWithDictionary:(id)dictionary originalData:(id)data allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x348cd225
- (id)_certificatePayload;	// 0x348cc92d
- (id)earliestCertificateExpiryDate;	// 0x348cc981
- (BOOL)isSigned;	// 0x348cc959
- (id)stubDictionary;	// 0x348ccc9d
- (int)trustLevel;	// 0x348cd159
@end

