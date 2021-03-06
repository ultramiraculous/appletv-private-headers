/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OABColorPropertiesManager.h"
#import "OABFillPropertiesManager.h"

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

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
	const EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x378bf579
- (void)dealloc;	// 0x378c1a15
- (long)fillAngle;	// 0x37928989
- (long)fillBgAlpha;	// 0x37928ed9
- (EshColor)fillBgColor;	// 0x37928a61
- (EshBlip *)fillBlipDataReference;	// 0x37923159
- (unsigned long)fillBlipID;	// 0x37923015
- (id)fillBlipName;	// 0x379230a5
- (long)fillFgAlpha;	// 0x37914e45
- (EshColor)fillFgColor;	// 0x37914dcd
- (long)fillFocus;	// 0x379289f5
- (long)fillFocusBottom;	// 0x37a3a441
- (long)fillFocusLeft;	// 0x37a3a2fd
- (long)fillFocusRight;	// 0x37a3a3d5
- (long)fillFocusTop;	// 0x37a3a369
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x37928c91
- (int)fillType;	// 0x378bffa9
- (BOOL)isFilled;	// 0x378c0029
- (BOOL)isStroked;	// 0x37ae0281
- (EshColor)shadowColor;	// 0x37ae02e5
- (EshColor)strokeBgColor;	// 0x37ae02b5
- (EshColor)strokeFgColor;	// 0x37ae0285
@end

