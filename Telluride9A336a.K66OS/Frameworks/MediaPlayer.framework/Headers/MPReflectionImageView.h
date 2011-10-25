/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <_UIReflectingView.h> // Unknown library

@class UIImageView;

@interface MPReflectionImageView : _UIReflectingView {
@private
	UIImageView *_imageView;	// 60 = 0x3c
	BOOL _squareImage;	// 64 = 0x40
}
@property(retain) id albumArtImage;	// G=0x35b700d9; S=0x35b702d9; converted property
@property(assign, nonatomic) BOOL squareImage;	// G=0x35b706bd; S=0x35b706cd; @synthesize=_squareImage
+ (float)defaultReflectionHeight;	// 0x35b700d1
- (id)initWithFrame:(CGRect)frame;	// 0x35b6ff61
// converted property getter: - (id)albumArtImage;	// 0x35b700d9
- (void)dealloc;	// 0x35b70085
// converted property setter: - (void)setAlbumArtImage:(id)image;	// 0x35b702d9
- (void)setAlbumVisible:(BOOL)visible reflectionVisible:(BOOL)visible2;	// 0x35b700f9
- (void)setFrame:(CGRect)frame withReflectionHeight:(float)reflectionHeight;	// 0x35b7054d
- (void)setReflectionVisible:(BOOL)visible withDuration:(float)duration;	// 0x35b70601
// declared property setter: - (void)setSquareImage:(BOOL)image;	// 0x35b706cd
// declared property getter: - (BOOL)squareImage;	// 0x35b706bd
@end

