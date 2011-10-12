/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextBodyAutoFit.h"


__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
@private
	float mFontScalePercent;	// 8 = 0x8
	float mLineSpacingReductionPercent;	// 12 = 0xc
}
- (id)initWithFontScalePercent:(float)fontScalePercent lineSpacingReductionPercent:(float)percent;	// 0x3568f959
- (float)fontScalePercent;	// 0x35789741
- (unsigned)hash;	// 0x35789881
- (BOOL)isEqual:(id)equal;	// 0x35789799
- (float)lineSpacingReductionPercent;	// 0x35789751
@end

