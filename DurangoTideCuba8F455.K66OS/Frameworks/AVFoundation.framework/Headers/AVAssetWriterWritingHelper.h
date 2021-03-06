/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterHelper.h"

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper {
@private
	AVWeakReference *_weakReference;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	BOOL _startSessionCalled;	// 20 = 0x14
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3258e21d
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x32590dad
- (void)_handleFailedNotificationWithError:(id)error;	// 0x3258e209
- (void)_handleServerDiedNotification;	// 0x325907c5
- (void)cancelWriting;	// 0x32590929
- (void)dealloc;	// 0x325902a5
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x32590611
- (void)finalize;	// 0x325901c1
- (void)finishWriting;	// 0x325912f9
- (void)release;	// 0x3258ea79
- (id)retain;	// 0x3258eac1
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x325906d9
- (int)status;	// 0x3258e031
@end

