/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {
	NSMutableDictionary *mTransitionSets;	// 4 = 0x4
	NSMutableDictionary *mTransitionPools;	// 8 = 0x8
}
+ (void)initialize;	// 0x33233fd1
+ (id)sharedManager;	// 0x3323403d
- (id)initWithPaths:(id)paths;	// 0x3323404d
- (BOOL)canHandleKenBurnsForTransitionID:(id)transitionID;	// 0x33234899
- (void)cleanup;	// 0x3323411d
- (void)dealloc;	// 0x332340dd
- (id)descriptionForTransitionID:(id)transitionID;	// 0x33234811
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x33234919
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x33234999
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x33234959
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x332349a5
- (BOOL)noContentsMotionForTransitionID:(id)transitionID;	// 0x332348d9
- (void)recycleTransition:(id)transition;	// 0x332346b9
- (void)releaseResources;	// 0x33234181
- (id)resourcePathForTransitionID:(id)transitionID andResource:(id)resource;	// 0x33234849
- (id)transitionWithTransitionID:(id)transitionID;	// 0x3323433d
@end
