/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVXMLElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement {
	NSArray *_interstitials;	// 4 = 0x4
	ATVXMLElement *_xml;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *interstitials;	// G=0x1303e1; S=0x1303f1; @synthesize=_interstitials
@property(readonly, assign, nonatomic) ATVXMLElement *xml;	// G=0x130419; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x130211
- (void).cxx_destruct;	// 0x130429
// declared property getter: - (id)interstitials;	// 0x1303e1
// declared property setter: - (void)setInterstitials:(id)interstitials;	// 0x1303f1
// declared property getter: - (id)xml;	// 0x130419
@end
