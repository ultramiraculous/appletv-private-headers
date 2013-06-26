/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVAssetReaderOutputInternal, NSDictionary, AVWeakReference;

@interface AVAssetReaderOutput : NSObject {
	AVAssetReaderOutputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL alwaysCopiesSampleData;	// G=0x2c2902c5; S=0x2c2902e5; 
@property(assign, nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;	// G=0x2c290751; S=0x2c290771; 
@property(readonly, assign, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;	// G=0x2c290791; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x2c290291; 
@property(readonly, assign, getter=_status) int status;	// G=0x2c290711; 
@property(readonly, assign, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;	// G=0x2c29083d; 
@property(readonly, assign, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;	// G=0x2c2905f1; 
+ (void)initialize;	// 0x2c28fc51
- (id)init;	// 0x2c28fca1
- (id)_asset;	// 0x2c290371
- (void)_attachToWeakReferenceToAssetReader:(id)assetReader;	// 0x2c290611
- (void)_cancelReading;	// 0x2c290911
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x2c290859
// declared property getter: - (int)_extractionID;	// 0x2c290751
- (OpaqueFigAssetReader *)_figAssetReader;	// 0x2c2903a5
- (void)_figAssetReaderDecodeError;	// 0x2c290bfd
// declared property getter: - (id)_figAssetReaderExtractionOptions;	// 0x2c290791
- (void)_figAssetReaderFailed;	// 0x2c290c5d
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)_figAssetReaderSampleBuffer;	// 0x2c290b89
- (BOOL)_isFinished;	// 0x2c29088d
- (void)_markAsFinished;	// 0x2c2908b5
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x2c290841
// declared property setter: - (void)_setExtractionID:(int)anId;	// 0x2c290771
- (void)_setFigAssetReader:(OpaqueFigAssetReader *)reader;	// 0x2c2903c5
// declared property getter: - (int)_status;	// 0x2c290711
// declared property getter: - (BOOL)_trimsSampleDurations;	// 0x2c29083d
// declared property getter: - (id)_weakReferenceToAssetReader;	// 0x2c2905f1
// declared property getter: - (BOOL)alwaysCopiesSampleData;	// 0x2c2902c5
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;	// 0x2c290925
- (void)dealloc;	// 0x2c28fdd1
- (void)finalize;	// 0x2c290141
// declared property getter: - (id)mediaType;	// 0x2c290291
// declared property setter: - (void)setAlwaysCopiesSampleData:(BOOL)data;	// 0x2c2902e5
@end
