/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableStyle, OADBackground, NSArray, PDTransition, NSString, PDAnimation;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject {
@private
	NSString *mName;	// 4 = 0x4
	NSArray *mDrawables;	// 8 = 0x8
	OADBackground *mBackground;	// 12 = 0xc
	PDAnimation *mAnimation;	// 16 = 0x10
	PDTransition *mTransition;	// 20 = 0x14
	OADTableStyle *mDefaultTableStyle;	// 24 = 0x18
	unsigned mIsHidden : 1;	// 28 = 0x1c
	unsigned mIsDoneWithContent : 1;	// 28 = 0x1c
}
@property(retain) id background;	// G=0x3107a9a5; S=0x31073635; converted property
@property(retain) id defaultTableStyle;	// G=0x31289519; S=0x3113f22d; converted property
@property(assign) BOOL isHidden;	// G=0x31079f69; S=0x311b7719; converted property
@property(retain) id name;	// G=0x312894c9; S=0x3113f88d; converted property
@property(retain) id transition;	// G=0x3113f959; S=0x31141f11; converted property
+ (int)inheritedPlaceholderType:(int)type;	// 0x310739b5
- (id)init;	// 0x31020aa1
- (void)addSlideNumberPlaceholder:(id)placeholder;	// 0x3107628d
- (id)animation;	// 0x3113ce51
// converted property getter: - (id)background;	// 0x3107a9a5
- (id)colorMap;	// 0x31289511
- (id)colorScheme;	// 0x31289509
- (void)dealloc;	// 0x3108a965
// converted property getter: - (id)defaultTableStyle;	// 0x31289519
- (id)defaultTheme;	// 0x312894ed
- (void)doneWithContent;	// 0x31289529
- (id)drawables;	// 0x3107c041
- (id)drawingTheme;	// 0x312895ed
- (id)fontScheme;	// 0x3128950d
- (void)generatePpt9Animations:(id)animations;	// 0x312896e5
- (BOOL)hasPpt10Animations;	// 0x312895f1
- (BOOL)hasPpt9Animations;	// 0x3128961d
// converted property getter: - (BOOL)isHidden;	// 0x31079f69
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31289501
// converted property getter: - (id)name;	// 0x312894c9
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x312894fd
- (id)parentSlideBase;	// 0x31289505
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x312894f1
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x312894f5
- (id)parentTextStyleForTables;	// 0x312894f9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x310739dd
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index useBaseTypeMatch:(BOOL)match overrideIndex:(BOOL)index4;	// 0x31073a01
// converted property setter: - (void)setBackground:(id)background;	// 0x31073635
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x3113f22d
- (void)setDrawables:(id)drawables defaultTextListStyle:(id)style;	// 0x3106ebb1
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x312894d9
// converted property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x311b7719
// converted property setter: - (void)setName:(id)name;	// 0x3113f88d
- (void)setPpt9AnimationDataForCacheItem:(id)cacheItem order:(int)order;	// 0x312897c5
// converted property setter: - (void)setTransition:(id)transition;	// 0x31141f11
- (id)styleMatrix;	// 0x31289515
// converted property getter: - (id)transition;	// 0x3113f959
@end

