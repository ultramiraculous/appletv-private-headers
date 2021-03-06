/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {
	MPQueueFeeder *_feeder;	// 4 = 0x4
	unsigned _currentItemIndex;	// 8 = 0x8
	double _currentTime;	// 12 = 0xc
	int _feederMode;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x30979835; S=0x30979845; @synthesize=_currentItemIndex
@property(assign, nonatomic) double currentTime;	// G=0x30979855; S=0x3097986d; @synthesize=_currentTime
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x30979801; S=0x30979811; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x30979881; S=0x30979891; @synthesize=_feederMode
- (id)initWithStateOfAVController:(id)avcontroller;	// 0x30979621
// declared property getter: - (unsigned)currentItemIndex;	// 0x30979835
// declared property getter: - (double)currentTime;	// 0x30979855
- (void)dealloc;	// 0x30979701
- (id)description;	// 0x3097974d
// declared property getter: - (id)feeder;	// 0x30979801
// declared property getter: - (int)feederMode;	// 0x30979881
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x30979845
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x3097986d
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x30979811
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x30979891
@end

