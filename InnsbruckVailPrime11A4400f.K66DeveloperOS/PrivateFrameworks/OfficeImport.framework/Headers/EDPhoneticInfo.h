/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "EDImmutableObject.h"

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
@property(assign) int align;	// G=0x318d4cf9; S=0x318d4d09; converted property
@property(retain) id font;	// G=0x318d4d91; S=0x318d4dd9; converted property
@property(assign) unsigned fontIndex;	// G=0x318d4e55; S=0x318d4e65; converted property
@property(retain) id string;	// G=0x318d4d2d; S=0x318d4d3d; converted property
@property(assign) int type;	// G=0x318d4cc5; S=0x318d4cd5; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x318d4ab9
- (id)initWithResources:(id)resources;	// 0x318d4a4d
// converted property getter: - (int)align;	// 0x318d4cf9
- (void)dealloc;	// 0x318d4b05
// converted property getter: - (id)font;	// 0x318d4d91
// converted property getter: - (unsigned)fontIndex;	// 0x318d4e55
- (unsigned)hash;	// 0x318d4c69
- (BOOL)isEqual:(id)equal;	// 0x318d4c0d
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x318d4b69
- (id)runs;	// 0x318d4e35
// converted property setter: - (void)setAlign:(int)align;	// 0x318d4d09
- (void)setDoNotModify:(bool)modify;	// 0x318d4e45
// converted property setter: - (void)setFont:(id)font;	// 0x318d4dd9
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x318d4e65
// converted property setter: - (void)setString:(id)string;	// 0x318d4d3d
// converted property setter: - (void)setType:(int)type;	// 0x318d4cd5
// converted property getter: - (id)string;	// 0x318d4d2d
// converted property getter: - (int)type;	// 0x318d4cc5
@end

