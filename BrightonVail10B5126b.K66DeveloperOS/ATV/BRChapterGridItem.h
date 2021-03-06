/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary, BRMarqueeTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x2ca6b1; S=0x2ca38d; converted property
- (id)init;	// 0x2ca2b9
// converted property getter: - (id)chapterInfo;	// 0x2ca6b1
- (void)controlWasFocused;	// 0x2ca6c1
- (void)controlWasUnfocused;	// 0x2ca731
- (void)dealloc;	// 0x2ca315
- (void)layoutSubcontrols;	// 0x2ca781
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x2ca38d
@end

