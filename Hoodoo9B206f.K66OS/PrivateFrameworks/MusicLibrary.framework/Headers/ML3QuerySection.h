/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface ML3QuerySection : NSObject {
@private
	NSRange _range;	// 4 = 0x4
	unsigned _sectionIndex;	// 12 = 0xc
}
@property(assign, nonatomic) NSRange range;	// G=0x35d1e465; S=0x35d1e00d; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndex;	// G=0x35d1e021; S=0x35d1dffd; @synthesize=_sectionIndex
- (void)dealloc;	// 0x35d1e481
- (id)description;	// 0x35d424b5
// declared property getter: - (NSRange)range;	// 0x35d1e465
// declared property getter: - (unsigned)sectionIndex;	// 0x35d1e021
// declared property setter: - (void)setRange:(NSRange)range;	// 0x35d1e00d
// declared property setter: - (void)setSectionIndex:(unsigned)index;	// 0x35d1dffd
@end
