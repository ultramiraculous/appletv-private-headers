/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <NSObject.h> // Unknown library
#import "UIKeyboardSplitTransitionDelegate.h"

@class UIPeripheralHostView, UIPanGestureRecognizer, UIInputViewTransition, UIResponder, UIKeyboardAutomatic, UIKeyboardRotationState, CADisplayLink, NSMutableArray, UIKeyboard, UIPeripheralHostState, UIInputViewPostPinningReloadState, UIKeyboardCornerView, NSMutableSet, UIView, UIInputViewSet;

@interface UIPeripheralHost : NSObject <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate> {
	UIPeripheralHostView *_hostView;	// 4 = 0x4
	UIKeyboardAutomatic *_automaticKeyboard;	// 8 = 0x8
	UIKeyboardCornerView *_cornerViewLeft;	// 12 = 0xc
	UIKeyboardCornerView *_cornerViewRight;	// 16 = 0x10
	BOOL _automaticAppearanceEnabled;	// 20 = 0x14
	BOOL _automaticAppearanceEnabledInternal;	// 21 = 0x15
	BOOL _automaticKeyboardAnimatingIn;	// 22 = 0x16
	BOOL _automaticKeyboardAnimatingOut;	// 23 = 0x17
	int _automaticKeyboardState;	// 24 = 0x18
	int _ignoringReloadInputViews;	// 28 = 0x1c
	BOOL _suppresingNotifications;	// 32 = 0x20
	BOOL _useHideNotificationsWhenNotVisible;	// 33 = 0x21
	BOOL _reloadInputViewsForcedIsAllowed;	// 34 = 0x22
	int _nextAutomaticOrderInDirection;	// 36 = 0x24
	int _targetRotatedOrientation;	// 40 = 0x28
	BOOL _isTranslating;	// 44 = 0x2c
	BOOL _isSplitting;	// 45 = 0x2d
	BOOL _isUndocked;	// 46 = 0x2e
	BOOL _splitLockState;	// 47 = 0x2f
	UIPanGestureRecognizer *_translateRecognizer;	// 48 = 0x30
	CADisplayLink *_displayLink;	// 52 = 0x34
	double _lastBounceTime;	// 56 = 0x38
	double _lastTranslationNotificationTime;	// 64 = 0x40
	CGAffineTransform _targetTransform;	// 72 = 0x48
	CGAffineTransform _initialTransform;	// 96 = 0x60
	CGPoint _velocity;	// 120 = 0x78
	NSMutableArray *_dropShadowViews;	// 128 = 0x80
	int _shadowStyle;	// 132 = 0x84
	BOOL _wasBackgroundSplit;	// 136 = 0x88
	CGRect _previousShadowFrameLeft;	// 140 = 0x8c
	CGRect _previousShadowFrameRight;	// 156 = 0x9c
	id _bounceCompletionBlock;	// 172 = 0xac
	float m_keyboardAttachedViewHeight;	// 176 = 0xb0
	CGRect _lastKnownIVFrame;	// 180 = 0xb4
	CGRect _lastKnownIAVFrame;	// 196 = 0xc4
	float _splitHeightDelta;	// 212 = 0xd4
	NSMutableArray *_animationStyleStack;	// 216 = 0xd8
	BOOL _hasCustomAnimationProperties;	// 220 = 0xdc
	double _nextAutomaticOrderInDuration;	// 224 = 0xe0
	double _lastAutomaticKeyboardDuration;	// 232 = 0xe8
	int _disableAnimationsCount;	// 240 = 0xf0
	NSMutableArray *_targetStateStack;	// 244 = 0xf4
	UIInputViewSet *_inputViewSet;	// 248 = 0xf8
	UIResponder *_responder;	// 252 = 0xfc
	NSMutableSet *_pinningResponders;	// 256 = 0x100
	BOOL _ignoresPinning;	// 260 = 0x104
	UIInputViewPostPinningReloadState *_postPinningReloadState;	// 264 = 0x108
	BOOL _animationFencingEnabled;	// 268 = 0x10c
	BOOL _interfaceAutorotationDisabled;	// 269 = 0x10d
	UIKeyboardRotationState *_rotationState;	// 272 = 0x110
	UIInputViewTransition *_currentTransition;	// 276 = 0x114
	UIResponder *_selfHostingTrigger;	// 280 = 0x118
	BOOL _didFadeInputViews;	// 284 = 0x11c
	BOOL _blockedReloadInputViewsForDictation;	// 285 = 0x11d
	BOOL _animateCornerRefresh;	// 286 = 0x11e
	BOOL _showCorners;	// 287 = 0x11f
}
@property(retain, nonatomic) UIInputViewSet *_inputViews;	// G=0x3598e03d; S=0x356b89dd; @synthesize=_inputViewSet
@property(assign, nonatomic) BOOL animationFencingEnabled;	// G=0x357537d9; S=0x3598e02d; @synthesize=_animationFencingEnabled
@property(assign, nonatomic) BOOL animationFencingEnabled;	// @dynamic
@property(readonly, assign, nonatomic) BOOL animationsEnabled;	// G=0x35679669; 
@property(assign, nonatomic) BOOL automaticAppearanceEnabled;	// G=0x3569b82d; S=0x35745625; @synthesize=_automaticAppearanceEnabled
@property(assign, nonatomic) BOOL automaticAppearanceInternalEnabled;	// G=0x3598e795; S=0x35758ab1; 
@property(readonly, assign, nonatomic) BOOL automaticAppearanceReallyEnabled;	// G=0x35679305; 
@property(readonly, assign, nonatomic) UIKeyboardAutomatic *automaticKeyboard;	// G=0x3575e45d; 
@property(readonly, assign, nonatomic) UIKeyboard *automaticKeyboard;
@property(assign, nonatomic) int currentState;	// G=0x3598e04d; S=0x356f7bf1; @synthesize=_automaticKeyboardState
@property(retain, nonatomic) UIInputViewTransition *currentTransition;	// G=0x35679b19; S=0x356f7da1; @synthesize=_currentTransition
@property(readonly, assign, nonatomic) NSMutableArray *dropShadowViews;	// G=0x356facc1; 
@property(assign, nonatomic) BOOL ignoresPinning;	// G=0x357ad431; S=0x3598e781; 
@property(readonly, assign, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;	// G=0x35679575; 
@property(retain, nonatomic) UIInputViewSet *inputViews;	// G=0x35679a7d; S=0x35679635; 
@property(readonly, assign) BOOL isSplitting;	// G=0x35791281; converted property
@property(readonly, assign) BOOL isTranslating;	// G=0x356f86e1; converted property
@property(readonly, assign) BOOL isUndocked;	// G=0x356e9c31; converted property
@property(readonly, assign, nonatomic) BOOL keyClicksEnabled;	// G=0x3598fb79; 
@property(readonly, assign) float keyboardAttachedViewHeight;	// G=0x3598ee3d; converted property
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState;	// G=0x35696875; S=0x35679551; @synthesize=_postPinningReloadState
@property(readonly, assign, nonatomic) UIResponder *responder;	// @dynamic
@property(retain, nonatomic) UIResponder *responder;	// G=0x35679091; S=0x35679611; @synthesize=_responder
@property(retain, nonatomic) UIKeyboardRotationState *rotationState;	// G=0x357cc4a9; S=0x3598e009; @synthesize=_rotationState
@property(retain, nonatomic) UIResponder *selfHostingTrigger;	// G=0x35791bc5; S=0x356795ed; @synthesize=_selfHostingTrigger
@property(retain, nonatomic) UIPeripheralHostState *targetState;	// G=0x3576daa1; S=0x35793ec5; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x356f5e15; 
+ (void)_releaseSharedInstance;	// 0x35989925
+ (CGRect)screenBoundsInAppOrientation;	// 0x35989331
+ (id)sharedInstance;	// 0x356789c1
+ (CGRect)visiblePeripheralFrame;	// 0x3576d569
- (id)init;	// 0x356b8731
- (void)_beginDisablingAnimations;	// 0x356d20a1
- (void)_beginIgnoringReloadInputViews;	// 0x35678a09
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x357ad40d
- (id)_currentInputView;	// 0x3598fb51
- (void)_endDisablingAnimations;	// 0x356d2489
- (void)_endIgnoringReloadInputViews;	// 0x35678bb5
- (BOOL)_hasPostPinningReloadState;	// 0x357d69c5
- (BOOL)_hostFirstResponder:(id)responder onBehalfOfResponder:(id)responder2;	// 0x3598fbc1
- (CGRect)_inputViewRectToAvoid;	// 0x3577d801
// declared property getter: - (id)_inputViews;	// 0x3598e03d
- (id)_inputViewsForResponder:(id)responder;	// 0x356790a5
// declared property getter: - (BOOL)_isIgnoringReloadInputViews;	// 0x35679575
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x35750e65
- (BOOL)_isSelfHosting;	// 0x356d2425
- (BOOL)_isSuppressedByManualKeyboard;	// 0x3576d789
- (BOOL)_isTrackingResponder:(id)responder;	// 0x3569680d
- (void)_performRefreshCorners;	// 0x356fe8cd
- (void)_reloadInputViewsForResponder:(id)responder;	// 0x35678cbd
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)responder;	// 0x356d22f9
- (void)_setIgnoresPinning:(BOOL)pinning allowImmediateReload:(BOOL)reload;	// 0x356d202d
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)allowed;	// 0x3598e771
- (id)_sizingWindowForOrientation:(int)orientation;	// 0x356f7109
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)keyboardIsOnScreen;	// 0x3598bbc5
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x35750ec1
- (void)_updateBounceAnimation:(id)animation;	// 0x3598aa49
- (void)adjustHostViewForTransitionCompletion:(id)transitionCompletion;	// 0x356fa6f9
- (void)adjustHostViewForTransitionEndFrame:(id)transitionEndFrame;	// 0x356fa51d
- (void)adjustHostViewForTransitionStartFrame:(id)transitionStartFrame;	// 0x356f8815
- (CGPoint)adjustedPersistentOffset;	// 0x3598e88d
// declared property getter: - (BOOL)animationFencingEnabled;	// 0x357537d9
// declared property getter: - (BOOL)animationsEnabled;	// 0x35679669
// declared property getter: - (BOOL)automaticAppearanceEnabled;	// 0x3569b82d
// declared property getter: - (BOOL)automaticAppearanceInternalEnabled;	// 0x3598e795
// declared property getter: - (BOOL)automaticAppearanceReallyEnabled;	// 0x35679305
// declared property getter: - (id)automaticKeyboard;	// 0x3575e45d
- (void)bounceAnimationDidFinish;	// 0x3598a7b9
- (UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(int)orientation outDirection:(int)direction forTransition:(int)transition;	// 0x3598e105
- (void)completeCurrentTransitionIfNeeded;	// 0x356e7355
- (id)computeTransitionForInputViews:(id)inputViews fromOrientation:(int)orientation toOrientation:(int)orientation3;	// 0x3598fa11
- (id)computeTransitionFromInputViews:(id)inputViews toInputViews:(id)inputViews2 animationStyle:(id)style;	// 0x356f5e25
- (id)containerWindow;	// 0x356f7299
- (void)createAutomaticKeyboardIfNeeded;	// 0x3575e485
- (void)createCornerViews;	// 0x356f9399
- (void)createHostViewIfNeeded;	// 0x356f90b5
// declared property getter: - (int)currentState;	// 0x3598e04d
- (int)currentState;	// 0x356d2121
// declared property getter: - (id)currentTransition;	// 0x35679b19
- (void)dealloc;	// 0x359894bd
- (void)disableInterfaceAutorotation:(BOOL)autorotation;	// 0x3598acfd
- (CGRect)displayRectForViewSet:(id)viewSet orientation:(int)orientation position:(int)position;	// 0x356f6da9
- (void)dock;	// 0x3598a311
// declared property getter: - (id)dropShadowViews;	// 0x356facc1
- (void)executeTransition:(id)transition;	// 0x356f75b5
- (void)fadeInInputViews:(BOOL)inputViews;	// 0x3598a3d1
- (void)fadeInputViewsIfNeeded;	// 0x3598a49d
- (void)finishRotation;	// 0x3598bd2d
- (void)finishRotationOfKeyboard:(id)keyboard;	// 0x3598d231
- (void)finishSplitTransition:(id)transition;	// 0x3598a5c9
- (void)forceOrderInAutomatic;	// 0x3580db41
- (void)forceOrderInAutomaticAnimated:(BOOL)automaticAnimated;	// 0x3598d6bd
- (void)forceOrderInAutomaticFromDirection:(int)direction withDuration:(double)duration;	// 0x357e9a81
- (void)forceOrderOutAutomatic;	// 0x3580ec61
- (void)forceOrderOutAutomaticAnimated:(BOOL)animated;	// 0x3598d719
- (void)forceOrderOutAutomaticToDirection:(int)direction withDuration:(double)duration;	// 0x357456ad
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3598b7c1
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3598b7c5
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3598b7c9
- (double)getLastAutomaticDuration;	// 0x3598ee25
- (float)getVerticalOverlapForView:(id)view usingKeyboardInfo:(id)info;	// 0x357b4ca5
- (void)handleTranslateDetectedFinished:(id)finished;	// 0x3598ada9
- (BOOL)hasCustomInputView;	// 0x35793475
- (BOOL)hasDictationKeyboard;	// 0x35989689
// declared property getter: - (BOOL)ignoresPinning;	// 0x357ad431
- (void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x3598f515
- (void)initializeTranslateGestureRecognizer;	// 0x359897c5
- (BOOL)inputViewKeyboardIsSplit;	// 0x356f8701
// declared property getter: - (id)inputViews;	// 0x35679a7d
- (void)invalidateDisplayLink;	// 0x3598aa01
- (BOOL)isHostingActiveImpl;	// 0x3598e05d
- (BOOL)isOffScreen;	// 0x35759019
- (BOOL)isOnScreen;	// 0x356d20e9
// converted property getter: - (BOOL)isSplitting;	// 0x35791281
// converted property getter: - (BOOL)isTranslating;	// 0x356f86e1
// converted property getter: - (BOOL)isUndocked;	// 0x356e9c31
// declared property getter: - (BOOL)keyClicksEnabled;	// 0x3598fb79
// converted property getter: - (float)keyboardAttachedViewHeight;	// 0x3598ee3d
- (void)layoutIfNeeded;	// 0x35792c75
- (void)layoutInputViews;	// 0x35792ca9
- (void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x357934c5
- (CGRect)localDisplayRectForViewSet:(id)viewSet;	// 0x356f7429
- (CGRect)localDisplayRectForViewSet:(id)viewSet position:(int)position;	// 0x356f6c41
- (void)logGeometryDescriptionFromUserInfo:(id)userInfo;	// 0x3598e3b9
- (void)manualKeyboardWasOrderedIn:(id)anIn;	// 0x359899e5
- (void)manualKeyboardWasOrderedOut:(id)anOut;	// 0x35989a95
- (void)manualKeyboardWillBeOrderedIn:(id)manualKeyboard;	// 0x3598997d
- (void)manualKeyboardWillBeOrderedOut:(id)manualKeyboard;	// 0x35989a2d
- (BOOL)maximize;	// 0x3598f119
- (BOOL)maximizeWithAnimation:(BOOL)animation;	// 0x3598f131
- (BOOL)minimize;	// 0x3598eecd
- (float)minimumOffsetForBuffer:(float)buffer;	// 0x3598e7a5
- (void)moveToPersistentOffset;	// 0x3598eb1d
- (id)nextAnimationStyle;	// 0x3580db99
- (id)nextAnimationStyle:(BOOL)style;	// 0x356796b9
- (CGPoint)offHostPointForPoint:(CGPoint)point;	// 0x3598ebe1
- (void)orderInAutomatic;	// 0x3598d761
- (void)orderInAutomaticFromDirection:(int)direction withDuration:(double)duration;	// 0x357cbf55
- (void)orderInAutomaticSkippingAnimation;	// 0x3598d7ad
- (void)orderInWithAnimationStyle:(id)animationStyle;	// 0x357cbfd1
- (void)orderOutAutomatic;	// 0x3598d7f9
- (void)orderOutAutomaticSkippingAnimation;	// 0x35746fe9
- (void)orderOutAutomaticToDirection:(int)direction withDuration:(double)duration;	// 0x3573e925
- (void)orderOutWithAnimation:(BOOL)animation toDirection:(int)direction duration:(double)duration;	// 0x3598d855
- (void)orderOutWithAnimationStyle:(id)animationStyle;	// 0x3573e9a1
- (void)peripheralHostDidEnterBackground:(id)peripheralHost;	// 0x356e7345
- (void)peripheralHostWillResume:(id)peripheralHost;	// 0x359896ed
- (void)peripheralViewMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x3598f3ed
- (BOOL)pinningPreventsInputViews:(id)views;	// 0x356794e1
- (void)popAnimationStyle;	// 0x356d2449
- (void)postDidHideNotification;	// 0x35989bd5
- (void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post;	// 0x3598e59d
- (void)postDidShowNotification;	// 0x35989add
- (void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post;	// 0x3579473d
- (void)postDockingNotification;	// 0x35989c9d
- (void)postKeyboardFrameChangeNotification:(id)notification withInfo:(id)info;	// 0x3598a1f1
// declared property getter: - (id)postPinningReloadState;	// 0x35696875
- (void)postUndockingNotification;	// 0x35989e8d
- (void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;	// 0x3598e3bd
- (void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;	// 0x35793b15
- (void)prepareForPinning;	// 0x3598e719
- (void)prepareForRotationOfKeyboard:(id)keyboard toOrientation:(int)orientation;	// 0x3598bd6d
- (void)prepareForRotationToOrientation:(int)orientation;	// 0x3598bca5
- (void)prepareForSplitTransition;	// 0x3598a561
- (void)pushAnimationStyle:(id)style;	// 0x356d228d
- (void)refreshCorners;	// 0x356fac51
- (void)resetCurrentOrderOutAnimationDuration:(double)duration;	// 0x357d54a1
- (void)resetNextAutomaticOrderInDirectionAndDuration;	// 0x356fafed
// declared property getter: - (id)responder;	// 0x35679091
- (id)retain;	// 0x356f9af1
- (void)rotateKeyboard:(id)keyboard toOrientation:(int)orientation;	// 0x3598c5c5
- (void)rotateToOrientation:(int)orientation;	// 0x3598bce9
// declared property getter: - (id)rotationState;	// 0x357cc4a9
- (CGRect)screenRectFromBounds:(CGRect)bounds atCenter:(CGPoint)center applyingSourceHeightDelta:(float)delta;	// 0x3579449d
// declared property getter: - (id)selfHostingTrigger;	// 0x35791bc5
- (void)setAccessoryViewVisible:(BOOL)visible delay:(float)delay;	// 0x3598d8c1
// declared property setter: - (void)setAnimationFencingEnabled:(BOOL)enabled;	// 0x3598e02d
// declared property setter: - (void)setAutomaticAppearanceEnabled:(BOOL)enabled;	// 0x35745625
// declared property setter: - (void)setAutomaticAppearanceInternalEnabled:(BOOL)enabled;	// 0x35758ab1
// declared property setter: - (void)setCurrentState:(int)state;	// 0x356f7bf1
// declared property setter: - (void)setCurrentTransition:(id)transition;	// 0x356f7da1
// declared property setter: - (void)setIgnoresPinning:(BOOL)pinning;	// 0x3598e781
// declared property setter: - (void)setInputViews:(id)views;	// 0x35679635
- (void)setInputViews:(id)views animated:(BOOL)animated;	// 0x35679681
- (void)setInputViews:(id)views animationStyle:(id)style;	// 0x35679881
- (void)setKeyboardOnScreenNotifyKey:(BOOL)key;	// 0x356f7c5d
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)springBoardKeyboardNotifications;	// 0x359893cd
- (void)setNextAutomaticOrderInDirection:(int)direction duration:(double)duration;	// 0x357532ed
- (void)setPeripheralFrameForHostBounds:(CGRect)hostBounds;	// 0x357937a9
- (void)setPeripheralToolbarFrameForHostWidth:(float)hostWidth;	// 0x357936c5
// declared property setter: - (void)setPostPinningReloadState:(id)state;	// 0x35679551
// declared property setter: - (void)setResponder:(id)responder;	// 0x35679611
// declared property setter: - (void)setRotationState:(id)state;	// 0x3598e009
// declared property setter: - (void)setSelfHostingTrigger:(id)trigger;	// 0x356795ed
// declared property setter: - (void)setTargetState:(id)state;	// 0x35793ec5
- (void)setUndockedWithOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x3598e935
// declared property setter: - (void)set_inputViews:(id)views;	// 0x356b89dd
- (void)setkeyboardAttachedViewHeight:(float)height;	// 0x3598eebd
- (BOOL)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x35794689
- (void)showCorners:(BOOL)corners withDuration:(float)duration;	// 0x356f9805
- (void)showDropShadows:(BOOL)shadows;	// 0x3598b9e1
- (void)showInputViewsIfNeeded;	// 0x356b8a01
- (CGSize)sizeOfInputViewForInputViewSet:(id)inputViewSet withInterfaceOrientation:(int)interfaceOrientation;	// 0x356f91d9
- (void)syncToExistingAnimations;	// 0x35753729
// declared property getter: - (id)targetState;	// 0x3576daa1
- (CGSize)totalPeripheralSizeForOrientation:(int)orientation;	// 0x35793311
- (void)transitionDidFinish;	// 0x3598ded9
- (void)translateDetected:(id)detected;	// 0x3598b229
- (void)undock;	// 0x3598a38d
- (id)undockedInfoFromDefaultInfo:(id)defaultInfo forNotification:(id)notification;	// 0x3598a041
- (void)updateCandidateHeight:(float)height withDuration:(float)duration;	// 0x3598fc61
- (void)updateDropShadow;	// 0x356f9b1d
- (void)updateFrame:(CGRect)frame withDuration:(float)duration;	// 0x3598da81
- (void)updateFrame:(CGRect)frame withDuration:(float)duration splitHeightDelta:(float)delta;	// 0x3598de91
- (void)updateInputAccessoryViewVisibility:(BOOL)visibility withDuration:(float)duration;	// 0x3598fe29
- (BOOL)userInfoContainsActualGeometryChange:(id)change;	// 0x357945dd
- (id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)geometry duration:(double)duration forWill:(BOOL)aFor forShow:(BOOL)show;	// 0x35793f1d
// declared property getter: - (id)view;	// 0x356f5e15
- (CGRect)visiblePeripheralFrame:(BOOL)frame;	// 0x3576d811
@end

