/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVXMLFeedRootElement.h"

@class ATVXMLFeedMenuElement;

@interface ATVXMLFeedSearchResultsElement : ATVXMLFeedRootElement {
	ATVXMLFeedMenuElement *_menu;	// 24 = 0x18
}
@property(retain, nonatomic) ATVXMLFeedMenuElement *menu;	// G=0x30465981; S=0x30465991; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement feedDocument:(id)document;	// 0x304658bd
- (void).cxx_destruct;	// 0x304659b9
// declared property getter: - (id)menu;	// 0x30465981
// declared property setter: - (void)setMenu:(id)menu;	// 0x30465991
@end

