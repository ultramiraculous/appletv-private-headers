/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSTimer, NSLock, MPDocument, NSOperationQueue;
@protocol MRMarimbaPlayback;

@interface MPFaceDetector : NSObject {
	MPDocument *mDocument;	// 4 = 0x4
	NSObject<MRMarimbaPlayback> *mRenderer;	// 8 = 0x8
	NSOperationQueue *mDetectionQueue;	// 12 = 0xc
	BOOL mIsCancelled;	// 16 = 0x10
	NSMutableSet *mPathsInQueue;	// 20 = 0x14
	NSLock *mPathQueueLock;	// 24 = 0x18
	NSMutableSet *mPlayingSlides;	// 28 = 0x1c
	NSLock *mPlayingSlidesLock;	// 32 = 0x20
	NSTimer *mCheckTimer;	// 36 = 0x24
}
@property(retain, nonatomic) MPDocument *document;	// G=0x336244cd; S=0x336244dd; @synthesize=mDocument
@property(retain, nonatomic) NSObject<MRMarimbaPlayback> *renderer;	// G=0x33624501; S=0x33624511; @synthesize=mRenderer
- (id)init;	// 0x33623701
- (void)_addPathToQueue:(id)queue;	// 0x336239a9
- (void)_checkPlayingSlides;	// 0x33624191
- (BOOL)_pathIsInQueue:(id)queue;	// 0x33623a69
- (void)_removePathToQueue:(id)queue;	// 0x33623a09
- (void)_setupTimer;	// 0x33624119
- (void)_start;	// 0x33623ac9
- (void)checkPlayingSlides;	// 0x336241ed
- (void)dealloc;	// 0x33623831
- (void)detectFaces:(id)faces;	// 0x33623e29
// declared property getter: - (id)document;	// 0x336244cd
// declared property getter: - (id)renderer;	// 0x33624501
- (void)resume;	// 0x33623e09
// declared property setter: - (void)setDocument:(id)document;	// 0x336244dd
// declared property setter: - (void)setRenderer:(id)renderer;	// 0x33624511
- (void)start;	// 0x33623959
- (void)stop;	// 0x3362443d
- (void)suspend;	// 0x33623de9
@end

