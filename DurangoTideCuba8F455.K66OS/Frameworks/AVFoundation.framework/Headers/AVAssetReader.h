/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAsset, NSError, NSArray, AVAssetReaderInternal;

@interface AVAssetReader : NSObject {
@private
	AVAssetReaderInternal *_priv;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVAsset *asset;	// G=0x32589469; 
@property(readonly, assign) NSError *error;	// G=0x3258a409; 
@property(readonly, assign, nonatomic, getter=_figAssetReader) OpaqueFigAssetReader *figAssetReader;	// G=0x325894d1; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x325895a9; 
@property(readonly, assign) int status;	// G=0x3258a545; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x325894a9; S=0x325899c1; 
+ (id)assetReaderWithAsset:(id)asset error:(id *)error;	// 0x325896b9
+ (void)initialize;	// 0x3258aaed
- (id)init;	// 0x325896a1
- (id)initWithAsset:(id)asset error:(id *)error;	// 0x32589af5
- (BOOL)_canAddOutput:(id)output exceptionReason:(id *)reason;	// 0x325894ed
// declared property getter: - (OpaqueFigAssetReader *)_figAssetReader;	// 0x325894d1
- (void)_handleServerDiedNotification;	// 0x3258aab9
- (void)_transitionToStatus:(int)status failureError:(id)error;	// 0x3258a6a9
- (void)addOutput:(id)output;	// 0x32589801
// declared property getter: - (id)asset;	// 0x32589469
- (BOOL)canAddOutput:(id)output;	// 0x3258994d
- (void)cancelReading;	// 0x3258a98d
- (void)dealloc;	// 0x3258a161
- (id)description;	// 0x32589a75
// declared property getter: - (id)error;	// 0x3258a409
- (void)finalize;	// 0x3258a049
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32589f45
// declared property getter: - (id)outputs;	// 0x325895a9
- (void)release;	// 0x32589751
- (id)retain;	// 0x325897a9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x325899c1
- (BOOL)startReading;	// 0x3258a765
// declared property getter: - (int)status;	// 0x3258a545
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x325894a9
@end
