/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTopShelfElement : ATVFeedRootElement {
	int _columnCount;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSArray *_sections;	// 16 = 0x10
}
@property(assign, nonatomic) int columnCount;	// G=0x161045; S=0x161055; @synthesize=_columnCount
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x161065; S=0x161075; @synthesize=_refreshIntervalSec
@property(retain, nonatomic) NSArray *sections;	// G=0x161085; S=0x161095; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x160e01
// declared property getter: - (int)columnCount;	// 0x161045
- (void)dealloc;	// 0x160ff9
// declared property getter: - (int)refreshIntervalSec;	// 0x161065
// declared property getter: - (id)sections;	// 0x161085
// declared property setter: - (void)setColumnCount:(int)count;	// 0x161055
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x161075
// declared property setter: - (void)setSections:(id)sections;	// 0x161095
@end
