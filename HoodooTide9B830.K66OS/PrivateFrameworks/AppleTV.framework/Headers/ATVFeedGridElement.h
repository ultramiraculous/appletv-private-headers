/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedGridElement : ATVFeedElement {
@private
	int _columnCount;	// 28 = 0x1c
	NSArray *_gridItems;	// 32 = 0x20
}
@property(assign, nonatomic) int columnCount;	// G=0x32aeb015; S=0x32aeb025; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *gridItems;	// G=0x32aeb035; S=0x32aeb045; @synthesize=_gridItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32aeae25
// declared property getter: - (int)columnCount;	// 0x32aeb015
- (void)dealloc;	// 0x32aeafc9
// declared property getter: - (id)gridItems;	// 0x32aeb035
// declared property setter: - (void)setColumnCount:(int)count;	// 0x32aeb025
// declared property setter: - (void)setGridItems:(id)items;	// 0x32aeb045
@end
