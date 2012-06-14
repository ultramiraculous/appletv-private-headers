/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
	NSMutableDictionary *mFrameRepository;	// 4 = 0x4
	NSMutableDictionary *mFrameSets;	// 8 = 0x8
	NSMutableDictionary *mFramePools;	// 12 = 0xc
}
+ (void)initialize;	// 0x32119271
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x321192ed
+ (id)sharedManager;	// 0x321192dd
- (id)initWithPaths:(id)paths;	// 0x32119349
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x3211a0e1
- (void)cleanup;	// 0x32119985
- (void)dealloc;	// 0x32119945
- (id)descriptionForFrameID:(id)frameID;	// 0x3211a039
- (id)frameWithFrameID:(id)frameID;	// 0x32119ba9
- (void)recycleFrame:(id)frame;	// 0x32119ee9
- (void)releaseResources;	// 0x32119a01
- (id)resourcePathForFrameID:(id)frameID andResource:(id)resource;	// 0x3211a059
- (id)sizeScriptForFrameID:(id)frameID;	// 0x3211a0a9
@end
