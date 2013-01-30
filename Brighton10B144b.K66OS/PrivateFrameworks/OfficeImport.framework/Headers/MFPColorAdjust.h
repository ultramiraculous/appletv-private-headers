/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, TSUColor;

@interface MFPColorAdjust : NSObject {
	MFPColorMatrix *mColorMatrix;	// 4 = 0x4
	MFPColorMatrix *mGrayMatrix;	// 8 = 0x8
	int mColorMatrixFlags;	// 12 = 0xc
	struct {
		TSUColor *mLow;
		TSUColor *mHigh;
	} mTransparentRange;	// 16 = 0x10
	float mGamma;	// 24 = 0x18
	NSDictionary *mRecolorMap;	// 28 = 0x1c
	float mThreshold;	// 32 = 0x20
	BOOL mEnabled;	// 36 = 0x24
}
@property(assign) MFPColorMatrix *colorMatrix;	// G=0x34affb31; S=0x34affb41; converted property
@property(assign) int colorMatrixFlags;	// G=0x34affbc9; S=0x34affbd9; converted property
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x34affcfd; S=0x34affd0d; converted property
@property(assign) float gamma;	// G=0x34affc71; S=0x34affc81; converted property
@property(assign) MFPColorMatrix *grayMatrix;	// G=0x34affb7d; S=0x34affb8d; converted property
@property(retain) id recolorMap;	// G=0x34affc91; S=0x34affca1; converted property
@property(assign) float threshold;	// G=0x34affcdd; S=0x34affced; converted property
- (id)init;	// 0x34affa25
- (id).cxx_construct;	// 0x34affd1d
// converted property getter: - (MFPColorMatrix *)colorMatrix;	// 0x34affb31
// converted property getter: - (int)colorMatrixFlags;	// 0x34affbc9
- (void)dealloc;	// 0x34affa99
// converted property getter: - (float)gamma;	// 0x34affc71
// converted property getter: - (MFPColorMatrix *)grayMatrix;	// 0x34affb7d
// converted property getter: - (BOOL)isEnabled;	// 0x34affcfd
// converted property getter: - (id)recolorMap;	// 0x34affc91
// converted property setter: - (void)setColorMatrix:(MFPColorMatrix *)matrix;	// 0x34affb41
// converted property setter: - (void)setColorMatrixFlags:(int)flags;	// 0x34affbd9
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34affd0d
// converted property setter: - (void)setGamma:(float)gamma;	// 0x34affc81
// converted property setter: - (void)setGrayMatrix:(MFPColorMatrix *)matrix;	// 0x34affb8d
// converted property setter: - (void)setRecolorMap:(id)map;	// 0x34affca1
// converted property setter: - (void)setThreshold:(float)threshold;	// 0x34affced
- (void)setTransparentLow:(id)low high:(id)high;	// 0x34affc0d
// converted property getter: - (float)threshold;	// 0x34affcdd
- (id)transparentHigh;	// 0x34affbf9
- (id)transparentLow;	// 0x34affbe9
@end
