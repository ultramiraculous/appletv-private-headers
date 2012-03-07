/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetInspectorLoader, NSArray, NSURL, NSString;
@protocol AVURLAssetFailedURLRequestHandling;

@interface AVURLAssetInternal : NSObject {
	AVAssetInspectorLoader *loader;	// 4 = 0x4
	NSURL *URL;	// 8 = 0x8
	NSArray *tracks;	// 12 = 0xc
	NSArray *chapterGroupInfo;	// 16 = 0x10
	NSString *anchorChapterType;	// 20 = 0x14
	id<AVURLAssetFailedURLRequestHandling> failedURLRequestDelegate;	// 24 = 0x18
}
@end

