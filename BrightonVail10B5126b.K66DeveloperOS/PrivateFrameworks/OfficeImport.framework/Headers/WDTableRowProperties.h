/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
	WDTableProperties *mTableProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_98qQxD mOriginalProperties;	// 16 = 0x10
	XXStruct_98qQxD mTrackedProperties;	// 44 = 0x2c
}
@property(assign) BOOL header;	// G=0x34abc405; S=0x3494e87d; converted property
@property(assign) long height;	// G=0x3494fb0d; S=0x3494e9bd; converted property
@property(assign) int heightType;	// G=0x34abc2d9; S=0x3494e96d; converted property
@property(assign) int resolveMode;	// G=0x34abbd99; S=0x3494d041; converted property
@property(assign) short widthAfter;	// G=0x34abc081; S=0x34954d15; converted property
@property(assign) int widthAfterType;	// G=0x34abc1ad; S=0x34954d65; converted property
@property(assign) short widthBefore;	// G=0x34abbe29; S=0x34954325; converted property
@property(assign) int widthBeforeType;	// G=0x34abbf55; S=0x34954375; converted property
- (id)init;	// 0x34abbd59
- (id)initWithDocument:(id)document;	// 0x348e225d
- (id).cxx_construct;	// 0x348e2259
- (void)addProperties:(id)properties;	// 0x34abbde1
- (void)addPropertiesValues:(XXStruct_98qQxD *)values to:(XXStruct_98qQxD *)to;	// 0x34abc655
- (id)characterProperties;	// 0x34901361
- (id)copyWithZone:(NSZone *)zone;	// 0x34abc53d
- (void)dealloc;	// 0x34905321
// converted property getter: - (BOOL)header;	// 0x34abc405
// converted property getter: - (long)height;	// 0x3494fb0d
// converted property getter: - (int)heightType;	// 0x34abc2d9
- (BOOL)isHeaderOverridden;	// 0x34abc499
- (BOOL)isHeightOverridden;	// 0x34901601
- (BOOL)isHeightTypeOverridden;	// 0x34abc365
- (BOOL)isWidthAfterOverridden;	// 0x34abc10d
- (BOOL)isWidthAfterTypeOverridden;	// 0x34abc239
- (BOOL)isWidthBeforeOverridden;	// 0x34abbeb5
- (BOOL)isWidthBeforeTypeOverridden;	// 0x34abbfe1
// converted property getter: - (int)resolveMode;	// 0x34abbd99
// converted property setter: - (void)setHeader:(BOOL)header;	// 0x3494e87d
// converted property setter: - (void)setHeight:(long)height;	// 0x3494e9bd
// converted property setter: - (void)setHeightType:(int)type;	// 0x3494e96d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x3494d041
// converted property setter: - (void)setWidthAfter:(short)after;	// 0x34954d15
// converted property setter: - (void)setWidthAfterType:(int)type;	// 0x34954d65
// converted property setter: - (void)setWidthBefore:(short)before;	// 0x34954325
// converted property setter: - (void)setWidthBeforeType:(int)type;	// 0x34954375
- (id)tableProperties;	// 0x348e24e1
// converted property getter: - (short)widthAfter;	// 0x34abc081
// converted property getter: - (int)widthAfterType;	// 0x34abc1ad
// converted property getter: - (short)widthBefore;	// 0x34abbe29
// converted property getter: - (int)widthBeforeType;	// 0x34abbf55
@end
