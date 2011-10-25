/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x31469bb1
- (id)initWithURL:(id)url fileType:(id)type;	// 0x3146785d
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;	// 0x31467b55
- (void)addInput:(id)input;	// 0x31469db1
- (BOOL)canAddInput:(id)input;	// 0x31467bbd
- (void)cancelWriting;	// 0x31468941
- (void)setMetadata:(id)metadata;	// 0x31467afd
- (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x31467aa1
- (void)setMovieTimeScale:(int)scale;	// 0x31467b29
- (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x31467ad1
- (void)startWriting;	// 0x31467bd5
- (int)status;	// 0x31467381
@end

