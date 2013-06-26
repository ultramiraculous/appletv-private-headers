/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoPlayerSwapView : BRControl {
	BRControl *_imageControl;	// 84 = 0x54
	BRControl *_playerView;	// 88 = 0x58
	BRControl *_centerBadge;	// 92 = 0x5c
	BRControl *_transportView;	// 96 = 0x60
	XXStruct_qlg9jA _shadowWidth;	// 100 = 0x64
	BRControl *_leftShadow;	// 104 = 0x68
	BRControl *_rightShadow;	// 108 = 0x6c
	BRControl *_centerBadgeContainer;	// 112 = 0x70
	BRControl *_blurControl;	// 116 = 0x74
}
@property(retain, nonatomic) BRControl *blurControl;	// G=0x4a5fa1; S=0x4a5fb1; @synthesize=_blurControl
@property(retain, nonatomic) BRControl *centerBadge;	// G=0x4a5ebd; S=0x4a5795; @synthesize=_centerBadge
@property(retain, nonatomic) BRControl *centerBadgeContainer;	// G=0x4a5f69; S=0x4a5f79; @synthesize=_centerBadgeContainer
@property(retain, nonatomic) BRControl *imageControl;	// G=0x4a5e9d; S=0x4a5831; @synthesize=_imageControl
@property(retain, nonatomic) BRControl *leftShadow;	// G=0x4a5ef9; S=0x4a5f09; @synthesize=_leftShadow
@property(retain, nonatomic) BRControl *playerView;	// G=0x4a5ead; S=0x4a56c9; @synthesize=_playerView
@property(retain, nonatomic) BRControl *rightShadow;	// G=0x4a5f31; S=0x4a5f41; @synthesize=_rightShadow
@property(assign, nonatomic) XXStruct_qlg9jA shadowWidth;	// G=0x4a5edd; S=0x4a59c9; @synthesize=_shadowWidth
@property(retain, nonatomic) BRControl *transportView;	// G=0x4a5ecd; S=0x4a593d; @synthesize=_transportView
- (id)init;	// 0x4a5609
- (void).cxx_destruct;	// 0x4a5fd9
// declared property getter: - (id)blurControl;	// 0x4a5fa1
// declared property getter: - (id)centerBadge;	// 0x4a5ebd
// declared property getter: - (id)centerBadgeContainer;	// 0x4a5f69
// declared property getter: - (id)imageControl;	// 0x4a5e9d
- (void)layoutSubcontrols;	// 0x4a5b85
// declared property getter: - (id)leftShadow;	// 0x4a5ef9
- (id)photoCarouselUIDelegateCenterBadge;	// 0x4a345d
- (id)photoCarouselUIDelegateLeftShadow;	// 0x4a346d
- (id)photoCarouselUIDelegateRightShadow;	// 0x4a347d
// declared property getter: - (id)playerView;	// 0x4a5ead
// declared property getter: - (id)rightShadow;	// 0x4a5f31
// declared property setter: - (void)setBlurControl:(id)control;	// 0x4a5fb1
// declared property setter: - (void)setCenterBadge:(id)badge;	// 0x4a5795
// declared property setter: - (void)setCenterBadgeContainer:(id)container;	// 0x4a5f79
// declared property setter: - (void)setImageControl:(id)control;	// 0x4a5831
// declared property setter: - (void)setLeftShadow:(id)shadow;	// 0x4a5f09
// declared property setter: - (void)setPlayerView:(id)view;	// 0x4a56c9
// declared property setter: - (void)setRightShadow:(id)shadow;	// 0x4a5f41
// declared property setter: - (void)setShadowWidth:(XXStruct_qlg9jA)width;	// 0x4a59c9
// declared property setter: - (void)setTransportView:(id)view;	// 0x4a593d
// declared property getter: - (XXStruct_qlg9jA)shadowWidth;	// 0x4a5edd
// declared property getter: - (id)transportView;	// 0x4a5ecd
@end
