/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSString, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
@private
	BRTextControl *_titleControl;	// 48 = 0x30
	BRTextControl *_rightJustifiedTextControl;	// 52 = 0x34
	BRTextControl *_subtitleControl;	// 56 = 0x38
	BRImageControl *_icon;	// 60 = 0x3c
	BRDividerControl *_divider;	// 64 = 0x40
	NSString *_title;	// 68 = 0x44
	long _count;	// 72 = 0x48
	BOOL _displaysCount;	// 76 = 0x4c
	float _iconVerticalOffset;	// 80 = 0x50
}
@property(assign) long count;	// G=0x36700e4d; S=0x36700dfd; converted property
@property(assign) BOOL displaysCount;	// G=0x36700e9d; S=0x36700e5d; converted property
@property(assign) float dividerBrightness;	// G=0x36700fed; S=0x36700fcd; converted property
@property(retain) BRImageControl *icon;	// G=0x36700f7d; S=0x36700f41; converted property
@property(assign) float iconVerticalOffset;	// G=0x36700fbd; S=0x36700f9d; converted property
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x36700dc5; S=0x36700d69; 
@property(retain) id subtitle;	// G=0x36700f09; S=0x36700ead; converted property
@property(retain) NSString *title;	// G=0x36700d59; S=0x36700b9d; converted property
- (id)init;	// 0x36700991
- (id)accessibilityLabel;	// 0x36701445
// converted property getter: - (long)count;	// 0x36700e4d
- (void)dealloc;	// 0x36700b01
// converted property getter: - (BOOL)displaysCount;	// 0x36700e9d
// converted property getter: - (float)dividerBrightness;	// 0x36700fed
// converted property getter: - (id)icon;	// 0x36700f7d
// converted property getter: - (float)iconVerticalOffset;	// 0x36700fbd
- (void)layoutSubcontrols;	// 0x367010c5
- (id)photoBrowserHeader;	// 0x36700949
// declared property getter: - (id)rightJustifiedText;	// 0x36700dc5
// converted property setter: - (void)setCount:(long)count;	// 0x36700dfd
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x36700e5d
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x36700fcd
// converted property setter: - (void)setIcon:(id)icon;	// 0x36700f41
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x36700f9d
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x36700d69
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x36700ead
// converted property setter: - (void)setTitle:(id)title;	// 0x36700b9d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3670100d
// converted property getter: - (id)subtitle;	// 0x36700f09
// converted property getter: - (id)title;	// 0x36700d59
@end
