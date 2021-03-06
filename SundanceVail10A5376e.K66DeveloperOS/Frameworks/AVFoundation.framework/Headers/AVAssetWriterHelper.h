/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, NSError, AVWeakReference, NSURL, NSArray, AVAssetWriterConfigurationState;

@interface AVAssetWriterHelper : NSObject {
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x368bc685; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x368bd551; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x368bc6f1; 
@property(readonly, assign, nonatomic) NSArray *inputGroups;	// G=0x368bca09; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x368bc9e1; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x368bc65d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x368bc92d; S=0x368bc955; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x368bc6f5; S=0x368bc739; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x368bc879; S=0x368bc8a1; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x368bc635; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x368bc7c5; S=0x368bc7ed; 
@property(readonly, assign, nonatomic) int status;	// G=0x368bc6bd; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x368bd561; S=0x368bd575; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x368bc4d9
- (id)initWithConfigurationState:(id)configurationState;	// 0x368bc4ed
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x368bca31
- (BOOL)_canApplyTrackReferences:(id)references exceptionReason:(id *)reason;	// 0x368bcca9
- (BOOL)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x368bd1bd
- (void)addInput:(id)input;	// 0x368bcde1
- (void)addInputGroup:(id)group;	// 0x368bce71
// declared property getter: - (id)availableMediaTypes;	// 0x368bc685
- (BOOL)canAddInput:(id)input;	// 0x368bcddd
- (BOOL)canAddInputGroup:(id)group;	// 0x368bce6d
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x368bcc45
- (void)cancelWriting;	// 0x368bd0a1
// declared property getter: - (id)configurationState;	// 0x368bd551
- (void)dealloc;	// 0x368bc5d1
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x368bd015
// declared property getter: - (id)error;	// 0x368bc6f1
- (void)finishWriting;	// 0x368bd0a5
- (void)finishWritingWithCompletionHandler:(id)completionHandler;	// 0x368bd131
// declared property getter: - (id)inputGroups;	// 0x368bca09
// declared property getter: - (id)inputs;	// 0x368bc9e1
// declared property getter: - (id)mediaFileType;	// 0x368bc65d
// declared property getter: - (id)metadata;	// 0x368bc92d
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x368bc6f5
// declared property getter: - (int)movieTimeScale;	// 0x368bc879
// declared property getter: - (id)outputURL;	// 0x368bc635
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x368bc955
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x368bc739
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x368bc8a1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x368bc7ed
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x368bd575
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x368bc7c5
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x368bcf89
- (void)startWriting;	// 0x368bcefd
// declared property getter: - (int)status;	// 0x368bc6bd
- (void)transitionToFailedStatusWithError:(id)error;	// 0x368bd389
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x368bd561
@end

