/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "EnhancementCalculation.h"


__attribute__((visibility("hidden")))
@interface EnhancementCalculator : EnhancementCalculation {
@private
	BOOL faceBalanceEnabled;	// 56 = 0x38
	BOOL vibranceEnabled;	// 57 = 0x39
	BOOL curvesEnabled;	// 58 = 0x3a
	BOOL shadowsEnabled;	// 59 = 0x3b
}
@property(assign) BOOL curvesEnabled;	// G=0x36ec3a51; S=0x36ec3a61; @synthesize
@property(assign) BOOL faceBalanceEnabled;	// G=0x36ec3a11; S=0x36ec3a21; @synthesize
@property(assign) BOOL shadowsEnabled;	// G=0x36ec3a71; S=0x36ec3a81; @synthesize
@property(assign) BOOL vibranceEnabled;	// G=0x36ec3a31; S=0x36ec3a41; @synthesize
- (id)init;	// 0x36ec2e51
- (void)analyzeFeatures:(id)features usingContext:(id)context baseImage:(id)image;	// 0x36ec3475
// declared property getter: - (BOOL)curvesEnabled;	// 0x36ec3a51
- (void)dealloc;	// 0x36ec2eb9
// declared property getter: - (BOOL)faceBalanceEnabled;	// 0x36ec3a11
- (id)histogramFromRows:(id)rows componentOffset:(unsigned)offset;	// 0x36ec2ee5
// declared property setter: - (void)setCurvesEnabled:(BOOL)enabled;	// 0x36ec3a61
// declared property setter: - (void)setFaceBalanceEnabled:(BOOL)enabled;	// 0x36ec3a21
// declared property setter: - (void)setShadowsEnabled:(BOOL)enabled;	// 0x36ec3a81
// declared property setter: - (void)setVibranceEnabled:(BOOL)enabled;	// 0x36ec3a41
- (id)setupFaceColorFromImage:(id)image usingContext:(id)context detectorOpts:(id)opts;	// 0x36ec3971
- (void)setupFaceColorFromImage:(id)image usingContext:(id)context features:(id)features;	// 0x36ec39ed
- (void)setupHistogramsUsing:(id)aUsing redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;	// 0x36ec3011
// declared property getter: - (BOOL)shadowsEnabled;	// 0x36ec3a71
// declared property getter: - (BOOL)vibranceEnabled;	// 0x36ec3a31
@end
