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
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x35b7e2f9; S=0x35b7e309; @synthesize=_currentItemIndex
@property(assign, nonatomic) double currentTime;	// G=0x35b7e319; S=0x35b7e331; @synthesize=_currentTime
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x35b7e2c5; S=0x35b7e2d5; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x35b7e345; S=0x35b7e355; @synthesize=_feederMode
- (id)initWithStateOfAVController:(id)avcontroller;	// 0x35b7e0e5
// declared property getter: - (unsigned)currentItemIndex;	// 0x35b7e2f9
// declared property getter: - (double)currentTime;	// 0x35b7e319
- (void)dealloc;	// 0x35b7e1c5
- (id)description;	// 0x35b7e211
// declared property getter: - (id)feeder;	// 0x35b7e2c5
// declared property getter: - (int)feederMode;	// 0x35b7e345
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x35b7e309
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x35b7e331
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x35b7e2d5
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x35b7e355
@end

