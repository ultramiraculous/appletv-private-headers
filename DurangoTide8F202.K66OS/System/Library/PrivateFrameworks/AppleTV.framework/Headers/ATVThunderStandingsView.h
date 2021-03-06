/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class NSString, BRHeaderControl, BRDividerControl, BRImageControl, BRImage, BRReflectionControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsView : BRControl {
@private
	BRDividerControl *_leftDivider;	// 44 = 0x2c
	BRImageControl *_leftBackgroundImageControl;	// 48 = 0x30
	BRReflectionControl *_leftReflectionControl;	// 52 = 0x34
	BRDividerControl *_rightDivider;	// 56 = 0x38
	BRImageControl *_rightBackgroundImageControl;	// 60 = 0x3c
	BRReflectionControl *_rightReflectionControl;	// 64 = 0x40
	BRControl *_dimControl;	// 68 = 0x44
	BRHeaderControl *_headerControl;	// 72 = 0x48
	BRTableView *_leftTable;	// 76 = 0x4c
	BRTableView *_rightTable;	// 80 = 0x50
}
@property(retain, nonatomic) BRImage *headerImage;	// G=0x337189f1; S=0x33718a11; 
@property(retain, nonatomic) BRImage *leftBackgroundImage;	// G=0x33718995; S=0x337189b5; 
@property(readonly, assign, nonatomic) BRTableView *leftTable;	// G=0x337188a9; @synthesize=_leftTable
@property(retain, nonatomic) BRImage *rightBackgroundImage;	// G=0x33718939; S=0x33718959; 
@property(readonly, assign, nonatomic) BRTableView *rightTable;	// G=0x33718899; @synthesize=_rightTable
@property(readonly, assign, nonatomic) float tableWidth;	// G=0x33718891; 
@property(copy, nonatomic) NSString *title;	// G=0x33718a71; S=0x33718a91; 
- (id)init;	// 0x33718b9d
- (id)accessibilityLabel;	// 0x33718919
- (id)accessibilityNonFocusableElements;	// 0x337188b9
- (void)dealloc;	// 0x33718ab1
// declared property getter: - (id)headerImage;	// 0x337189f1
- (void)layoutSubcontrols;	// 0x33718dd9
// declared property getter: - (id)leftBackgroundImage;	// 0x33718995
// declared property getter: - (id)leftTable;	// 0x337188a9
// declared property getter: - (id)rightBackgroundImage;	// 0x33718939
// declared property getter: - (id)rightTable;	// 0x33718899
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x33718a11
// declared property setter: - (void)setLeftBackgroundImage:(id)image;	// 0x337189b5
// declared property setter: - (void)setRightBackgroundImage:(id)image;	// 0x33718959
// declared property setter: - (void)setTitle:(id)title;	// 0x33718a91
// declared property getter: - (float)tableWidth;	// 0x33718891
// declared property getter: - (id)title;	// 0x33718a71
@end

