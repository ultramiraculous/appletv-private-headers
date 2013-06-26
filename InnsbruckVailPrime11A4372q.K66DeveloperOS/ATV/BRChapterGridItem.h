/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSDictionary, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x32a22d; S=0x329ef1; converted property
- (id)init;	// 0x329e1d
// converted property getter: - (id)chapterInfo;	// 0x32a22d
- (void)controlWasFocused;	// 0x32a23d
- (void)controlWasUnfocused;	// 0x32a2ad
- (void)dealloc;	// 0x329e79
- (void)layoutSubcontrols;	// 0x32a2fd
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x329ef1
@end
