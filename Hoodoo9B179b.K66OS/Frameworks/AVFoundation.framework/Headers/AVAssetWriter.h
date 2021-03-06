/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInternal, NSError, NSArray, AVAssetWriterHelper, NSString, NSURL;

@interface AVAssetWriter : NSObject {
@private
	AVAssetWriterInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x30ad644d; 
@property(readonly, assign) NSError *error;	// G=0x30ad64ed; 
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;	// G=0x30ad60d5; S=0x30ad62a1; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x30ad6735; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x30ad688d; S=0x30ad68b5; 
@property(assign) XXStruct_pwHToB movieFragmentInterval;	// G=0x30ad6515; S=0x30ad6555; converted property
@property(assign) int movieTimeScale;	// G=0x30ad6689; S=0x30ad66b1; converted property
@property(readonly, assign, nonatomic) NSString *outputFileType;	// G=0x30ad6415; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x30ad63ed; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x30ad6635; S=0x30ad665d; 
@property(readonly, assign) int status;	// G=0x30ad649d; 
+ (id)assetWriterWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x30ad5b71
+ (void)initialize;	// 0x30ad5b45
+ (id)keyPathsForValuesAffectingError;	// 0x30ad64c5
+ (id)keyPathsForValuesAffectingStatus;	// 0x30ad6475
- (id)init;	// 0x30ad5bc9
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x30ad5bed
// declared property getter: - (id)_helper;	// 0x30ad60d5
// declared property setter: - (void)_setHelper:(id)helper;	// 0x30ad62a1
- (void)_transitionToFailedStatusWithError:(id)error;	// 0x30ad6af1
- (void)addInput:(id)input;	// 0x30ad680d
// declared property getter: - (id)availableMediaTypes;	// 0x30ad644d
- (BOOL)canAddInput:(id)input;	// 0x30ad678d
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x30ad675d
- (void)cancelWriting;	// 0x30ad6a81
- (void)dealloc;	// 0x30ad5f49
- (id)description;	// 0x30ad6051
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad69d5
// declared property getter: - (id)error;	// 0x30ad64ed
- (void)finalize;	// 0x30ad5ff5
- (BOOL)finishWriting;	// 0x30ad6aa9
// declared property getter: - (id)inputs;	// 0x30ad6735
// declared property getter: - (id)metadata;	// 0x30ad688d
// converted property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x30ad6515
// converted property getter: - (int)movieTimeScale;	// 0x30ad6689
// declared property getter: - (id)outputFileType;	// 0x30ad6415
// declared property getter: - (id)outputURL;	// 0x30ad63ed
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30ad68b5
// converted property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x30ad6555
// converted property setter: - (void)setMovieTimeScale:(int)scale;	// 0x30ad66b1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x30ad665d
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x30ad6635
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad6929
- (BOOL)startWriting;	// 0x30ad68e1
// declared property getter: - (int)status;	// 0x30ad649d
@end

