/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject {
@private
	ODDFillColorList *mFillColors;	// 4 = 0x4
	ODDFillColorList *mLineColors;	// 8 = 0x8
	ODDFillColorList *mEffectColors;	// 12 = 0xc
	ODDFillColorList *mTextLineColors;	// 16 = 0x10
	ODDFillColorList *mTextFillColors;	// 20 = 0x14
	ODDFillColorList *mTextEffectColors;	// 24 = 0x18
}
@property(retain) id effectColors;	// G=0x34d4cc4d; S=0x34d466f9; converted property
@property(retain) id fillColors;	// G=0x34d4cb35; S=0x34d46679; converted property
@property(retain) id lineColors;	// G=0x34d4cc2d; S=0x34d466b9; converted property
@property(retain) id textEffectColors;	// G=0x34e2d3f1; S=0x34d467b9; converted property
@property(retain) id textFillColors;	// G=0x34d4cc5d; S=0x34d46779; converted property
@property(retain) id textLineColors;	// G=0x34e2d3e1; S=0x34d46739; converted property
- (void)applyToShapeStyle:(id)shapeStyle index:(unsigned)index count:(unsigned)count state:(id)state;	// 0x34d4c9e9
- (void)dealloc;	// 0x34d4e7f9
// converted property getter: - (id)effectColors;	// 0x34d4cc4d
// converted property getter: - (id)fillColors;	// 0x34d4cb35
// converted property getter: - (id)lineColors;	// 0x34d4cc2d
// converted property setter: - (void)setEffectColors:(id)colors;	// 0x34d466f9
// converted property setter: - (void)setFillColors:(id)colors;	// 0x34d46679
// converted property setter: - (void)setLineColors:(id)colors;	// 0x34d466b9
// converted property setter: - (void)setTextEffectColors:(id)colors;	// 0x34d467b9
// converted property setter: - (void)setTextFillColors:(id)colors;	// 0x34d46779
// converted property setter: - (void)setTextLineColors:(id)colors;	// 0x34d46739
// converted property getter: - (id)textEffectColors;	// 0x34e2d3f1
// converted property getter: - (id)textFillColors;	// 0x34d4cc5d
// converted property getter: - (id)textLineColors;	// 0x34e2d3e1
@end

