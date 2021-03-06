/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OADEffectsParent.h"

@class OADFill, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent> {
@private
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x32cd9b69; S=0x32cb3111; converted property
@property(retain) id fill;	// G=0x32cb3181; S=0x32cb2fb1; converted property
- (void)dealloc;	// 0x32cb3191
// converted property getter: - (id)effects;	// 0x32cd9b69
// converted property getter: - (id)fill;	// 0x32cb3181
- (BOOL)hasEffects;	// 0x32cd9b79
// converted property setter: - (void)setEffects:(id)effects;	// 0x32cb3111
// converted property setter: - (void)setFill:(id)fill;	// 0x32cb2fb1
@end

