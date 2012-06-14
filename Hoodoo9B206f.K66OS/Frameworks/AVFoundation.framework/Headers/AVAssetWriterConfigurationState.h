/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVMediaFileType, NSURL;

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
@property(copy, nonatomic) NSURL *URL;	// G=0x326af9cd; S=0x326af9dd; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputs;	// G=0x326afb11; S=0x326afb21; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x326afa01; S=0x326afa11; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x326afabd; S=0x326afacd; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x326afa35; S=0x326afa69; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x326afaf1; S=0x326afb01; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x326afa9d; S=0x326afaad; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x326af9cd
- (void)dealloc;	// 0x326af945
// declared property getter: - (id)inputs;	// 0x326afb11
// declared property getter: - (id)mediaFileType;	// 0x326afa01
// declared property getter: - (id)metadataItems;	// 0x326afabd
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x326afa35
// declared property getter: - (int)movieTimeScale;	// 0x326afaf1
// declared property setter: - (void)setInputs:(id)inputs;	// 0x326afb21
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x326afa11
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x326afacd
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x326afa69
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x326afb01
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x326afaad
// declared property setter: - (void)setURL:(id)url;	// 0x326af9dd
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x326afa9d
@end
