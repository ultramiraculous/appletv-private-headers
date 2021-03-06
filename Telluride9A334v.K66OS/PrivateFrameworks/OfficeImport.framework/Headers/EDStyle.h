/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDProtection, EDResources;

__attribute__((visibility("hidden")))
@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mParentIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mFontIndex;	// 16 = 0x10
	unsigned mFillIndex;	// 20 = 0x14
	unsigned mAlignmentInfoIndex;	// 24 = 0x18
	unsigned mBordersIndex;	// 28 = 0x1c
	EDProtection *mProtection;	// 32 = 0x20
	unsigned mIndex;	// 36 = 0x24
	bool mContentFormatOverridden;	// 40 = 0x28
	bool mFontOverridden;	// 41 = 0x29
	bool mFillOverridden;	// 42 = 0x2a
	bool mAlignmentInfoOverridden;	// 43 = 0x2b
	bool mBordersOverridden;	// 44 = 0x2c
	bool mProtectionOverridden;	// 45 = 0x2d
	bool mDoNotModify;	// 46 = 0x2e
}
@property(retain) id alignmentInfo;	// G=0x355dcdd9; S=0x355c04a5; converted property
@property(assign) unsigned alignmentInfoIndex;	// G=0x35733471; S=0x35733481; converted property
@property(assign, getter=isAlignmentInfoOverridden) bool alignmentInfoOverridden;	// G=0x355dd415; S=0x355c1295; converted property
@property(retain) id borders;	// G=0x355df7d9; S=0x355c0d2d; converted property
@property(assign) unsigned bordersIndex;	// G=0x35733451; S=0x356852b1; converted property
@property(assign, getter=isBordersOverridden) bool bordersOverridden;	// G=0x355dcc79; S=0x355c12b5; converted property
@property(retain) id contentFormat;	// G=0x355de90d; S=0x357335a5; converted property
@property(assign) unsigned contentFormatId;	// G=0x355de8fd; S=0x355c1241; converted property
@property(assign, getter=isContentFormatOverridden) bool contentFormatOverridden;	// G=0x355de8ed; S=0x355c1315; converted property
@property(retain) id fill;	// G=0x355dcc89; S=0x355c1051; converted property
@property(assign) unsigned fillIndex;	// G=0x35733461; S=0x356852e5; converted property
@property(assign, getter=isFillOverridden) bool fillOverridden;	// G=0x35733401; S=0x355c12d5; converted property
@property(retain) id font;	// G=0x355cc8cd; S=0x356db7a1; converted property
@property(assign) unsigned fontIndex;	// G=0x35733431; S=0x355c0155; converted property
@property(assign, getter=isFontOverridden) bool fontOverridden;	// G=0x355e7fcd; S=0x355c1275; converted property
@property(assign) unsigned index;	// G=0x355dbea5; S=0x355c1391; converted property
@property(retain) id parent;	// G=0x3573355d; S=0x35733501; converted property
@property(assign) unsigned parentIndex;	// G=0x35733441; S=0x355bff85; converted property
@property(retain) id protection;	// G=0x35733421; S=0x355c11dd; converted property
@property(assign, getter=isProtectionOverridden) bool protectionOverridden;	// G=0x35733411; S=0x355c12f5; converted property
+ (id)styleWithResources:(id)resources;	// 0x357334b5
- (id)initWithResources:(id)resources;	// 0x355bfdad
// converted property getter: - (id)alignmentInfo;	// 0x355dcdd9
// converted property getter: - (unsigned)alignmentInfoIndex;	// 0x35733471
// converted property getter: - (id)borders;	// 0x355df7d9
// converted property getter: - (unsigned)bordersIndex;	// 0x35733451
// converted property getter: - (id)contentFormat;	// 0x355de90d
// converted property getter: - (unsigned)contentFormatId;	// 0x355de8fd
- (id)copyWithZone:(NSZone *)zone;	// 0x356dabe5
- (void)dealloc;	// 0x355f2bc9
// converted property getter: - (id)fill;	// 0x355dcc89
// converted property getter: - (unsigned)fillIndex;	// 0x35733461
// converted property getter: - (id)font;	// 0x355cc8cd
// converted property getter: - (unsigned)fontIndex;	// 0x35733431
- (unsigned)hash;	// 0x3573339d
// converted property getter: - (unsigned)index;	// 0x355dbea5
// converted property getter: - (bool)isAlignmentInfoOverridden;	// 0x355dd415
// converted property getter: - (bool)isBordersOverridden;	// 0x355dcc79
// converted property getter: - (bool)isContentFormatOverridden;	// 0x355de8ed
- (BOOL)isEqual:(id)equal;	// 0x356db849
- (BOOL)isEqualToStyle:(id)style;	// 0x356db8a5
- (BOOL)isEquivalentToStyle:(id)style;	// 0x356db959
// converted property getter: - (bool)isFillOverridden;	// 0x35733401
// converted property getter: - (bool)isFontOverridden;	// 0x355e7fcd
// converted property getter: - (bool)isProtectionOverridden;	// 0x35733411
// converted property getter: - (id)parent;	// 0x3573355d
// converted property getter: - (unsigned)parentIndex;	// 0x35733441
// converted property getter: - (id)protection;	// 0x35733421
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x355c04a5
// converted property setter: - (void)setAlignmentInfoIndex:(unsigned)index;	// 0x35733481
// converted property setter: - (void)setAlignmentInfoOverridden:(bool)overridden;	// 0x355c1295
// converted property setter: - (void)setBorders:(id)borders;	// 0x355c0d2d
// converted property setter: - (void)setBordersIndex:(unsigned)index;	// 0x356852b1
// converted property setter: - (void)setBordersOverridden:(bool)overridden;	// 0x355c12b5
// converted property setter: - (void)setContentFormat:(id)format;	// 0x357335a5
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x355c1241
// converted property setter: - (void)setContentFormatOverridden:(bool)overridden;	// 0x355c1315
- (void)setDoNotModify:(bool)modify;	// 0x355c1381
// converted property setter: - (void)setFill:(id)fill;	// 0x355c1051
// converted property setter: - (void)setFillIndex:(unsigned)index;	// 0x356852e5
// converted property setter: - (void)setFillOverridden:(bool)overridden;	// 0x355c12d5
// converted property setter: - (void)setFont:(id)font;	// 0x356db7a1
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x355c0155
// converted property setter: - (void)setFontOverridden:(bool)overridden;	// 0x355c1275
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x355c1391
// converted property setter: - (void)setParent:(id)parent;	// 0x35733501
// converted property setter: - (void)setParentIndex:(unsigned)index;	// 0x355bff85
// converted property setter: - (void)setProtection:(id)protection;	// 0x355c11dd
// converted property setter: - (void)setProtectionOverridden:(bool)overridden;	// 0x355c12f5
@end

