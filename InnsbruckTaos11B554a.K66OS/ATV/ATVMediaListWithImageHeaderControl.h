/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaListControl.h"

@class ATVImageHeaderView;

__attribute__((visibility("hidden")))
@interface ATVMediaListWithImageHeaderControl : BRMediaListControl {
	ATVImageHeaderView *_imageHeaderView;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) ATVImageHeaderView *imageHeaderView;	// G=0x461ca1; @synthesize=_imageHeaderView
+ (BOOL)_wantsHeader;	// 0x461c9d
- (id)init;	// 0x46192d
- (void).cxx_destruct;	// 0x461cb1
// declared property getter: - (id)imageHeaderView;	// 0x461ca1
- (void)layoutSubcontrols;	// 0x4619e9
@end

