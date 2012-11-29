/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, CALayer;

@interface MPArtworkSheenView : UIView {
	CALayer *_imageLayer;	// 84 = 0x54
	id _motionManagerObserver;	// 88 = 0x58
	float _rotation;	// 92 = 0x5c
}
@property(retain, nonatomic) UIImage *image;	// G=0x35d8fcc5; S=0x35d8fd0d; 
- (id)initWithFrame:(CGRect)frame;	// 0x35d8f609
- (void)dealloc;	// 0x35d8fbe9
// declared property getter: - (id)image;	// 0x35d8fcc5
// declared property setter: - (void)setImage:(id)image;	// 0x35d8fd0d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35d8fc51
@end
