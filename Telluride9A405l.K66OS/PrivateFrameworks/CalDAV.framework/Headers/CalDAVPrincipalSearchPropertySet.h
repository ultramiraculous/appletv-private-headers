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
@property(readonly, assign) NSSet *stringProperties;	// G=0x3516c7dd; @synthesize=_properties
@property(readonly, assign) BOOL supportsPropertySearch;	// G=0x3516cb39; 
+ (id)searchSetWithProperties:(id)properties;	// 0x3516cbad
- (id)initWithSearchProperties:(id)searchProperties;	// 0x3516cc4d
- (id)initWithStringProperties:(id)stringProperties;	// 0x3516cbf5
- (void)dealloc;	// 0x3516ce0d
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x3516cb69
// declared property getter: - (id)stringProperties;	// 0x3516c7dd
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x3516cb39
- (BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3516caa1
- (BOOL)supportsWellKnownType:(int)type;	// 0x3516caed
@end
