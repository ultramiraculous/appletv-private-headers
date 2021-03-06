/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
	short _alternateGroupID;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x302d6e89
- (id)initWithURL:(id)url fileType:(id)type;	// 0x302d7059
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;	// 0x302d7271
- (BOOL)_canAddInputGroup:(id)group exceptionReason:(id *)reason;	// 0x302d7451
- (void)addInput:(id)input;	// 0x302d7325
- (void)addInputGroup:(id)group;	// 0x302d76c1
- (BOOL)canAddInput:(id)input;	// 0x302d730d
- (BOOL)canAddInputGroup:(id)group;	// 0x302d76a9
- (void)cancelWriting;	// 0x302d7989
- (void)setMetadata:(id)metadata;	// 0x302d7219
- (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x302d71a5
- (void)setMovieTimeScale:(int)scale;	// 0x302d7245
- (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x302d71ed
- (void)startWriting;	// 0x302d78cd
- (int)status;	// 0x302d71a1
@end

