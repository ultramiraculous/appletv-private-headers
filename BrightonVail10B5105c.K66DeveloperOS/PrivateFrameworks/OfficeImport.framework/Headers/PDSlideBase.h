/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableStyle, OADBackground, NSArray, PDTransition, NSString, PDAnimation;

@interface PDSlideBase : NSObject {
	NSString *mName;	// 4 = 0x4
	NSArray *mDrawables;	// 8 = 0x8
	OADBackground *mBackground;	// 12 = 0xc
	PDAnimation *mAnimation;	// 16 = 0x10
	PDTransition *mTransition;	// 20 = 0x14
	OADTableStyle *mDefaultTableStyle;	// 24 = 0x18
	unsigned mIsHidden : 1;	// 28 = 0x1c
	unsigned mIsDoneWithContent : 1;	// 28 = 0x1c
}
@property(retain) id background;	// G=0x3791c30d; S=0x37914f9d; converted property
@property(retain) id defaultTableStyle;	// G=0x37b2b509; S=0x379e0b95; converted property
@property(assign) BOOL isHidden;	// G=0x3791b8d1; S=0x37a59059; converted property
@property(retain) id name;	// G=0x37b2b4b9; S=0x379e11f5; converted property
@property(retain) id transition;	// G=0x379e12c1; S=0x379e3879; converted property
+ (int)inheritedPlaceholderType:(int)type;	// 0x3791531d
- (id)init;	// 0x378c2409
- (void)addSlideNumberPlaceholder:(id)placeholder;	// 0x37917bf5
- (id)animation;	// 0x379de7b9
// converted property getter: - (id)background;	// 0x3791c30d
- (id)colorMap;	// 0x37b2b501
- (id)colorScheme;	// 0x37b2b4f9
- (void)dealloc;	// 0x3792c2cd
// converted property getter: - (id)defaultTableStyle;	// 0x37b2b509
- (id)defaultTheme;	// 0x37b2b4dd
- (void)doneWithContent;	// 0x37b2b519
- (id)drawables;	// 0x3791d9a9
- (id)drawingTheme;	// 0x37b2b5dd
- (id)fontScheme;	// 0x37b2b4fd
- (void)generatePpt9Animations:(id)animations;	// 0x37b2b6d5
- (BOOL)hasPpt10Animations;	// 0x37b2b5e1
- (BOOL)hasPpt9Animations;	// 0x37b2b60d
// converted property getter: - (BOOL)isHidden;	// 0x3791b8d1
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37b2b4f1
// converted property getter: - (id)name;	// 0x37b2b4b9
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37b2b4ed
- (id)parentSlideBase;	// 0x37b2b4f5
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37b2b4e1
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x37b2b4e5
- (id)parentTextStyleForTables;	// 0x37b2b4e9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37915345
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index useBaseTypeMatch:(BOOL)match overrideIndex:(BOOL)index4;	// 0x37915369
// converted property setter: - (void)setBackground:(id)background;	// 0x37914f9d
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x379e0b95
- (void)setDrawables:(id)drawables defaultTextListStyle:(id)style;	// 0x37910519
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x37b2b4c9
// converted property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x37a59059
// converted property setter: - (void)setName:(id)name;	// 0x379e11f5
- (void)setPpt9AnimationDataForCacheItem:(id)cacheItem order:(int)order;	// 0x37b2b7b5
// converted property setter: - (void)setTransition:(id)transition;	// 0x379e3879
- (id)styleMatrix;	// 0x37b2b505
// converted property getter: - (id)transition;	// 0x379e12c1
@end
