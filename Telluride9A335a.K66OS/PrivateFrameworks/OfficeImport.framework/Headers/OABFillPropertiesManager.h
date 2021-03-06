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
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x35130de9
- (void)dealloc;	// 0x351a95b1
- (long)fillAngle;	// 0x351f334d
- (long)fillBgAlpha;	// 0x351f3885
- (EshColor)fillBgColor;	// 0x351f341d
- (EshBlip *)fillBlipDataReference;	// 0x351ed5b5
- (unsigned long)fillBlipID;	// 0x351ed481
- (id)fillBlipName;	// 0x351ed509
- (long)fillFgAlpha;	// 0x351afa05
- (EshColor)fillFgColor;	// 0x351af999
- (long)fillFocus;	// 0x351f33b5
- (long)fillFocusBottom;	// 0x352713d5
- (long)fillFocusLeft;	// 0x352712c1
- (long)fillFocusRight;	// 0x35271379
- (long)fillFocusTop;	// 0x3527131d
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x351f3661
- (int)fillType;	// 0x3513186d
- (BOOL)isFilled;	// 0x35131921
- (BOOL)isStroked;	// 0x3542180d
- (EshColor)shadowColor;	// 0x35421811
- (EshColor)strokeBgColor;	// 0x35421839
- (EshColor)strokeFgColor;	// 0x35421861
@end

