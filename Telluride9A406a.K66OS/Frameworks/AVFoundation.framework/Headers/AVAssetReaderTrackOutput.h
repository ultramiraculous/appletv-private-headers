/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAssetTrack, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
@private
	AVAssetReaderTrackOutputInternal *_trackOutputInternal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x30e8ce69; 
@property(readonly, assign, nonatomic) AVAssetTrack *track;	// G=0x30e8c921; 
+ (id)assetReaderTrackOutputWithTrack:(id)track outputSettings:(id)settings;	// 0x30e8cfc9
- (id)init;	// 0x30e8ce55
- (id)initWithTrack:(id)track outputSettings:(id)settings;	// 0x30e8d581
- (id)_asset;	// 0x30e8cebd
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x30e8d019
- (id)_figAssetReaderExtractionOptions;	// 0x30e8cf45
- (BOOL)_trimsSampleDurations;	// 0x30e8cee5
- (void)dealloc;	// 0x30e8d4f9
- (id)description;	// 0x30e8d431
- (void)finalize;	// 0x30e8d4b5
- (id)mediaType;	// 0x30e8ce95
// declared property getter: - (id)outputSettings;	// 0x30e8ce69
// declared property getter: - (id)track;	// 0x30e8c921
@end

