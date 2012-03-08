/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfSectionElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSArray *_shelfItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSArray *shelfItems;	// G=0x331959a9; S=0x331959b9; @synthesize=_shelfItems
@property(copy, nonatomic) NSString *title;	// G=0x33195975; S=0x33195985; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33195779
- (void)dealloc;	// 0x33195915
// declared property setter: - (void)setShelfItems:(id)items;	// 0x331959b9
// declared property setter: - (void)setTitle:(id)title;	// 0x33195985
// declared property getter: - (id)shelfItems;	// 0x331959a9
// declared property getter: - (id)title;	// 0x33195975
@end
