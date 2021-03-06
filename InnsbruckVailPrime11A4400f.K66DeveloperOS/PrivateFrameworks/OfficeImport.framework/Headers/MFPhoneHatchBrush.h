/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFPhoneBrush.h"

@class TSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {
	TSUColor *m_colour;	// 4 = 0x4
	int m_style;	// 8 = 0x8
}
+ (id)hatchBrushWithColour:(id)colour :(int)arg2;	// 0x318945e5
+ (id)patternNameForHatchStyle:(int)hatchStyle;	// 0x318947e9
- (id)initWithColour:(id)colour :(int)arg2;	// 0x31894625
- (void)dealloc;	// 0x31894e4d
- (void)fillPath:(id)path :(id)arg2;	// 0x31894689
@end

