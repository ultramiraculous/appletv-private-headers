/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCAction, NSMutableDictionary;

@interface MRAction : NSObject {
	MCAction *mMCAction;	// 4 = 0x4
	id mSender;	// 8 = 0x8
	NSMutableDictionary *mStates;	// 12 = 0xc
	double mTime;	// 16 = 0x10
}
@property(readonly, assign) MCAction *action;	// G=0x3438809d; @synthesize=mMCAction
@property(retain) id sender;	// G=0x343880ad; S=0x343880c1; @synthesize=mSender
@property(retain) NSMutableDictionary *states;	// G=0x343880e5; S=0x343880f9; @synthesize=mStates
@property(assign) double time;	// G=0x3438811d; S=0x34388151; @synthesize=mTime
- (id)initWithAction:(id)action;	// 0x34387fb5
// declared property getter: - (id)action;	// 0x3438809d
- (void)dealloc;	// 0x34388009
// declared property getter: - (id)sender;	// 0x343880ad
// declared property setter: - (void)setSender:(id)sender;	// 0x343880c1
// declared property setter: - (void)setStates:(id)states;	// 0x343880f9
// declared property setter: - (void)setTime:(double)time;	// 0x34388151
// declared property getter: - (id)states;	// 0x343880e5
// declared property getter: - (double)time;	// 0x3438811d
@end

