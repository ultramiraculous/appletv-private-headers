/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVAssetReaderOutputInternal, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {
@private
	AVAssetReaderOutputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL alwaysCopiesSampleData;	// G=0x35e2e5d1; S=0x35e2e5f1; 
@property(assign, nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;	// G=0x35e2ea71; S=0x35e2ea91; 
@property(readonly, assign, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;	// G=0x35e2eab1; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x35e2e59d; 
@property(readonly, assign, getter=_status) int status;	// G=0x35e2ea31; 
@property(readonly, assign, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;	// G=0x35e2eb61; 
@property(readonly, assign, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;	// G=0x35e2e909; 
+ (void)initialize;	// 0x35e2e015
- (id)init;	// 0x35e2e041
- (id)_asset;	// 0x35e2e67d
- (void)_attachToWeakReferenceToAssetReader:(id)assetReader;	// 0x35e2e929
- (void)_cancelReading;	// 0x35e2ec35
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x35e2eb7d
// declared property getter: - (int)_extractionID;	// 0x35e2ea71
- (OpaqueFigAssetReader *)_figAssetReader;	// 0x35e2e6b1
- (void)_figAssetReaderDecodeError;	// 0x35e2eeb5
// declared property getter: - (id)_figAssetReaderExtractionOptions;	// 0x35e2eab1
- (void)_figAssetReaderFailed;	// 0x35e2ef1d
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)_figAssetReaderSampleBuffer;	// 0x35e2ee3d
- (BOOL)_isFinished;	// 0x35e2ebb1
- (void)_markAsFinished;	// 0x35e2ebd9
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x35e2eb65
// declared property setter: - (void)_setExtractionID:(int)anId;	// 0x35e2ea91
- (void)_setFigAssetReader:(OpaqueFigAssetReader *)reader;	// 0x35e2e6d1
// declared property getter: - (int)_status;	// 0x35e2ea31
// declared property getter: - (BOOL)_trimsSampleDurations;	// 0x35e2eb61
// declared property getter: - (id)_weakReferenceToAssetReader;	// 0x35e2e909
// declared property getter: - (BOOL)alwaysCopiesSampleData;	// 0x35e2e5d1
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;	// 0x35e2ec49
- (void)dealloc;	// 0x35e2e171
- (void)finalize;	// 0x35e2e435
// declared property getter: - (id)mediaType;	// 0x35e2e59d
// declared property setter: - (void)setAlwaysCopiesSampleData:(BOOL)data;	// 0x35e2e5f1
@end

