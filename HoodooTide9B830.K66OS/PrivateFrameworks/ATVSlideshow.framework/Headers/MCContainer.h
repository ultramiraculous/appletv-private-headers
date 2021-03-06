/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSDictionary, MCAudioPlaylist, MCPlug;

@interface MCContainer : MCObject {
	MCAudioPlaylist *mAudioPlaylist;	// 12 = 0xc
	MCPlug *mReferencingPlug;	// 16 = 0x10
	NSDictionary *mInitialState;	// 20 = 0x14
	unsigned short mFlags;	// 24 = 0x18
	unsigned short mSpecialRetainCount;	// 26 = 0x1a
}
@property(readonly, assign) MCAudioPlaylist *audioPlaylist;	// G=0x3217ebb9; @synthesize=mAudioPlaylist
@property(readonly, assign) MCAudioPlaylist *audioPlaylistCreateIfNeeded;	// G=0x3217e879; 
@property(retain) NSDictionary *initialState;	// G=0x3217ebc9; S=0x3217ebdd; @synthesize=mInitialState
@property(readonly, assign) MCPlug *referencingPlug;	// G=0x3217ec01; @synthesize=mReferencingPlug
- (id)init;	// 0x3217e5d9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3217e605
// declared property getter: - (id)audioPlaylist;	// 0x3217ebb9
// declared property getter: - (id)audioPlaylistCreateIfNeeded;	// 0x3217e879
- (void)demolish;	// 0x3217e711
- (id)imprint;	// 0x3217e7e5
// declared property getter: - (id)initialState;	// 0x3217ebc9
- (void)referenceByPlug:(id)plug;	// 0x3217e9e1
// declared property getter: - (id)referencingPlug;	// 0x3217ec01
// declared property setter: - (void)setInitialState:(id)state;	// 0x3217ebdd
- (void)specialRelease;	// 0x3217eb3d
- (id)specialRetain;	// 0x3217ea7d
- (void)unreferenceByPlug:(id)plug;	// 0x3217ea09
@end

