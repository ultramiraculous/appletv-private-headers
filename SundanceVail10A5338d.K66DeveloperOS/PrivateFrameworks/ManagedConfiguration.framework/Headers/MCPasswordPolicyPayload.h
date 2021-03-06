/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {
	NSNumber *_isSimplePasscodeAllowed;	// 40 = 0x28
	NSNumber *_isPasscodeRequired;	// 44 = 0x2c
	NSNumber *_isAlphanumericPasscodeRequired;	// 48 = 0x30
	NSNumber *_isManualFetchingWhenRoaming;	// 52 = 0x34
	NSNumber *_minLength;	// 56 = 0x38
	NSNumber *_maxFailedAttempts;	// 60 = 0x3c
	NSNumber *_maxGracePeriodMinutes;	// 64 = 0x40
	NSNumber *_maxInactivityMinutes;	// 68 = 0x44
	NSNumber *_maxPasscodeAgeDays;	// 72 = 0x48
	NSNumber *_passcodeHistoryCount;	// 76 = 0x4c
	NSNumber *_minComplexCharacters;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSNumber *isAlphanumericPasscodeRequired;	// G=0x3365edd1; @synthesize=_isAlphanumericPasscodeRequired
@property(readonly, assign, nonatomic) NSNumber *isManualFetchingWhenRoaming;	// G=0x3365ede1; @synthesize=_isManualFetchingWhenRoaming
@property(readonly, assign, nonatomic) NSNumber *isPasscodeRequired;	// G=0x3365edc1; @synthesize=_isPasscodeRequired
@property(readonly, assign, nonatomic) NSNumber *isSimplePasscodeAllowed;	// G=0x3365edb1; @synthesize=_isSimplePasscodeAllowed
@property(readonly, assign, nonatomic) NSNumber *maxFailedAttempts;	// G=0x3365ee01; @synthesize=_maxFailedAttempts
@property(readonly, assign, nonatomic) NSNumber *maxGracePeriodMinutes;	// G=0x3365ee11; @synthesize=_maxGracePeriodMinutes
@property(readonly, assign, nonatomic) NSNumber *maxInactivityMinutes;	// G=0x3365ee21; @synthesize=_maxInactivityMinutes
@property(readonly, assign, nonatomic) NSNumber *maxPasscodeAgeDays;	// G=0x3365ee41; @synthesize=_maxPasscodeAgeDays
@property(readonly, assign, nonatomic) NSNumber *minComplexCharacters;	// G=0x3365ee51; @synthesize=_minComplexCharacters
@property(readonly, assign, nonatomic) NSNumber *minLength;	// G=0x3365edf1; @synthesize=_minLength
@property(readonly, assign, nonatomic) NSNumber *passcodeHistoryCount;	// G=0x3365ee31; @synthesize=_passcodeHistoryCount
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3365dc4d
+ (id)typeStrings;	// 0x3365dc25
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3365dcd5
- (void).cxx_destruct;	// 0x3365ee61
- (id)description;	// 0x3365e635
// declared property getter: - (id)isAlphanumericPasscodeRequired;	// 0x3365edd1
// declared property getter: - (id)isManualFetchingWhenRoaming;	// 0x3365ede1
// declared property getter: - (id)isPasscodeRequired;	// 0x3365edc1
// declared property getter: - (id)isSimplePasscodeAllowed;	// 0x3365edb1
// declared property getter: - (id)maxFailedAttempts;	// 0x3365ee01
// declared property getter: - (id)maxGracePeriodMinutes;	// 0x3365ee11
// declared property getter: - (id)maxInactivityMinutes;	// 0x3365ee21
// declared property getter: - (id)maxPasscodeAgeDays;	// 0x3365ee41
// declared property getter: - (id)minComplexCharacters;	// 0x3365ee51
// declared property getter: - (id)minLength;	// 0x3365edf1
// declared property getter: - (id)passcodeHistoryCount;	// 0x3365ee31
- (id)stubDictionary;	// 0x3365e489
- (id)subtitle1Description;	// 0x3365e949
- (id)title;	// 0x3365e939
@end

