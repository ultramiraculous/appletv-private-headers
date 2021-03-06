/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, NSArray, AVMediaFileType;

@interface AVAssetWriterConfigurationState : NSObject {
@private
	NSURL *_URL;	// 4 = 0x4
	AVMediaFileType *_mediaFileType;	// 8 = 0x8
	XXStruct_pwHToB _movieFragmentInterval;	// 12 = 0xc
	BOOL _shouldOptimizeForNetworkUse;	// 36 = 0x24
	NSArray *_metadataItems;	// 40 = 0x28
	int _movieTimeScale;	// 44 = 0x2c
	NSArray *_inputs;	// 48 = 0x30
}
@property(copy, nonatomic) NSURL *URL;	// G=0x3545b371; S=0x3545b989; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputs;	// G=0x3545b2a5; S=0x3545b9f5; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3545b361; S=0x3545b9ad; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x3545b2d5; S=0x3545b9d1; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x3545b305; S=0x3545b335; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x3545b2b5; S=0x3545b2c5; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3545b2e5; S=0x3545b2f5; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x3545b371
- (void)dealloc;	// 0x3545ba19
// declared property getter: - (id)inputs;	// 0x3545b2a5
// declared property getter: - (id)mediaFileType;	// 0x3545b361
// declared property getter: - (id)metadataItems;	// 0x3545b2d5
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x3545b305
// declared property getter: - (int)movieTimeScale;	// 0x3545b2b5
// declared property setter: - (void)setInputs:(id)inputs;	// 0x3545b9f5
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x3545b9ad
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x3545b9d1
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3545b335
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x3545b2c5
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3545b2f5
// declared property setter: - (void)setURL:(id)url;	// 0x3545b989
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3545b2e5
@end

