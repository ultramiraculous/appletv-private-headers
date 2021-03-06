/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIPanGestureRecognizer, _UIPageCurl, NSMutableArray, UITapGestureRecognizer, NSArray;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate> {
@private
	id<UIPageViewControllerDelegate> _delegate;	// 156 = 0x9c
	id<UIPageViewControllerDataSource> _dataSource;	// 160 = 0xa0
	int _transitionStyle;	// 164 = 0xa4
	int _navigationOrientation;	// 168 = 0xa8
	int _spineLocation;	// 172 = 0xac
	BOOL _doubleSided;	// 176 = 0xb0
	NSArray *_viewControllers;	// 180 = 0xb4
	_UIPageCurl *_pageCurl;	// 184 = 0xb8
	UIPanGestureRecognizer *_panGestureRecognizer;	// 188 = 0xbc
	UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
	BOOL _stashingViewControllersForRotation;	// 196 = 0xc4
	NSArray *_viewControllersStashedForRotation;	// 200 = 0xc8
	BOOL _rotatingInterface;	// 204 = 0xcc
	NSMutableArray *_rotationSnapshotViews;	// 208 = 0xd0
	int _spineLocationPriorToInterfaceRotation;	// 212 = 0xd4
	UIEdgeInsets _tapRegionInsets;	// 216 = 0xd8
	CGSize _tapRegionBreadths;	// 232 = 0xe8
	UIEdgeInsets _effectiveTapRegionInsets;	// 240 = 0xf0
	CGSize _effectiveTapRegionBreadths;	// 256 = 0x100
	CGRect *_tapRegions;	// 264 = 0x108
	NSArray *_viewControllersStashedFromDataSource;	// 268 = 0x10c
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _delegateFlags;	// 272 = 0x110
}
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x33d0aef5; S=0x33d0af05; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x33d0af29; S=0x33d0af39; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x33d06aa5; S=0x33d06ab5; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x33d06a09; S=0x33d06a19; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x33d06bc5; S=0x33d06bd5; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x33d06c6d; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x33d06b51; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x33d06bb5; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x33d06b41; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x33d06cb9; 
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x33d06171
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x33d06181
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x33d06165
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x33d076c9
- (id)initWithCoder:(id)coder;	// 0x33d065b1
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x33d063e9
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x33d06199
- (BOOL)_canHandleGestures;	// 0x33d08a91
- (void)_contentViewFrameDidChange;	// 0x33d08945
- (CGSize)_effectiveTapRegionBreadths;	// 0x33d07105
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x33d06dad
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33d0a841
- (void)_handlePanGesture:(id)gesture;	// 0x33d0aac1
- (void)_handleTapGesture:(id)gesture;	// 0x33d0ad61
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x33d09ff5
- (void)_invalidateEffectiveTapRegions;	// 0x33d06d35
- (void)_invalidateViewControllersStashedFromDataSource;	// 0x33d08e91
- (BOOL)_isCurrentViewControllerStateValid;	// 0x33d089e1
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x33d0a929
- (void)_populateLeftAndRightViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x33d08dc5
- (void)_setSpineLocation:(int)location;	// 0x33d06b61
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x33d0733d
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x33d07079
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x33d0af05
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x33d08ebd
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x33d0af39
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x33d0a719
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x33d0aa51
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x33d0a571
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x33d0a63d
- (BOOL)_shouldPersistViewWhenCoding;	// 0x33d0640d
- (CGSize)_tapRegionBreadths;	// 0x33d0731d
- (UIEdgeInsets)_tapRegionInsets;	// 0x33d07055
- (CGRect *)_tapRegions;	// 0x33d0a1ed
- (id)_validatedViewControllersForCurlWithViewControllers:(id)viewControllers;	// 0x33d08a41
- (id)_viewControllerAfterViewController:(id)controller;	// 0x33d08ba9
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x33d08ac1
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x33d08b95
// declared property getter: - (id)_viewControllers;	// 0x33d0aef5
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x33d08bbd
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x33d07711
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x33d0af29
// declared property getter: - (id)dataSource;	// 0x33d06aa5
- (void)dealloc;	// 0x33d06865
// declared property getter: - (id)delegate;	// 0x33d06a09
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x33d08905
- (void)encodeWithCoder:(id)coder;	// 0x33d06411
// declared property getter: - (id)gestureRecognizers;	// 0x33d06c6d
// declared property getter: - (BOOL)isDoubleSided;	// 0x33d06bc5
- (void)loadView;	// 0x33d07391
// declared property getter: - (int)navigationOrientation;	// 0x33d06b51
// declared property setter: - (void)setDataSource:(id)source;	// 0x33d06ab5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33d06a19
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x33d06bd5
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x33d09f91
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33d0754d
// declared property getter: - (int)spineLocation;	// 0x33d06bb5
// declared property getter: - (int)transitionStyle;	// 0x33d06b41
// declared property getter: - (id)viewControllers;	// 0x33d06cb9
- (void)viewWillUnload;	// 0x33d07521
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33d07db1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33d077fd
@end

