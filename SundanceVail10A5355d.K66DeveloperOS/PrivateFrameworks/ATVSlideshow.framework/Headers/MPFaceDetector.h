/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSOperationQueue, NSMutableSet, NSTimer, MPDocument;
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
	NSLock *mStartStopLock;	// 36 = 0x24
	NSTimer *mCheckTimer;	// 40 = 0x28
}
@property(retain, nonatomic) MPDocument *document;	// G=0x321e898d; S=0x321e899d; @synthesize=mDocument
@property(retain, nonatomic) NSObject<MRMarimbaPlayback> *renderer;	// G=0x321e89ad; S=0x321e89bd; @synthesize=mRenderer
- (id)init;	// 0x321e7b89
- (void)_addPathToQueue:(id)queue;	// 0x321e7e99
- (void)_checkPlayingSlides;	// 0x321e85a9
- (BOOL)_pathIsInQueue:(id)queue;	// 0x321e7f51
- (void)_removePathToQueue:(id)queue;	// 0x321e7ef5
- (void)_setupTimer;	// 0x321e8531
- (void)_start;	// 0x321e7fb1
- (void)checkPlayingSlides;	// 0x321e8609
- (void)dealloc;	// 0x321e7d19
- (void)detectFaces:(id)faces;	// 0x321e82e5
// declared property getter: - (id)document;	// 0x321e898d
// declared property getter: - (id)renderer;	// 0x321e89ad
- (void)resume;	// 0x321e82a1
// declared property setter: - (void)setDocument:(id)document;	// 0x321e899d
// declared property setter: - (void)setRenderer:(id)renderer;	// 0x321e89bd
- (void)start;	// 0x321e7e49
- (void)stop;	// 0x321e88d1
- (void)suspend;	// 0x321e8281
- (BOOL)suspended;	// 0x321e82c1
@end
