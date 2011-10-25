/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject {
@private
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	char *_failureMap;	// 8 = 0x8
	int _unmetFailureRequirementCount;	// 12 = 0xc
	int _unmetFailureDependentCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;	// G=0x3514681d; 
+ (void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;	// 0x3514116d
+ (void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;	// 0x351411a9
- (id)initWithRelatedGestures:(id)relatedGestures;	// 0x35141485
- (void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x35146419
- (void)_queueRecognizersForResetIfFinished;	// 0x351467d1
- (void)dealloc;	// 0x351441f9
- (id)description;	// 0x3543b0ed
- (void)gestureRecognizerBecameDirty:(id)dirty;	// 0x35208ab9
- (void)gestureRecognizerDeallocated:(id)deallocated;	// 0x35216e49
- (void)gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x351463e9
// declared property getter: - (BOOL)hasUnmetFailureRequirementsOrDependents;	// 0x3514681d
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;	// 0x35149459
- (void)rebuildFailureMap;	// 0x3523c83d
- (void)reloadFailureMap;	// 0x351415ad
@end

