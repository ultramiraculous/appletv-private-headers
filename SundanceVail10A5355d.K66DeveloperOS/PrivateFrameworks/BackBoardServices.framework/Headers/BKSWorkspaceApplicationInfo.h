/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSApplicationProcessInfo;

@interface BKSWorkspaceApplicationInfo : NSObject {
	BKSApplicationProcessInfo *_info;	// 4 = 0x4
	BOOL _recordingAudio;	// 8 = 0x8
	BOOL _externalAccessory;	// 9 = 0x9
}
@property(retain, nonatomic) BKSApplicationProcessInfo *info;	// G=0x340d5cc5; S=0x340d5cd5; @synthesize=_info
@property(assign, nonatomic) BOOL recordingAudio;	// G=0x340d5ce5; S=0x340d5cf5; @synthesize=_recordingAudio
@property(assign, nonatomic) BOOL usingExternalAccessory;	// G=0x340d5d05; S=0x340d5d15; @synthesize=_externalAccessory
- (void)dealloc;	// 0x340d5be1
- (id)description;	// 0x340d5c2d
// declared property getter: - (id)info;	// 0x340d5cc5
// declared property getter: - (BOOL)recordingAudio;	// 0x340d5ce5
// declared property setter: - (void)setInfo:(id)info;	// 0x340d5cd5
// declared property setter: - (void)setRecordingAudio:(BOOL)audio;	// 0x340d5cf5
// declared property setter: - (void)setUsingExternalAccessory:(BOOL)accessory;	// 0x340d5d15
// declared property getter: - (BOOL)usingExternalAccessory;	// 0x340d5d05
@end
