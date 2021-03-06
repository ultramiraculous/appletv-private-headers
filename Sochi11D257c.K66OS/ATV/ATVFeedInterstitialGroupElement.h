/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVXMLElement;

__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement {
	NSArray *_interstitials;	// 4 = 0x4
	ATVXMLElement *_xml;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *interstitials;	// G=0x147ff1; S=0x148001; @synthesize=_interstitials
@property(readonly, assign, nonatomic) ATVXMLElement *xml;	// G=0x148029; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x147e21
- (void).cxx_destruct;	// 0x148039
// declared property getter: - (id)interstitials;	// 0x147ff1
// declared property setter: - (void)setInterstitials:(id)interstitials;	// 0x148001
// declared property getter: - (id)xml;	// 0x148029
@end

