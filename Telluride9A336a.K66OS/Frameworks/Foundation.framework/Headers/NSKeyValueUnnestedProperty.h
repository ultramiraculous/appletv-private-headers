/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProperty.h"
#import "Foundation-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
@private
	NSArray *_affectingProperties;	// 12 = 0xc
	BOOL _cachedIsaForAutonotifyingIsValid;	// 16 = 0x10
	Class _cachedIsaForAutonotifying;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x3367da49
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x33654d65
- (id)_initWithContainerClass:(id)containerClass key:(id)key propertiesBeingInitialized:(CFSetRef)initialized;	// 0x33654a65
- (Class)_isaForAutonotifying;	// 0x33655fa5
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x33672975
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x33695909
- (void)dealloc;	// 0x336cd2b5
- (id)description;	// 0x336cd301
- (Class)isaForAutonotifying;	// 0x33655e9d
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x33672881
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x33695829
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x336cd439
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x33668bad
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x336939dd
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x33672f21
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x336729ad
@end

