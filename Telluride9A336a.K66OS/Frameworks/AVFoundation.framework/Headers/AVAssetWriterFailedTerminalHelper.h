/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterTerminalHelper.h"

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	NSError *_terminalError;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x314689b1
- (id)initWithConfigurationState:(id)configurationState terminalError:(id)error;	// 0x31468b85
- (void)dealloc;	// 0x31468b39
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x314673a5
- (id)error;	// 0x31467391
- (void)finishWriting;	// 0x314673a9
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x314673a1
- (int)status;	// 0x3146738d
@end

