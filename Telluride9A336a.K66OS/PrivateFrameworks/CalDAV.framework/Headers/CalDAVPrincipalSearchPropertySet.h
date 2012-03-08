/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {
	NSSet *_properties;	// 4 = 0x4
}
@property(readonly, assign) NSSet *stringProperties;	// G=0x338da829; @synthesize=_properties
@property(readonly, assign) BOOL supportsPropertySearch;	// G=0x338dab85; 
+ (id)searchSetWithProperties:(id)properties;	// 0x338dabf9
- (id)initWithSearchProperties:(id)searchProperties;	// 0x338dac99
- (id)initWithStringProperties:(id)stringProperties;	// 0x338dac41
- (void)dealloc;	// 0x338dae59
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x338dabb5
// declared property getter: - (id)stringProperties;	// 0x338da829
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x338dab85
- (BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338daaed
- (BOOL)supportsWellKnownType:(int)type;	// 0x338dab39
@end
