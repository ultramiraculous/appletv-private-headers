/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OABFillPropertiesManager.h"
#import "OABColorPropertiesManager.h"

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x354ebde9
- (void)dealloc;	// 0x355645b1
- (long)fillAngle;	// 0x355ae34d
- (long)fillBgAlpha;	// 0x355ae885
- (EshColor)fillBgColor;	// 0x355ae41d
- (EshBlip *)fillBlipDataReference;	// 0x355a85b5
- (unsigned long)fillBlipID;	// 0x355a8481
- (id)fillBlipName;	// 0x355a8509
- (long)fillFgAlpha;	// 0x3556aa05
- (EshColor)fillFgColor;	// 0x3556a999
- (long)fillFocus;	// 0x355ae3b5
- (long)fillFocusBottom;	// 0x3562c3d5
- (long)fillFocusLeft;	// 0x3562c2c1
- (long)fillFocusRight;	// 0x3562c379
- (long)fillFocusTop;	// 0x3562c31d
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x355ae661
- (int)fillType;	// 0x354ec86d
- (BOOL)isFilled;	// 0x354ec921
- (BOOL)isStroked;	// 0x357dc80d
- (EshColor)shadowColor;	// 0x357dc811
- (EshColor)strokeBgColor;	// 0x357dc839
- (EshColor)strokeFgColor;	// 0x357dc861
@end

