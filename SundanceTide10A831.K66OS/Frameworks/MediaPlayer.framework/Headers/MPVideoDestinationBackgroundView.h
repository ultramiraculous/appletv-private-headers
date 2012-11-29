/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {
	NSString *_destinationName;	// 84 = 0x54
	UILabel *_destinationSubtitleLabel;	// 88 = 0x58
	UILabel *_destinationTitleLabel;	// 92 = 0x5c
	int _style;	// 96 = 0x60
	UIImageView *_videosImageView;	// 100 = 0x64
}
@property(copy, nonatomic) NSString *destinationName;	// G=0x36ef5179; S=0x36ef4655; @synthesize=_destinationName
@property(assign, nonatomic) int style;	// G=0x36ef5169; S=0x36ef46c1; @synthesize=_style
- (id)initWithFrame:(CGRect)frame;	// 0x36ef455d
- (void)dealloc;	// 0x36ef45c9
// declared property getter: - (id)destinationName;	// 0x36ef5179
- (void)layoutSubviews;	// 0x36ef46e9
// declared property setter: - (void)setDestinationName:(id)name;	// 0x36ef4655
- (void)setFrame:(CGRect)frame;	// 0x36ef5121
// declared property setter: - (void)setStyle:(int)style;	// 0x36ef46c1
// declared property getter: - (int)style;	// 0x36ef5169
@end
