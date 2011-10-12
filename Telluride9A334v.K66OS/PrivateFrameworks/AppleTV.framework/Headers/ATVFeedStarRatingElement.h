/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStarRatingElement : ATVFeedElement {
@private
	float _ratingPercentage;	// 28 = 0x1c
	NSString *_rightLabel;	// 32 = 0x20
}
@property(assign, nonatomic) float ratingPercentage;	// G=0x3332611d; S=0x3332612d; @synthesize=_ratingPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x3332613d; S=0x3332614d; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33326005
- (void)dealloc;	// 0x333260d1
// declared property getter: - (float)ratingPercentage;	// 0x3332611d
// declared property getter: - (id)rightLabel;	// 0x3332613d
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x3332612d
// declared property setter: - (void)setRightLabel:(id)label;	// 0x3332614d
@end

