/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVFadeLayer : BRControl {
	int _orientation;	// 84 = 0x54
	float _maxAlpha;	// 88 = 0x58
	float _minAlpha;	// 92 = 0x5c
}
- (id)initWithOrientation:(int)orientation;	// 0x3efbc1
- (id)initWithOrientation:(int)orientation maxAlpha:(float)alpha minAlpha:(float)alpha3;	// 0x3efbe5
- (id)_bottomFadeFilters;	// 0x3eff51
- (id)_leftFadeFilters;	// 0x3f00d5
- (id)_rightFadeFilters;	// 0x3f0259
- (id)_topFadeFilters;	// 0x3efdcd
@end

