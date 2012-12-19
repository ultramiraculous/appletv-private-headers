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
@property(assign, nonatomic) int columnCount;	// G=0x15d9ad; S=0x15d9bd; @synthesize=_columnCount
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x15d9cd; S=0x15d9dd; @synthesize=_refreshIntervalSec
@property(retain, nonatomic) NSArray *sections;	// G=0x15d9ed; S=0x15d9fd; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15d769
// declared property getter: - (int)columnCount;	// 0x15d9ad
- (void)dealloc;	// 0x15d961
// declared property getter: - (int)refreshIntervalSec;	// 0x15d9cd
// declared property getter: - (id)sections;	// 0x15d9ed
// declared property setter: - (void)setColumnCount:(int)count;	// 0x15d9bd
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x15d9dd
// declared property setter: - (void)setSections:(id)sections;	// 0x15d9fd
@end
