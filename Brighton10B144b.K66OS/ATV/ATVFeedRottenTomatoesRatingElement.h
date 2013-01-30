/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement {
	NSString *_freshness;	// 4 = 0x4
	float _ratingPercentage;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *freshness;	// G=0x163f3d; S=0x163f4d; @synthesize=_freshness
@property(assign, nonatomic) float ratingPercentage;	// G=0x163f5d; S=0x163f6d; @synthesize=_ratingPercentage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x163e25
- (void)dealloc;	// 0x163ef1
// declared property getter: - (id)freshness;	// 0x163f3d
// declared property getter: - (float)ratingPercentage;	// 0x163f5d
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x163f4d
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x163f6d
@end
