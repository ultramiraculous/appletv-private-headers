/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
}
+ (void)initialize;	// 0x36071b7d
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x36071bf9
+ (id)sharedManager;	// 0x36071be9
- (id)initWithPaths:(id)paths;	// 0x36071c55
- (void)cleanup;	// 0x36071ed5
- (void)dealloc;	// 0x36071e95
@end

