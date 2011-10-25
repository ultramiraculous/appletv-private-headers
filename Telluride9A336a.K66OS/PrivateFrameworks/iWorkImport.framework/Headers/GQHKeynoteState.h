/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


__attribute__((visibility("hidden")))
@interface GQHKeynoteState : GQHState {
@private
	int mCurrentSlide;	// 108 = 0x6c
	CGSize mSlideSize;	// 112 = 0x70
	int mProgressiveIndex;	// 120 = 0x78
}
@property(assign) int progressiveIndex;	// G=0x304a562d; S=0x304a563d; converted property
@property(assign) CGSize slideSize;	// G=0x304a55f5; S=0x304a560d; converted property
- (int)currentSlide;	// 0x304a55e5
- (void)incrementCurrentSlide;	// 0x304a55d1
// converted property getter: - (int)progressiveIndex;	// 0x304a562d
// converted property setter: - (void)setProgressiveIndex:(int)index;	// 0x304a563d
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x304a560d
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x304a5621
- (BOOL)shouldStreamContent;	// 0x304a564d
// converted property getter: - (CGSize)slideSize;	// 0x304a55f5
@end

