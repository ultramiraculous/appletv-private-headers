/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {
@private
	AVAssetReaderOutputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL alwaysCopiesSampleData;	// G=0x346b2855; S=0x346b4255; 
@property(assign, nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;	// G=0x346b28b5; S=0x346b28d5; 
@property(readonly, assign, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;	// G=0x346b2c31; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x346b42e1; 
@property(readonly, assign, getter=_status) int status;	// G=0x346b2bf1; 
@property(readonly, assign, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;	// G=0x346b28f5; 
@property(readonly, assign, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;	// G=0x346b2895; 
+ (void)initialize;	// 0x346b3d05
- (id)init;	// 0x346b3bc5
- (id)_asset;	// 0x346b4221
- (void)_attachToWeakReferenceToAssetReader:(id)assetReader;	// 0x346b2ac9
- (void)_cancelReading;	// 0x346b2cf9
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x346b3f85
// declared property getter: - (int)_extractionID;	// 0x346b28b5
- (OpaqueFigAssetReader *)_figAssetReader;	// 0x346b2875
- (void)_figAssetReaderDecodeError;	// 0x346b2d85
// declared property getter: - (id)_figAssetReaderExtractionOptions;	// 0x346b2c31
- (void)_figAssetReaderFailed;	// 0x346b2ded
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)_figAssetReaderSampleBuffer;	// 0x346b2d0d
- (BOOL)_isFinished;	// 0x346b28f9
- (void)_markAsFinished;	// 0x346b3f29
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x346b2ce1
// declared property setter: - (void)_setExtractionID:(int)anId;	// 0x346b28d5
- (void)_setFigAssetReader:(OpaqueFigAssetReader *)reader;	// 0x346b3fb9
// declared property getter: - (int)_status;	// 0x346b2bf1
// declared property getter: - (BOOL)_trimsSampleDurations;	// 0x346b28f5
// declared property getter: - (id)_weakReferenceToAssetReader;	// 0x346b2895
// declared property getter: - (BOOL)alwaysCopiesSampleData;	// 0x346b2855
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;	// 0x346b3d31
- (void)dealloc;	// 0x346b4471
- (void)finalize;	// 0x346b4315
// declared property getter: - (id)mediaType;	// 0x346b42e1
// declared property setter: - (void)setAlwaysCopiesSampleData:(BOOL)data;	// 0x346b4255
@end
