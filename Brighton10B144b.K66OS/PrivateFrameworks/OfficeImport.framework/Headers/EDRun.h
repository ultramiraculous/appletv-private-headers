/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class EDResources;

@interface EDRun : NSObject <EDKeyedObject> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x348c6e41; S=0x34a2d149; converted property
@property(retain) id font;	// G=0x348c6e51; S=0x3490bf5d; converted property
@property(assign) unsigned fontIndex;	// G=0x34973f91; S=0x34a2d159; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x3490bec1
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x348c3545
+ (id)runWithResources:(id)resources;	// 0x34a2d0fd
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x3490bf19
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x348c359d
- (id)initWithResources:(id)resources;	// 0x348c35dd
// converted property getter: - (unsigned)charIndex;	// 0x348c6e41
// converted property getter: - (id)font;	// 0x348c6e51
// converted property getter: - (unsigned)fontIndex;	// 0x34973f91
- (BOOL)isEqual:(id)equal;	// 0x3498407d
- (BOOL)isEqualToRun:(id)run;	// 0x349840d9
- (int)key;	// 0x348c3639
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x34a2d149
// converted property setter: - (void)setFont:(id)font;	// 0x3490bf5d
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x34a2d159
@end

