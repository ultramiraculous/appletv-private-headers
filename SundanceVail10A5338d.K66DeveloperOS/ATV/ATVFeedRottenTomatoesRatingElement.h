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
@property(retain, nonatomic) NSString *freshness;	// G=0x13d559; S=0x13d569; @synthesize=_freshness
@property(assign, nonatomic) float ratingPercentage;	// G=0x13d579; S=0x13d589; @synthesize=_ratingPercentage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13d441
- (void)dealloc;	// 0x13d50d
// declared property getter: - (id)freshness;	// 0x13d559
// declared property getter: - (float)ratingPercentage;	// 0x13d579
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x13d569
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x13d589
@end
