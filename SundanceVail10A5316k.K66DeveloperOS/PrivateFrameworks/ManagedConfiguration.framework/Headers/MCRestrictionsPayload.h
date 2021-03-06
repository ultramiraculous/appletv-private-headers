/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload {
@private
	NSMutableDictionary *_restrictions;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSDictionary *restrictions;	// G=0x305e1731; @synthesize=_restrictions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305df515
+ (id)typeStrings;	// 0x305df4ed
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305df625
- (void).cxx_destruct;	// 0x305e1741
- (id)_defaultMediaSettings;	// 0x305e0859
- (id)_enforcedFeatureStrings;	// 0x305e06e1
- (void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;	// 0x305e1255
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x305df59d
- (id)_restrictedFeatureStrings;	// 0x305e0059
- (id)description;	// 0x305dffc1
- (id)installationWarnings;	// 0x305e1361
// declared property getter: - (id)restrictions;	// 0x305e1731
- (id)stubDictionary;	// 0x305dfd0d
- (id)subtitle1Description;	// 0x305e0a9d
@end

