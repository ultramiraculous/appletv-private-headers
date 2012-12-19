/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIButton.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPCloudDownloadButton : UIButton {
	int _cloudButtonStyle;	// 180 = 0xb4
}
@property(assign, nonatomic) int cloudButtonStyle;	// G=0x31e55165; S=0x31e55175; @synthesize=_cloudButtonStyle
+ (id)cloudDownloadButtonWithStyle:(int)style;	// 0x31e548ed
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x31e54f51
// declared property getter: - (int)cloudButtonStyle;	// 0x31e55165
// declared property setter: - (void)setCloudButtonStyle:(int)style;	// 0x31e55175
- (void)setHighlighted:(BOOL)highlighted;	// 0x31e550ed
@end
