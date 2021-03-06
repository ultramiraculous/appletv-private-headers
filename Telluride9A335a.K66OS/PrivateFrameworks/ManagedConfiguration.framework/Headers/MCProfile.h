/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSDictionary, NSData, NSString, NSDate;

@interface MCProfile : NSObject {
@private
	NSString *_displayName;	// 4 = 0x4
	NSString *_profileDescription;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_organization;	// 20 = 0x14
	int _version;	// 24 = 0x18
	NSDate *_installDate;	// 28 = 0x1c
	NSDate *_expiryDate;	// 32 = 0x20
	BOOL _encrypted;	// 36 = 0x24
	BOOL _isLocked;	// 37 = 0x25
	NSString *_removalPasscode;	// 40 = 0x28
	BOOL _needsReboot;	// 44 = 0x2c
	BOOL _isStub;	// 45 = 0x2d
	NSString *_productBuildVersion;	// 48 = 0x30
	NSString *_productVersion;	// 52 = 0x34
	NSData *_profileData;	// 56 = 0x38
	int _trustLevel;	// 60 = 0x3c
	BOOL _trustHasBeenEvaluated;	// 64 = 0x40
	dispatch_queue_s *_trustEvaluationQueue;	// 68 = 0x44
	NSString *_signerSummary;	// 72 = 0x48
	NSMutableArray *_signerCertificates;	// 76 = 0x4c
	BOOL _signerHasBeenEvaluated;	// 80 = 0x50
	dispatch_queue_s *_signerEvaluationQueue;	// 84 = 0x54
@protected
	NSDictionary *_context;	// 88 = 0x58
}
@property(readonly, assign) NSString *UUID;	// G=0x30422295; @synthesize=_UUID
@property(readonly, assign) NSString *UUIDHashFileName;	// G=0x30423639; 
@property(retain) NSDictionary *context;	// G=0x30422b5d; S=0x30422b39; @synthesize=_context
@property(retain) NSString *displayName;	// G=0x30422aa9; S=0x30422a85; @synthesize=_displayName
@property(readonly, assign) NSDate *earliestCertificateExpiryDate;	// G=0x304221dd; 
@property(assign, getter=isEncrypted) BOOL encrypted;	// G=0x30422275; S=0x30422285; @synthesize=_encrypted
@property(readonly, assign) NSDate *expiryDate;	// G=0x30422bf1; @synthesize=_expiryDate
@property(readonly, assign) NSString *friendlyName;	// G=0x304230cd; 
@property(readonly, assign) NSString *identifier;	// G=0x304222a5; @synthesize=_identifier
@property(retain) NSDate *installDate;	// G=0x30422ae5; S=0x30422ac1; @synthesize=_installDate
@property(readonly, assign) NSArray *installationWarnings;	// G=0x30423335; 
@property(readonly, assign) BOOL isManagedByProfileService;	// G=0x304221e1; 
@property(readonly, assign) BOOL isSigned;	// G=0x30423315; 
@property(readonly, assign) BOOL isStub;	// G=0x30422205; @synthesize=_isStub
@property(readonly, assign) NSArray *localizedPayloadSummaryByType;	// G=0x304221d9; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x30422235; S=0x30422245; @synthesize=_isLocked
@property(readonly, assign) BOOL needsReboot;	// G=0x30422215; @synthesize=_needsReboot
@property(readonly, assign) NSString *organization;	// G=0x30422265; @synthesize=_organization
@property(readonly, assign) NSArray *payloads;	// G=0x304221d1; 
@property(readonly, assign) NSString *productBuildVersion;	// G=0x304221e5; @synthesize=_productBuildVersion
@property(readonly, assign) NSString *productVersion;	// G=0x304221f5; @synthesize=_productVersion
@property(retain) NSData *profileData;	// G=0x30422b21; S=0x30422afd; @synthesize=_profileData
@property(readonly, assign) NSString *profileDescription;	// G=0x304222b5; @synthesize=_profileDescription
@property(readonly, assign) NSString *profileIDHashFileName;	// G=0x30423605; 
@property(readonly, assign) NSString *removalPasscode;	// G=0x30422225; @synthesize=_removalPasscode
@property(retain) NSString *removalPasscode;	// G=0x304222c5; S=0x3042366d; 
@property(readonly, assign) SecCertificate *signerCertificate;	// G=0x304234f9; 
@property(retain) NSArray *signerCertificates;	// G=0x304223a9; S=0x304225f5; 
@property(retain) NSString *signerSummary;	// G=0x30422455; S=0x30422501; 
@property(readonly, assign) NSString *stubFileName;	// G=0x304235d1; 
@property(readonly, assign) int trustLevel;	// G=0x304222d5; 
@property(readonly, assign) int version;	// G=0x30422255; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x30422765
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x304228e1
+ (id)_malformedProfileError;	// 0x30423ad5
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x30423b35
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x304242b1
+ (int)evaluateTrustOfData:(id)data;	// 0x304259bd
+ (id)missingFieldErrorWithField:(id)field;	// 0x30423b95
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x3042569d
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x30423855
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name outError:(id *)error;	// 0x304229d9
+ (id)profileWithData:(id)data context:(id)context outError:(id *)error;	// 0x30422a09
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x30422a31
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x30422a59
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x30423bf5
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x304241a5
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x30423f71
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x30424049
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x30423e5d
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x30425a65
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x30424335
// declared property getter: - (id)UUID;	// 0x30422295
// declared property getter: - (id)UUIDHashFileName;	// 0x30423639
- (void)__evaluateSignerCertificates;	// 0x30423525
// declared property getter: - (id)context;	// 0x30422b5d
- (void)dealloc;	// 0x30423199
- (id)description;	// 0x30422c89
// declared property getter: - (id)displayName;	// 0x30422aa9
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x304221dd
- (void)evaluateSignerTrust;	// 0x30422bc5
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x30422b75
// declared property getter: - (id)expiryDate;	// 0x30422bf1
// declared property getter: - (id)friendlyName;	// 0x304230cd
// declared property getter: - (id)identifier;	// 0x304222a5
// declared property getter: - (id)installDate;	// 0x30422ae5
// declared property getter: - (id)installationWarnings;	// 0x30423335
// declared property getter: - (BOOL)isEncrypted;	// 0x30422275
// declared property getter: - (BOOL)isLocked;	// 0x30422235
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x304221e1
// declared property getter: - (BOOL)isSigned;	// 0x30423315
// declared property getter: - (BOOL)isStub;	// 0x30422205
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x304221d9
- (id)malformedProfileErrorWithError:(id)error;	// 0x30423a3d
// declared property getter: - (BOOL)needsReboot;	// 0x30422215
// declared property getter: - (id)organization;	// 0x30422265
- (id)payloadWithUUID:(id)uuid;	// 0x304221d5
// declared property getter: - (id)payloads;	// 0x304221d1
// declared property getter: - (id)productBuildVersion;	// 0x304221e5
// declared property getter: - (id)productVersion;	// 0x304221f5
// declared property getter: - (id)profileData;	// 0x30422b21
// declared property getter: - (id)profileDescription;	// 0x304222b5
// declared property getter: - (id)profileIDHashFileName;	// 0x30423605
// declared property getter: - (id)removalPasscode;	// 0x30422225
// declared property getter: - (id)removalPasscode;	// 0x304222c5
// declared property setter: - (void)setContext:(id)context;	// 0x30422b39
// declared property setter: - (void)setDisplayName:(id)name;	// 0x30422a85
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x30422285
// declared property setter: - (void)setInstallDate:(id)date;	// 0x30422ac1
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x30422245
// declared property setter: - (void)setProfileData:(id)data;	// 0x30422afd
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x3042366d
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x304225f5
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x30422501
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x304234f9
// declared property getter: - (id)signerCertificates;	// 0x304223a9
// declared property getter: - (id)signerSummary;	// 0x30422455
- (id)stubDictionary;	// 0x304250c5
// declared property getter: - (id)stubFileName;	// 0x304235d1
// declared property getter: - (int)trustLevel;	// 0x304222d5
// declared property getter: - (int)version;	// 0x30422255
- (BOOL)writeStubToDirectory:(id)directory;	// 0x30423745
- (BOOL)writeStubToPath:(id)path;	// 0x30423795
@end

