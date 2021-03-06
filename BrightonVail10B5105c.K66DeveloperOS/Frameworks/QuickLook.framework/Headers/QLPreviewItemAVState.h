/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library


@interface QLPreviewItemAVState : NSObject {
	double position;	// 4 = 0x4
	double duration;	// 12 = 0xc
	BOOL playing;	// 20 = 0x14
}
@property(assign) double duration;	// G=0x33b34681; S=0x33b346b5; @synthesize
@property(assign, getter=isPlaying) BOOL playing;	// G=0x33b346e9; S=0x33b34701; @synthesize
@property(assign) double position;	// G=0x33b34619; S=0x33b3464d; @synthesize
+ (id)avStateWithPosition:(double)position duration:(double)duration playing:(BOOL)playing;	// 0x33b34375
- (id)initWithCoder:(id)coder;	// 0x33b3449d
- (id)description;	// 0x33b34561
// declared property getter: - (double)duration;	// 0x33b34681
- (void)encodeWithCoder:(id)coder;	// 0x33b34401
// declared property getter: - (BOOL)isPlaying;	// 0x33b346e9
// declared property getter: - (double)position;	// 0x33b34619
// declared property setter: - (void)setDuration:(double)duration;	// 0x33b346b5
// declared property setter: - (void)setPlaying:(BOOL)playing;	// 0x33b34701
// declared property setter: - (void)setPosition:(double)position;	// 0x33b3464d
@end

