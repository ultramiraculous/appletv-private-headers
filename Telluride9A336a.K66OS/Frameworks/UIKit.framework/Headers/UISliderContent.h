/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface UISliderContent : NSObject {
@private
	UIImage *thumb;	// 4 = 0x4
	UIImage *minTrack;	// 8 = 0x8
	UIImage *maxTrack;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x352c2345; @dynamic
@property(retain, nonatomic) UIImage *maxTrack;	// G=0x3521fa15; S=0x3521f39d; @synthesize
@property(retain, nonatomic) UIImage *minTrack;	// G=0x3521fa05; S=0x3521f231; @synthesize
@property(retain, nonatomic) UIImage *thumb;	// G=0x3521fa25; S=0x3521f0c5; @synthesize
- (void)dealloc;	// 0x352222e1
// declared property getter: - (BOOL)isEmpty;	// 0x352c2345
// declared property getter: - (id)maxTrack;	// 0x3521fa15
// declared property getter: - (id)minTrack;	// 0x3521fa05
// declared property setter: - (void)setMaxTrack:(id)track;	// 0x3521f39d
// declared property setter: - (void)setMinTrack:(id)track;	// 0x3521f231
// declared property setter: - (void)setThumb:(id)thumb;	// 0x3521f0c5
// declared property getter: - (id)thumb;	// 0x3521fa25
@end

