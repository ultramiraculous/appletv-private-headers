/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSDictionary, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement {
	NSString *_freshness;	// 4 = 0x4
	float _ratingPercentage;	// 8 = 0x8
	NSDictionary *_styleKeyValues;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *freshness;	// G=0x11bd69; S=0x11bd79; @synthesize=_freshness
@property(readonly, assign, nonatomic) UIColor *labelColor;	// G=0x11bd15; 
@property(assign, nonatomic) float ratingPercentage;	// G=0x11bda1; S=0x11bdb1; @synthesize=_ratingPercentage
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x11bdc1; S=0x11bdd1; @synthesize=_styleKeyValues
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11bb75
- (void).cxx_destruct;	// 0x11bdf9
// declared property getter: - (id)freshness;	// 0x11bd69
// declared property getter: - (id)labelColor;	// 0x11bd15
// declared property getter: - (float)ratingPercentage;	// 0x11bda1
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x11bd79
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x11bdb1
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x11bdd1
// declared property getter: - (id)styleKeyValues;	// 0x11bdc1
@end

