/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSDate, NSArray, NSMutableArray;

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
}
@property(readonly, assign) NSString *UUID;	// G=0x340e90ad; @synthesize=_UUID
@property(readonly, assign) NSString *UUIDHashFileName;	// G=0x340e95bd; 
@property(retain) NSString *displayName;	// G=0x340ea2e9; S=0x340ea331; @synthesize=_displayName
@property(readonly, assign) NSDate *earliestCertificateExpiryDate;	// G=0x340e8ff5; 
@property(assign, getter=isEncrypted) BOOL encrypted;	// G=0x340e908d; S=0x340e909d; @synthesize=_encrypted
@property(readonly, assign) NSDate *expiryDate;	// G=0x340e968d; @synthesize=_expiryDate
@property(readonly, assign) NSString *friendlyName;	// G=0x340e9e3d; 
@property(readonly, assign) NSString *identifier;	// G=0x340e90bd; @synthesize=_identifier
@property(retain) NSDate *installDate;	// G=0x340ea301; S=0x340ea35d; @synthesize=_installDate
@property(readonly, assign) NSArray *installationWarnings;	// G=0x340e993d; 
@property(readonly, assign) BOOL isManagedByProfileService;	// G=0x340e8ff9; 
@property(readonly, assign) BOOL isSigned;	// G=0x340e9709; 
@property(readonly, assign) BOOL isStub;	// G=0x340e901d; @synthesize=_isStub
@property(readonly, assign) NSArray *localizedPayloadSummaryByType;	// G=0x340e8ff1; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x340e904d; S=0x340e905d; @synthesize=_isLocked
@property(readonly, assign) BOOL needsReboot;	// G=0x340e902d; @synthesize=_needsReboot
@property(readonly, assign) NSString *organization;	// G=0x340e907d; @synthesize=_organization
@property(readonly, assign) NSArray *payloads;	// G=0x340e8fed; 
@property(readonly, assign) NSString *productBuildVersion;	// G=0x340e8ffd; @synthesize=_productBuildVersion
@property(readonly, assign) NSString *productVersion;	// G=0x340e900d; @synthesize=_productVersion
@property(retain) NSData *profileData;	// G=0x340ea319; S=0x340ea389; @synthesize=_profileData
@property(readonly, assign) NSString *profileDescription;	// G=0x340e90cd; @synthesize=_profileDescription
@property(readonly, assign) NSString *profileIDHashFileName;	// G=0x340e95e9; 
@property(readonly, assign) NSString *removalPasscode;	// G=0x340e903d; @synthesize=_removalPasscode
@property(retain) NSString *removalPasscode;	// G=0x340e90dd; S=0x340e9581; 
@property(readonly, assign) SecCertificate *signerCertificate;	// G=0x340e985d; 
@property(retain) NSArray *signerCertificates;	// G=0x340e91e9; S=0x340e90ed; 
@property(retain) NSString *signerSummary;	// G=0x340e918d; S=0x340e913d; 
@property(readonly, assign) NSString *stubFileName;	// G=0x340e9615; 
@property(readonly, assign) int trustLevel;	// G=0x340e9245; 
@property(readonly, assign) int version;	// G=0x340e906d; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x340ea4b5
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x340ea3b5
+ (id)_malformedProfileError;	// 0x340ead4d
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x340eacf1
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x340ea619
+ (int)evaluateTrustOfData:(id)data;	// 0x340ebe19
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x340ebeb1
+ (id)profileWithData:(id)data fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x340e9c99
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x340e9725
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x340e9751
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x340eab15
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x340ea695
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x340ea8c1
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x340ea785
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x340ea981
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x340ebd35
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x340eada5
// declared property getter: - (id)UUID;	// 0x340e90ad
// declared property getter: - (id)UUIDHashFileName;	// 0x340e95bd
- (void)__evaluateSignerCertificates;	// 0x340e9881
- (void)dealloc;	// 0x340e9b55
- (id)description;	// 0x340e9ef9
// declared property getter: - (id)displayName;	// 0x340ea2e9
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x340e8ff5
- (void)evaluateSignerTrust;	// 0x340e9665
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x340ea2a1
// declared property getter: - (id)expiryDate;	// 0x340e968d
// declared property getter: - (id)friendlyName;	// 0x340e9e3d
// declared property getter: - (id)identifier;	// 0x340e90bd
// declared property getter: - (id)installDate;	// 0x340ea301
// declared property getter: - (id)installationWarnings;	// 0x340e993d
// declared property getter: - (BOOL)isEncrypted;	// 0x340e908d
// declared property getter: - (BOOL)isLocked;	// 0x340e904d
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x340e8ff9
// declared property getter: - (BOOL)isSigned;	// 0x340e9709
// declared property getter: - (BOOL)isStub;	// 0x340e901d
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x340e8ff1
- (id)malformedProfileErrorWithError:(id)error;	// 0x340eaa89
// declared property getter: - (BOOL)needsReboot;	// 0x340e902d
// declared property getter: - (id)organization;	// 0x340e907d
// declared property getter: - (id)payloads;	// 0x340e8fed
// declared property getter: - (id)productBuildVersion;	// 0x340e8ffd
// declared property getter: - (id)productVersion;	// 0x340e900d
// declared property getter: - (id)profileData;	// 0x340ea319
// declared property getter: - (id)profileDescription;	// 0x340e90cd
// declared property getter: - (id)profileIDHashFileName;	// 0x340e95e9
// declared property getter: - (id)removalPasscode;	// 0x340e903d
// declared property getter: - (id)removalPasscode;	// 0x340e90dd
// declared property setter: - (void)setDisplayName:(id)name;	// 0x340ea331
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x340e909d
// declared property setter: - (void)setInstallDate:(id)date;	// 0x340ea35d
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x340e905d
// declared property setter: - (void)setProfileData:(id)data;	// 0x340ea389
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x340e9581
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x340e90ed
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x340e913d
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x340e985d
// declared property getter: - (id)signerCertificates;	// 0x340e91e9
// declared property getter: - (id)signerSummary;	// 0x340e918d
- (id)stubDictionary;	// 0x340eb8ad
// declared property getter: - (id)stubFileName;	// 0x340e9615
// declared property getter: - (int)trustLevel;	// 0x340e9245
// declared property getter: - (int)version;	// 0x340e906d
- (BOOL)writeStubToDirectory:(id)directory;	// 0x340e94b9
- (BOOL)writeStubToPath:(id)path;	// 0x340e948d
@end

