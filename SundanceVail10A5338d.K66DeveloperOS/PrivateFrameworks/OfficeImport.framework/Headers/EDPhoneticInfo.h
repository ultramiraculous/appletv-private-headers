/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDCollection, NSString;

@interface EDPhoneticInfo : NSObject <EDImmutableObject> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mFontIndex;	// 8 = 0x8
	NSString *mString;	// 12 = 0xc
	int mType;	// 16 = 0x10
	int mAlign;	// 20 = 0x14
	EDCollection *mRuns;	// 24 = 0x18
	bool mDoNotModify;	// 28 = 0x1c
}
@property(assign) int align;	// G=0x33b7faf5; S=0x33b7fb05; converted property
@property(retain) id font;	// G=0x33b7fb95; S=0x33b7fbdd; converted property
@property(assign) unsigned fontIndex;	// G=0x33b7fc5d; S=0x33b7fc6d; converted property
@property(retain) id string;	// G=0x33b7fb2d; S=0x33b7fb3d; converted property
@property(assign) int type;	// G=0x33b7fabd; S=0x33b7facd; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x33b7f8b1
- (id)initWithResources:(id)resources;	// 0x33b7f845
// converted property getter: - (int)align;	// 0x33b7faf5
- (void)dealloc;	// 0x33b7f8fd
// converted property getter: - (id)font;	// 0x33b7fb95
// converted property getter: - (unsigned)fontIndex;	// 0x33b7fc5d
- (unsigned)hash;	// 0x33b7fa61
- (BOOL)isEqual:(id)equal;	// 0x33b7fa05
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x33b7f961
- (id)runs;	// 0x33b7fc3d
// converted property setter: - (void)setAlign:(int)align;	// 0x33b7fb05
- (void)setDoNotModify:(bool)modify;	// 0x33b7fc4d
// converted property setter: - (void)setFont:(id)font;	// 0x33b7fbdd
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x33b7fc6d
// converted property setter: - (void)setString:(id)string;	// 0x33b7fb3d
// converted property setter: - (void)setType:(int)type;	// 0x33b7facd
// converted property getter: - (id)string;	// 0x33b7fb2d
// converted property getter: - (int)type;	// 0x33b7fabd
@end

