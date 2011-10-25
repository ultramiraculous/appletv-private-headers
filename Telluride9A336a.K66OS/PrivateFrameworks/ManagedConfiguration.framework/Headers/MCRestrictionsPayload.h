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
@property(readonly, assign) NSDictionary *restrictions;	// G=0x3308c6fd; @synthesize=_restrictions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3308ca15
+ (id)typeStrings;	// 0x3308c9a1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3308d609
- (id)_defaultMediaSettings;	// 0x3308d2c9
- (id)_enforcedFeatureStrings;	// 0x3308d2f5
- (void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;	// 0x3308c8d5
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x3308c70d
- (id)_restrictedFeatureStrings;	// 0x3308d321
- (void)dealloc;	// 0x3308c9c9
- (id)description;	// 0x3308d34d
- (id)installationWarnings;	// 0x3308ca75
// declared property getter: - (id)restrictions;	// 0x3308c6fd
- (id)stubDictionary;	// 0x3308d3c9
- (id)subtitle1Description;	// 0x3308cca5
@end

