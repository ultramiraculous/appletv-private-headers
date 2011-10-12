/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRContainerViewDataCache : NSObject {
@private
	NSArray *_sectionInfos;	// 4 = 0x4
	long _numberOfItems;	// 8 = 0x8
	long _numberOfColumns;	// 12 = 0xc
}
@property(assign) long numberOfColumns;	// G=0x3328e2a5; S=0x3328e2b5; @synthesize=_numberOfColumns
@property(assign) long numberOfItems;	// G=0x3328e285; S=0x3328e295; @synthesize=_numberOfItems
@property(retain) NSArray *sectionInfos;	// G=0x3328e24d; S=0x3328e261; @synthesize=_sectionInfos
- (void)dealloc;	// 0x3328e201
// declared property getter: - (long)numberOfColumns;	// 0x3328e2a5
// declared property getter: - (long)numberOfItems;	// 0x3328e285
// declared property getter: - (id)sectionInfos;	// 0x3328e24d
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x3328e2b5
// declared property setter: - (void)setNumberOfItems:(long)items;	// 0x3328e295
// declared property setter: - (void)setSectionInfos:(id)infos;	// 0x3328e261
@end

