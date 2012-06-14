/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, WebInspector, NSMutableSet, WebNodeHighlight, NSURL, WAKWindow, WebFixedPositionContent, WebIndicateLayer, NSString, WebPreferences, WebVideoFullscreenController;
@protocol WebFormDelegate, WebDeviceOrientationProvider, WebGeolocationProvider, WebCaretChangeListener, WebNotificationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject {
@private
	Page *page;	// 4 = 0x4
	id UIDelegate;	// 8 = 0x8
	id UIDelegateForwarder;	// 12 = 0xc
	id resourceProgressDelegate;	// 16 = 0x10
	id downloadDelegate;	// 20 = 0x14
	id policyDelegate;	// 24 = 0x18
	id policyDelegateForwarder;	// 28 = 0x1c
	id frameLoadDelegate;	// 32 = 0x20
	id frameLoadDelegateForwarder;	// 36 = 0x24
	id<WebFormDelegate> formDelegate;	// 40 = 0x28
	id editingDelegate;	// 44 = 0x2c
	id editingDelegateForwarder;	// 48 = 0x30
	id scriptDebugDelegate;	// 52 = 0x34
	id historyDelegate;	// 56 = 0x38
	id resourceProgressDelegateForwarder;	// 60 = 0x3c
	id formDelegateForwarder;	// 64 = 0x40
	WebInspector *inspector;	// 68 = 0x44
	WebNodeHighlight *currentNodeHighlight;	// 72 = 0x48
	BOOL allowsRemoteInspection;	// 76 = 0x4c
	NSString *hostApplicationBundleId;	// 80 = 0x50
	NSString *hostApplicationName;	// 84 = 0x54
	NSDictionary *remoteInspectorUserInfo;	// 88 = 0x58
	WebIndicateLayer *indicateLayer;	// 92 = 0x5c
	BOOL allowsUndo;	// 96 = 0x60
	float zoomMultiplier;	// 100 = 0x64
	BOOL zoomsTextOnly;	// 104 = 0x68
	NSString *applicationNameForUserAgent;	// 108 = 0x6c
	String userAgent;	// 112 = 0x70
	BOOL userAgentOverridden;	// 116 = 0x74
	WebPreferences *preferences;	// 120 = 0x78
	BOOL useSiteSpecificSpoofing;	// 124 = 0x7c
	NSURL *userStyleSheetLocation;	// 128 = 0x80
	WAKWindow *hostWindow;	// 132 = 0x84
	int programmaticFocusCount;	// 136 = 0x88
	WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;	// 140 = 0x8c
	WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;	// 232 = 0xe8
	WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;	// 332 = 0x14c
	WebHistoryDelegateImplementationCache historyDelegateImplementations;	// 360 = 0x168
	void *observationInfo;	// 380 = 0x17c
	BOOL closed;	// 384 = 0x180
	BOOL closing;	// 385 = 0x181
	BOOL shouldCloseWithWindow;	// 386 = 0x182
	BOOL mainFrameDocumentReady;	// 387 = 0x183
	BOOL drawsBackground;	// 388 = 0x184
	BOOL tabKeyCyclesThroughElementsChanged;	// 389 = 0x185
	BOOL becomingFirstResponder;	// 390 = 0x186
	BOOL becomingFirstResponderFromOutside;	// 391 = 0x187
	BOOL usesPageCache;	// 392 = 0x188
	BOOL catchesDelegateExceptions;	// 393 = 0x189
	BOOL cssAnimationsSuspended;	// 394 = 0x18a
	CGColorRef backgroundColor;	// 396 = 0x18c
	NSString *mediaStyle;	// 400 = 0x190
	BOOL hasSpellCheckerDocumentTag;	// 404 = 0x194
	int spellCheckerDocumentTag;	// 408 = 0x198
	BOOL smartInsertDeleteEnabled;	// 412 = 0x19c
	BOOL selectTrailingWhitespaceEnabled;	// 413 = 0x19d
	BOOL isStopping;	// 414 = 0x19e
	id UIKitDelegate;	// 416 = 0x1a0
	id UIKitDelegateForwarder;	// 420 = 0x1a4
	id WebMailDelegate;	// 424 = 0x1a8
	BOOL allowsMessaging;	// 428 = 0x1ac
	NSMutableSet *_caretChangeListeners;	// 432 = 0x1b0
	id<WebCaretChangeListener> _caretChangeListener;	// 436 = 0x1b4
	CGSize fixedLayoutSize;	// 440 = 0x1b8
	BOOL mainViewIsScrollingOrZooming;	// 448 = 0x1c0
	int didDrawTiles;	// 452 = 0x1c4
	HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>> > identifierMap;	// 456 = 0x1c8
	BOOL _keyboardUIModeAccessed;	// 476 = 0x1dc
	int _keyboardUIMode;	// 480 = 0x1e0
	BOOL shouldUpdateWhileOffscreen;	// 484 = 0x1e4
	BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 485 = 0x1e5
	BOOL needsOneShotDrawingSynchronization;	// 486 = 0x1e6
	BOOL postsAcceleratedCompositingNotifications;	// 487 = 0x1e7
	OwnPtr<LayerFlushController> layerFlushController;	// 488 = 0x1e8
	CGSize lastLayoutSize;	// 492 = 0x1ec
	WebVideoFullscreenController *fullscreenController;	// 500 = 0x1f4
	id<WebGeolocationProvider> _geolocationProvider;	// 504 = 0x1f8
	id<WebDeviceOrientationProvider> m_deviceOrientationProvider;	// 508 = 0x1fc
	id<WebNotificationProvider> _notificationProvider;	// 512 = 0x200
	RefPtr<WebCore::HistoryItem> _globalHistoryItem;	// 516 = 0x204
	BOOL interactiveFormValidationEnabled;	// 520 = 0x208
	int validationMessageTimerMagnification;	// 524 = 0x20c
	float customDeviceScaleFactor;	// 528 = 0x210
	WebFixedPositionContent *_fixedPositionContent;	// 532 = 0x214
}
+ (void)initialize;	// 0x35002355
- (id)init;	// 0x350023a1
- (id).cxx_construct;	// 0x35002359
- (void).cxx_destruct;	// 0x3508d219
- (void)dealloc;	// 0x3508d04d
- (void)finalize;	// 0x3508d1ed
@end
