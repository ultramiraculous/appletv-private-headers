/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"

@class WebViewPrivate;

@interface WebView : WAKView {
@private
	WebViewPrivate *_private;	// 68 = 0x44
}
@property(assign) id UIDelegate;	// G=0x304f0c8d; S=0x304ebd15; converted property
@property(assign) BOOL allowsUndo;	// G=0x30549479; S=0x30549495; converted property
@property(retain) id applicationNameForUserAgent;	// G=0x30508b61; S=0x3054ac95; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x304e76f1; S=0x3054e9dd; converted property
@property(retain) id caretChangeListener;	// G=0x3054918d; S=0x305491a9; converted property
@property(assign, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;	// G=0x3050551d; S=0x305063e1; converted property
@property(retain) id currentNodeHighlight;	// G=0x305493d9; S=0x3054a2b1; converted property
@property(retain) id customTextEncodingName;	// G=0x3054a97d; S=0x3054a9fd; converted property
@property(retain) id customUserAgent;	// G=0x3054ac4d; S=0x304ec305; converted property
@property(assign) BOOL defersCallbacks;	// G=0x304fdfc1; S=0x304f126d; converted property
@property(assign) id downloadDelegate;	// G=0x304e6975; S=0x304ebcf9; converted property
@property(assign) BOOL drawsBackground;	// G=0x304e76c5; S=0x30504a81; converted property
@property(assign, getter=isEditable) BOOL editable;	// G=0x304eac51; S=0x30551ee1; converted property
@property(assign) id editingDelegate;	// G=0x305494f5; S=0x304e98f1; converted property
@property(assign) id frameLoadDelegate;	// G=0x304f0ff5; S=0x304eb1a9; converted property
@property(retain) id groupName;	// G=0x3054a459; S=0x304e7e0d; converted property
@property(assign) id historyDelegate;	// G=0x304f4e8d; S=0x3054be15; converted property
@property(retain) id hostWindow;	// G=0x305493b5; S=0x3054a7c1; converted property
@property(retain) id mainFrameURL;	// G=0x304f11a5; S=0x3054a3e1; converted property
@property(retain) id mediaStyle;	// G=0x304e7b59; S=0x3054abe9; converted property
@property(assign) float mediaVolume;	// G=0x305494b1; S=0x30551899; converted property
@property(assign) float pageSizeMultiplier;	// G=0x3054bf21; S=0x3054bf09; converted property
@property(assign) id policyDelegate;	// G=0x30549399; S=0x304eb7f5; converted property
@property(retain) id preferences;	// G=0x304e5d21; S=0x3054b431; converted property
@property(retain) id preferencesIdentifier;	// G=0x3054b35d; S=0x3054b381; converted property
@property(assign) id resourceLoadDelegate;	// G=0x304e6959; S=0x304eb859; converted property
@property(assign) id scriptDebugDelegate;	// G=0x304f8d6d; S=0x3054bdc5; converted property
@property(assign, getter=isSelectTrailingWhitespaceEnabled) BOOL selectTrailingWhitespaceEnabled;	// G=0x30549299; S=0x30549cf1; converted property
@property(assign) BOOL shouldCloseWithWindow;	// G=0x3054937d; S=0x30549361; converted property
@property(assign) BOOL shouldUpdateWhileOffscreen;	// G=0x304e7729; S=0x3054a2f9; converted property
@property(assign) BOOL smartInsertDeleteEnabled;	// G=0x305494d9; S=0x3054c075; converted property
@property(assign) BOOL tabKeyCyclesThroughElements;	// G=0x30549449; S=0x305493f5; converted property
@property(assign) float textSizeMultiplier;	// G=0x3054b1fd; S=0x3054b239; converted property
@property(retain) id typingStyle;	// G=0x3054c051; S=0x3054c029; converted property
@property(assign) BOOL usesPageCache;	// G=0x304e9385; S=0x30549cb1; converted property
+ (id)MIMETypesShownAsHTML;	// 0x30549fe1
+ (id)_MIMETypeForFile:(id)file;	// 0x3054b9e1
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x3054fc6d
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time;	// 0x305501e1
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist;	// 0x30550511
+ (unsigned)_cacheModel;	// 0x304ed731
+ (BOOL)_canHandleRequest:(id)request;	// 0x304f09ad
+ (BOOL)_canHandleRequest:(id)request forMainFrame:(BOOL)mainFrame;	// 0x304f09c5
+ (BOOL)_canShowMIMEType:(id)type allowingPlugins:(BOOL)plugins;	// 0x304f36e9
+ (id)_decodeData:(id)data;	// 0x3054f8f5
+ (unsigned)_didSetCacheModel;	// 0x304e2ecd
+ (id)_generatedMIMETypeForURLScheme:(id)urlscheme;	// 0x3054baa5
+ (Class)_getPDFRepresentationClass;	// 0x304f42c1
+ (Class)_getPDFViewClass;	// 0x304f3f45
+ (unsigned long)_glyphCacheIncrementalSize;	// 0x30549155
+ (unsigned long)_glyphCacheInitialSize;	// 0x30549149
+ (void)_handleMemoryWarning;	// 0x3054f2a5
+ (void)_makeAllWebViewsPerformSelector:(SEL)selector;	// 0x305495e5
+ (unsigned)_maxCacheModelInAnyInstance;	// 0x3054d189
+ (void)_preferencesChangedNotification:(id)notification;	// 0x304e2ca9
+ (void)_preferencesRemovedNotification:(id)notification;	// 0x3054d225
+ (void)_preflightSpellChecker;	// 0x305064e9
+ (void)_preflightSpellCheckerNow:(id)now;	// 0x30549525
+ (id)_productivityDocumentMIMETypes;	// 0x304f6fe1
+ (void)_registerPluginMIMEType:(id)type;	// 0x304fba9d
+ (void)_registerURLSchemeAsSecure:(id)secure;	// 0x3055109d
+ (void)_registerViewClass:(Class)aClass representationClass:(Class)aClass2 forURLScheme:(id)urlscheme;	// 0x3054f6d1
+ (void)_removeAllUserContentFromGroup:(id)group;	// 0x30550e55
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x3054ff21
+ (void)_removeUserScriptFromGroup:(id)group world:(id)world url:(id)url;	// 0x30550835
+ (void)_removeUserScriptsFromGroup:(id)group world:(id)world;	// 0x30550bcd
+ (void)_removeUserStyleSheetFromGroup:(id)group world:(id)world url:(id)url;	// 0x30550a01
+ (void)_removeUserStyleSheetsFromGroup:(id)group world:(id)world;	// 0x30550d11
+ (void)_reportException:(OpaqueJSValue *)exception inContext:(OpaqueJSContext *)context;	// 0x3054f189
+ (BOOL)_representationExistsForURLScheme:(id)urlscheme;	// 0x304f3261
+ (void)_resetOriginAccessWhitelists;	// 0x305501d5
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)path;	// 0x3054f499
+ (void)_setCacheModel:(unsigned)model;	// 0x304e2ed9
+ (void)_setDomainRelaxationForbidden:(BOOL)forbidden forURLScheme:(id)urlscheme;	// 0x30550f81
+ (void)_setGlyphCacheInitialSize:(unsigned long)size andIncrementSize:(unsigned long)size2;	// 0x30549161
+ (void)_setPDFRepresentationClass:(Class)aClass;	// 0x305495ad
+ (void)_setPDFViewClass:(Class)aClass;	// 0x305495b9
+ (void)_setShouldUseFontSmoothing:(BOOL)_set;	// 0x3054fc4d
+ (BOOL)_shouldUseFontSmoothing;	// 0x3054fc61
+ (id)_standardUserAgentWithApplicationName:(id)applicationName;	// 0x30508b9d
+ (id)_standardUserAgentWithApplicationName:(id)applicationName osMarketingVersion:(id)version;	// 0x304ebd95
+ (id)_supportedMIMETypes;	// 0x30549d29
+ (void)_unregisterPluginMIMEType:(id)type;	// 0x3054b921
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)mimetype;	// 0x3054f52d
+ (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x304f3709
+ (BOOL)canCloseAllWebViews;	// 0x3054f4ad
+ (BOOL)canShowFile:(id)file;	// 0x3054b999
+ (BOOL)canShowMIMEType:(id)type;	// 0x304f36d1
+ (BOOL)canShowMIMETypeAsHTML:(id)html;	// 0x304e7ca1
+ (void)closeAllWebViews;	// 0x3054f4b9
+ (void)enableWebThread;	// 0x304e1cad
+ (void)garbageCollectNow;	// 0x304edab9
+ (void)initialize;	// 0x304e19fd
+ (void)purgeInactiveFontData;	// 0x304edcc9
+ (void)registerForMemoryNotifications;	// 0x304e1e11
+ (void)registerURLSchemeAsLocal:(id)local;	// 0x30549d71
+ (void)registerViewClass:(Class)aClass representationClass:(Class)aClass2 forMIMEType:(id)mimetype;	// 0x304fbb61
+ (void)setMIMETypesShownAsHTML:(id)html;	// 0x30549e75
+ (BOOL)shouldIncludeInWebKitStatistics;	// 0x304e62e9
+ (void)willEnterBackgroundWithCompletionHandler:(id)completionHandler;	// 0x304ed9fd
- (id)initSimpleHTMLDocumentWithStyle:(id)style editable:(BOOL)editable withFrame:(CGRect)frame withPreferences:(id)preferences;	// 0x305040e1
- (id)initWithFrame:(CGRect)frame;	// 0x304e4325
- (id)initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3;	// 0x304e4351
// converted property getter: - (id)UIDelegate;	// 0x304f0c8d
- (id)_UIDelegateForSelector:(SEL)selector;	// 0x304ed3ed
- (id)_UIDelegateForwarder;	// 0x305009dd
- (id)_UIKitDelegate;	// 0x304ed58d
- (id)_UIKitDelegateForwarder;	// 0x304eadb5
- (void)_addObject:(id)object forIdentifier:(unsigned long)identifier;	// 0x304f154d
- (void)_addToAllWebViewsSet;	// 0x304e7dd5
- (BOOL)_allowsMessaging;	// 0x304fcb0d
- (void)_attachScriptDebuggerToAllFrames;	// 0x3054e889
- (BOOL)_becomingFirstResponderFromOutside;	// 0x30549529
- (void)_cacheFrameLoadDelegateImplementations;	// 0x304eb22d
- (void)_cacheHistoryDelegateImplementations;	// 0x3054e341
- (void)_cacheResourceLoadDelegateImplementations;	// 0x304eb8dd
- (void)_cacheScriptDebugDelegateImplementations;	// 0x3054e159
- (BOOL)_canResetZoom:(BOOL)zoom;	// 0x3054ae71
- (BOOL)_canShowMIMEType:(id)type;	// 0x304f43f9
- (BOOL)_canZoomIn:(BOOL)anIn;	// 0x3054b07d
- (BOOL)_canZoomOut:(BOOL)anOut;	// 0x3054b11d
- (BOOL)_catchesDelegateExceptions;	// 0x3054927d
- (void)_clearBackForwardCache;	// 0x3054e719
- (void)_clearDelegates;	// 0x30549ad9
- (void)_clearLayerSyncLoopObserver;	// 0x304fe3e9
- (void)_clearMainFrameName;	// 0x3054f025
- (void)_close;	// 0x3054dc21
- (void)_closePluginDatabases;	// 0x30549719
- (void)_closeWindow;	// 0x305499c1
- (void)_closeWithFastTeardown;	// 0x3054975d
- (void)_closingEventHandling;	// 0x30552771
- (void)_commonInitializationWithFrameName:(id)frameName groupName:(id)name usesDocumentViews:(BOOL)views;	// 0x304e4531
- (OpaqueJSValue *)_computedStyleIncludingVisitedInfo:(OpaqueJSContext *)info forElement:(OpaqueJSValue *)element;	// 0x305520ad
- (BOOL)_continuousCheckingAllowed;	// 0x30506455
- (BOOL)_cookieEnabled;	// 0x305491e1
- (void)_destroyAllPlugIns;	// 0x3054e5e5
- (void)_detachScriptDebuggerFromAllFrames;	// 0x3054e8cd
- (void)_didCommitLoadForFrame:(id)frame;	// 0x304f6fc1
- (void)_didFinishScrollingOrZooming;	// 0x305496cd
- (void)_dispatchPendingLoadRequests;	// 0x3054d389
- (void)_dispatchTileDidDraw:(id)_dispatchTile;	// 0x304ed4a5
- (void)_dispatchUnloadEvent;	// 0x3054d9d9
- (id)_displayURL;	// 0x304f10dd
- (id)_downloadURL:(id)url;	// 0x3054979d
- (id)_editingDelegateForwarder;	// 0x30505395
- (id)_elementAtWindowPoint:(CGPoint)windowPoint;	// 0x3054a6d9
- (void)_executeCoreCommandByName:(id)name value:(id)value;	// 0x3054ed81
- (CGSize)_fixedLayoutSize;	// 0x30549235
- (id)_focusedFrame;	// 0x30505819
- (id)_formDelegate;	// 0x30549099
- (id)_formDelegateForSelector:(SEL)selector;	// 0x30549951
- (id)_formDelegateForwarder;	// 0x30549891
- (id)_frameForCurrentSelection;	// 0x3054bdb1
- (id)_frameLoadDelegateForwarder;	// 0x304f0f35
- (id)_frameViewAtWindowPoint:(CGPoint)windowPoint;	// 0x3054d0b5
- (void)_geolocationDidChangePosition:(id)_geolocation;	// 0x305495a5
- (void)_geolocationDidFailWithError:(id)_geolocation;	// 0x305495a9
- (id)_geolocationProvider;	// 0x30549581
- (id)_globalHistoryItem;	// 0x3054ea69
- (BOOL)_inFastImageScalingMode;	// 0x3054e679
- (BOOL)_inViewSourceMode;	// 0x3054e64d
- (BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 0x30549329
- (id)_initWithArguments:(id)arguments;	// 0x3054b731
- (id)_initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3 usesDocumentViews:(BOOL)views;	// 0x304e438d
- (void)_insertNewlineInQuotedContent;	// 0x3054cff5
- (BOOL)_isClosed;	// 0x3054906d
- (BOOL)_isClosing;	// 0x3050595d
- (BOOL)_isLoading;	// 0x3054d04d
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)plugin;	// 0x3054b7e1
- (BOOL)_isPerformingProgrammaticFocus;	// 0x3050103d
- (BOOL)_isProcessingUserGesture;	// 0x30503e49
- (BOOL)_isSoftwareRenderable;	// 0x3054f0b1
- (BOOL)_isStopping;	// 0x304f755d
- (BOOL)_isUsingAcceleratedCompositing;	// 0x3054e911
- (int)_keyboardUIMode;	// 0x3054d2b5
- (void)_loadBackForwardListFromOtherView:(id)otherView;	// 0x3054ded9
- (void)_locked_performPlugInSelector:(SEL)selector inFrame:(id)frame;	// 0x30503949
- (BOOL)_locked_plugInsAreRunningInFrame:(id)frame;	// 0x30549bb5
- (Frame *)_mainCoreFrame;	// 0x304e7dad
- (id)_mainFrameOverrideEncoding;	// 0x3054a991
- (void)_mouseDidMoveOverElement:(id)_mouse modifierFlags:(unsigned)flags;	// 0x305023d1
- (BOOL)_mustDrawUnionedRect:(CGRect)rect singleRects:(const CGRect *)rects count:(int)count;	// 0x30548fd5
- (BOOL)_needsOneShotDrawingSynchronization;	// 0x30549545
- (id)_objectForIdentifier:(unsigned long)identifier;	// 0x304f2a15
- (id)_openNewWindowWithRequest:(id)request;	// 0x3054de51
- (void)_performResponderOperation:(SEL)operation with:(id)with;	// 0x305092d1
- (id)_pluginForExtension:(id)extension;	// 0x3054b851
- (id)_pluginForMIMEType:(id)mimetype;	// 0x3054b8b9
- (BOOL)_pluginsAreRunning;	// 0x3054e5b5
- (id)_policyDelegateForwarder;	// 0x304f03ed
- (void)_popPerformingProgrammaticFocus;	// 0x305490d5
- (BOOL)_postsAcceleratedCompositingNotifications;	// 0x305492d5
- (void)_preferencesChanged:(id)changed;	// 0x304e7f45
- (void)_preferencesChangedNotification:(id)notification;	// 0x304ec6f5
- (void)_pushPerformingProgrammaticFocus;	// 0x305490b5
- (float)_realZoomMultiplier;	// 0x304e7ce5
- (BOOL)_realZoomMultiplierIsTextOnly;	// 0x304e7d01
- (void)_removeFromAllWebViewsSet;	// 0x305495c5
- (void)_removeObjectForIdentifier:(unsigned long)identifier;	// 0x304f8745
- (void)_replaceSelectionWithNode:(id)node matchStyle:(BOOL)style;	// 0x3054d019
- (void)_resetZoom:(id)zoom isTextOnly:(BOOL)only;	// 0x3054adc1
- (id)_resourceLoadDelegateForwarder;	// 0x304f2b11
- (id)_responderForResponderOperations;	// 0x3050933d
- (void)_retrieveKeyboardUIModeFromPreferences:(id)preferences;	// 0x30552061
- (void)_scheduleCompositingLayerSync;	// 0x304fe255
- (id)_selectedOrMainFrame;	// 0x3054d35d
- (void)_selectionChanged;	// 0x3050559d
- (BOOL)_selectionIsAll;	// 0x30552031
- (BOOL)_selectionIsCaret;	// 0x30551e4d
- (void)_setAllowsMessaging:(BOOL)messaging;	// 0x304ea125
- (void)_setCatchesDelegateExceptions:(BOOL)exceptions;	// 0x30549261
- (void)_setCookieEnabled:(BOOL)enabled;	// 0x30549209
- (void)_setCustomHTMLTokenizerChunkSize:(int)size;	// 0x3054eff9
- (void)_setCustomHTMLTokenizerTimeDelay:(double)delay;	// 0x3054efc1
- (void)_setFixedLayoutSize:(CGSize)size;	// 0x304ea771
- (void)_setFormDelegate:(id)delegate;	// 0x304ea0c1
- (void)_setGeolocationProvider:(id)provider;	// 0x30549561
- (void)_setInViewSourceMode:(BOOL)viewSourceMode;	// 0x3054e621
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)bitmap;	// 0x3054930d
- (void)_setJavaScriptURLsAreAllowed:(BOOL)allowed;	// 0x3054f081
- (BOOL)_setMediaLayer:(id)layer forPluginView:(id)pluginView;	// 0x304fe2f9
- (void)_setMouseDownEvent:(id)event;	// 0x30552775
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)synchronization;	// 0x304fe0e9
- (void)_setNetworkStateIsOnline:(BOOL)online;	// 0x304ed6bd
- (void)_setPostsAcceleratedCompositingNotifications:(BOOL)notifications;	// 0x305492f1
- (void)_setShouldCacheFileURLs:(BOOL)_set;	// 0x30549111
- (void)_setToolTip:(id)tip;	// 0x30502699
- (void)_setUIKitDelegate:(id)delegate;	// 0x304e988d
- (void)_setUseFastImageScalingMode:(BOOL)mode;	// 0x3054e6a9
- (void)_setUsesLoaderCache:(BOOL)cache;	// 0x304ebd79
- (void)_setZoomMultiplier:(float)multiplier isTextOnly:(BOOL)only;	// 0x304e7d31
- (BOOL)_shouldCacheFileURLs;	// 0x3054912d
- (BOOL)_shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x30509c19
- (void)_startAllPlugIns;	// 0x30503ae1
- (void)_stopAllPlugIns;	// 0x30503905
- (void)_stopAutoscrollTimer;	// 0x30552a09
- (BOOL)_syncCompositingChanges;	// 0x304fe3b9
- (id)_touchEventRegions;	// 0x30501b05
- (void)_updateActiveState;	// 0x304ea069
- (BOOL)_usesDocumentViews;	// 0x304e7251
- (BOOL)_usesLoaderCache;	// 0x305490f5
- (id)_videoProxyPluginForMIMEType:(id)mimetype;	// 0x304fd4a9
- (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype;	// 0x30549609
- (void)_viewWillDrawInternal;	// 0x304feded
- (id)_webMailDelegate;	// 0x304ed571
- (id)_webcore_effectiveFirstResponder;	// 0x3054a549
- (void)_willStartScrollingOrZooming;	// 0x30549681
- (void)_zoomIn:(id)anIn isTextOnly:(BOOL)only;	// 0x3054af05
- (float)_zoomMultiplier:(BOOL)multiplier;	// 0x3054b1bd
- (void)_zoomOut:(id)anOut isTextOnly:(BOOL)only;	// 0x3054afc1
- (BOOL)acceptsFirstResponder;	// 0x3054a639
- (void)addCaretChangeListener:(id)listener;	// 0x305499e9
- (void)addVisitedLinks:(id)links;	// 0x305518cd
- (void)alignCenter:(id)center;	// 0x3054c22d
- (void)alignJustified:(id)justified;	// 0x3054c249
- (void)alignLeft:(id)left;	// 0x3054c265
- (void)alignRight:(id)right;	// 0x3054c281
// converted property getter: - (BOOL)allowsUndo;	// 0x30549479
// converted property getter: - (id)applicationNameForUserAgent;	// 0x30508b61
- (void)applyStyle:(id)style;	// 0x30551ff9
- (BOOL)areMemoryCacheDelegateCallsEnabled;	// 0x305492b5
- (id)backForwardList;	// 0x304ea15d
// converted property getter: - (CGColorRef)backgroundColor;	// 0x304e76f1
- (BOOL)becomeFirstResponder;	// 0x3054a5c9
- (BOOL)canGoBack;	// 0x304f7425
- (BOOL)canGoForward;	// 0x304f7465
- (BOOL)canMakeTextLarger;	// 0x3054bc59
- (BOOL)canMakeTextSmaller;	// 0x3054bbad
- (BOOL)canMakeTextStandardSize;	// 0x3054bd05
- (BOOL)canMarkAllTextMatches;	// 0x30551501
- (BOOL)canResetPageZoom;	// 0x3054bfbd
- (BOOL)canZoomPageIn;	// 0x3054bf5d
- (BOOL)canZoomPageOut;	// 0x3054bf8d
- (void)capitalizeWord:(id)word;	// 0x3054c29d
// converted property getter: - (id)caretChangeListener;	// 0x3054918d
- (id)caretChangeListeners;	// 0x305491c5
- (void)caretChanged;	// 0x3054e4a5
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x3054c2b9
- (void)changeAttributes:(id)attributes;	// 0x3054c2d5
- (void)changeBaseWritingDirection:(id)direction;	// 0x3054c2f1
- (void)changeBaseWritingDirectionToLTR:(id)ltr;	// 0x3054c30d
- (void)changeBaseWritingDirectionToRTL:(id)rtl;	// 0x3054c329
- (void)changeColor:(id)color;	// 0x3054c345
- (void)changeDocumentBackgroundColor:(id)color;	// 0x3054c361
- (void)changeFont:(id)font;	// 0x3054c37d
- (void)changeSpelling:(id)spelling;	// 0x3054c399
- (void)checkSpelling:(id)spelling;	// 0x3054c3b5
- (void)clearText:(id)text;	// 0x3054cfd9
- (void)close;	// 0x3054b611
- (void)complete:(id)complete;	// 0x3054c3d1
- (id)computedStyleForElement:(id)element pseudoElement:(id)element2;	// 0x3054bfed
- (void)copy:(id)copy;	// 0x3054c3ed
- (void)copyFont:(id)font;	// 0x3054c409
- (unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x3050a575
- (BOOL)cssAnimationsSuspended;	// 0x30549345
// converted property getter: - (id)currentNodeHighlight;	// 0x305493d9
// converted property getter: - (id)customTextEncodingName;	// 0x3054a97d
// converted property getter: - (id)customUserAgent;	// 0x3054ac4d
- (void)cut:(id)cut;	// 0x3054c425
- (void)dealloc;	// 0x3054b67d
// converted property getter: - (BOOL)defersCallbacks;	// 0x304fdfc1
- (void)delete:(id)aDelete;	// 0x3054c441
- (void)deleteBackward:(id)backward;	// 0x3054c45d
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x3054c479
- (void)deleteForward:(id)forward;	// 0x3054c495
- (void)deleteSelection;	// 0x30551f95
- (void)deleteToBeginningOfLine:(id)line;	// 0x3054c4b1
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x3054c4cd
- (void)deleteToEndOfLine:(id)line;	// 0x3054c4e9
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x3054c505
- (void)deleteToMark:(id)mark;	// 0x3054c521
- (void)deleteWordBackward:(id)backward;	// 0x3054c53d
- (void)deleteWordForward:(id)forward;	// 0x3054c559
- (id)documentViewAtWindowPoint:(CGPoint)windowPoint;	// 0x3054a79d
// converted property getter: - (id)downloadDelegate;	// 0x304e6975
- (void)drawRect:(CGRect)rect;	// 0x304ecb09
- (void)drawSingleRect:(CGRect)rect;	// 0x3054d5f9
// converted property getter: - (BOOL)drawsBackground;	// 0x304e76c5
- (id)editableDOMRangeForPoint:(CGPoint)point;	// 0x30551b3d
// converted property getter: - (id)editingDelegate;	// 0x305494f5
- (id)elementAtPoint:(CGPoint)point;	// 0x3054a68d
- (double)estimatedProgress;	// 0x304f7bfd
- (void)finalize;	// 0x3054b639
// converted property getter: - (id)frameLoadDelegate;	// 0x304f0ff5
- (BOOL)goBack;	// 0x3054b315
- (void)goBack:(id)back;	// 0x3054bb61
- (BOOL)goForward;	// 0x3054b2cd
- (void)goForward:(id)forward;	// 0x3054bb75
- (BOOL)goToBackForwardItem:(id)backForwardItem;	// 0x3054b291
// converted property getter: - (id)groupName;	// 0x3054a459
// converted property getter: - (id)historyDelegate;	// 0x304f4e8d
// converted property getter: - (id)hostWindow;	// 0x305493b5
- (void)ignoreSpelling:(id)spelling;	// 0x3054c575
- (void)indent:(id)indent;	// 0x3054c591
- (void)insertBacktab:(id)backtab;	// 0x3054c5ad
- (void)insertLineBreak:(id)aBreak;	// 0x3054c5c9
- (void)insertNewline:(id)newline;	// 0x3054c5e5
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x3054c601
- (void)insertParagraphSeparator:(id)separator;	// 0x3054c61d
- (void)insertTab:(id)tab;	// 0x3054c639
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x3054c655
- (void)insertText:(id)text;	// 0x305092b5
- (id)inspector;	// 0x30549829
- (BOOL)isAutomaticDashSubstitutionEnabled;	// 0x30549519
- (BOOL)isAutomaticLinkDetectionEnabled;	// 0x30549515
- (BOOL)isAutomaticQuoteSubstitutionEnabled;	// 0x30549511
- (BOOL)isAutomaticSpellingCorrectionEnabled;	// 0x30549521
- (BOOL)isAutomaticTextReplacementEnabled;	// 0x3054951d
// converted property getter: - (BOOL)isContinuousSpellCheckingEnabled;	// 0x3050551d
// converted property getter: - (BOOL)isEditable;	// 0x304eac51
- (BOOL)isFlipped;	// 0x30549041
- (BOOL)isLoading;	// 0x3054a3cd
// converted property getter: - (BOOL)isSelectTrailingWhitespaceEnabled;	// 0x30549299
- (void)lowercaseWord:(id)word;	// 0x3054c671
- (id)mainFrame;	// 0x304ea6b1
- (id)mainFrameDocument;	// 0x3054a349
- (id)mainFrameTitle;	// 0x3054a38d
// converted property getter: - (id)mainFrameURL;	// 0x304f11a5
- (BOOL)maintainsInactiveSelection;	// 0x305494d5
- (void)makeBaseWritingDirectionLeftToRight:(id)right;	// 0x3054c68d
- (void)makeBaseWritingDirectionRightToLeft:(id)left;	// 0x3054c6a9
- (void)makeTextLarger:(id)larger;	// 0x3054bcad
- (void)makeTextSmaller:(id)smaller;	// 0x3054bc01
- (void)makeTextStandardSize:(id)size;	// 0x3054bd59
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x3054c6c5
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x3054c6e1
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x3054c6fd
- (unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit;	// 0x3054be49
// converted property getter: - (id)mediaStyle;	// 0x304e7b59
// converted property getter: - (float)mediaVolume;	// 0x305494b1
- (void)mouseDown:(id)down;	// 0x305527f1
- (void)mouseUp:(id)up;	// 0x30552a85
- (void)moveBackward:(id)backward;	// 0x3054c719
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x3054c735
- (void)moveDown:(id)down;	// 0x3054c751
- (void)moveDownAndModifySelection:(id)selection;	// 0x3054c76d
- (void)moveForward:(id)forward;	// 0x3054c789
- (void)moveForwardAndModifySelection:(id)selection;	// 0x3054c7a5
- (void)moveLeft:(id)left;	// 0x3054c7c1
- (void)moveLeftAndModifySelection:(id)selection;	// 0x3054c7dd
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x3054c7f9
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x3054c815
- (void)moveRight:(id)right;	// 0x3054c831
- (void)moveRightAndModifySelection:(id)selection;	// 0x3054c84d
- (void)moveToBeginningOfDocument:(id)document;	// 0x3054c869
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x3054c885
- (void)moveToBeginningOfLine:(id)line;	// 0x3054c8a1
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x3054c8bd
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x3054c8d9
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x3054c8f5
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x3054c911
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x3054c92d
- (void)moveToEndOfDocument:(id)document;	// 0x3054c949
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x3054c965
- (void)moveToEndOfLine:(id)line;	// 0x3054c981
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x3054c99d
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x3054c9b9
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x3054c9d5
- (void)moveToEndOfSentence:(id)sentence;	// 0x3054c9f1
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x3054ca0d
- (void)moveToLeftEndOfLine:(id)line;	// 0x3054ca29
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x3054ca45
- (void)moveToRightEndOfLine:(id)line;	// 0x3054ca61
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x3054ca7d
- (void)moveUp:(id)up;	// 0x3054ca99
- (void)moveUpAndModifySelection:(id)selection;	// 0x3054cab5
- (void)moveWordBackward:(id)backward;	// 0x3054cad1
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x3054caed
- (void)moveWordForward:(id)forward;	// 0x3054cb09
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x3054cb25
- (void)moveWordLeft:(id)left;	// 0x3054cb41
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x3054cb5d
- (void)moveWordRight:(id)right;	// 0x3054cb79
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x3054cb95
- (void)orderFrontSubstitutionsPanel:(id)panel;	// 0x3054cbcd
- (void)outdent:(id)outdent;	// 0x3054cbb1
- (Page *)page;	// 0x304f9839
- (void)pageDown:(id)down;	// 0x3054cbe9
- (void)pageDownAndModifySelection:(id)selection;	// 0x3054cc05
// converted property getter: - (float)pageSizeMultiplier;	// 0x3054bf21
- (void)pageUp:(id)up;	// 0x3054cc21
- (void)pageUpAndModifySelection:(id)selection;	// 0x3054cc3d
- (void)paste:(id)paste;	// 0x3054cc59
- (void)pasteAsPlainText:(id)text;	// 0x3054cc75
- (void)pasteAsRichText:(id)text;	// 0x3054cc91
- (void)pasteFont:(id)font;	// 0x3054ccad
- (void)performFindPanelAction:(id)action;	// 0x3054ccc9
// converted property getter: - (id)policyDelegate;	// 0x30549399
// converted property getter: - (id)preferences;	// 0x304e5d21
// converted property getter: - (id)preferencesIdentifier;	// 0x3054b35d
- (id)previousValidKeyView;	// 0x3054a0c9
- (id)quickLookContent;	// 0x304ef981
- (id)rectsForTextMatches;	// 0x30551639
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x304e9af1
- (void)reload:(id)reload;	// 0x3054d979
- (void)reloadFromOrigin:(id)origin;	// 0x3054bb89
- (void)removeAllCaretChangeListeners;	// 0x30549aa9
- (void)removeCaretChangeListener:(id)listener;	// 0x30549a75
- (void)replaceSelectionWithArchive:(id)archive;	// 0x3054c1f5
- (void)replaceSelectionWithMarkupString:(id)markupString;	// 0x3054c1b5
- (void)replaceSelectionWithNode:(id)node;	// 0x3054c151
- (void)replaceSelectionWithText:(id)text;	// 0x3054c185
- (void)resetPageZoom:(id)zoom;	// 0x3054bfd5
// converted property getter: - (id)resourceLoadDelegate;	// 0x304e6959
// converted property getter: - (id)scriptDebugDelegate;	// 0x304f8d6d
- (void)scrollDOMRangeToVisible:(id)visible;	// 0x3054be7d
- (void)scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x3054bec1
- (void)scrollLineDown:(id)down;	// 0x3054cce5
- (void)scrollLineUp:(id)up;	// 0x3054cd01
- (void)scrollPageDown:(id)down;	// 0x3054cd1d
- (void)scrollPageUp:(id)up;	// 0x3054cd39
- (void)scrollToBeginningOfDocument:(id)document;	// 0x3054cd55
- (void)scrollToEndOfDocument:(id)document;	// 0x3054cd71
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x3054a499
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x305512d9
- (void)selectAll:(id)all;	// 0x3054cd8d
- (void)selectLine:(id)line;	// 0x3054cda9
- (void)selectParagraph:(id)paragraph;	// 0x3054cdc5
- (void)selectSentence:(id)sentence;	// 0x3054cde1
- (void)selectToMark:(id)mark;	// 0x3054cdfd
- (void)selectWord:(id)word;	// 0x3054ce19
- (id)selectedDOMRange;	// 0x30551ccd
- (id)selectedFrame;	// 0x30505631
- (int)selectionAffinity;	// 0x30551e25
// converted property setter: - (void)setAllowsUndo:(BOOL)undo;	// 0x30549495
// converted property setter: - (void)setApplicationNameForUserAgent:(id)userAgent;	// 0x3054ac95
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3054e9dd
- (void)setCSSAnimationsSuspended:(BOOL)suspended;	// 0x3054f11d
// converted property setter: - (void)setCaretChangeListener:(id)listener;	// 0x305491a9
// converted property setter: - (void)setContinuousSpellCheckingEnabled:(BOOL)enabled;	// 0x305063e1
// converted property setter: - (void)setCurrentNodeHighlight:(id)highlight;	// 0x3054a2b1
// converted property setter: - (void)setCustomTextEncodingName:(id)name;	// 0x3054a9fd
// converted property setter: - (void)setCustomUserAgent:(id)agent;	// 0x304ec305
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x304f126d
// converted property setter: - (void)setDownloadDelegate:(id)delegate;	// 0x304ebcf9
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x30504a81
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x30551ee1
// converted property setter: - (void)setEditingDelegate:(id)delegate;	// 0x304e98f1
// converted property setter: - (void)setFrameLoadDelegate:(id)delegate;	// 0x304eb1a9
- (void)setFrameSize:(CGSize)size;	// 0x3054d76d
// converted property setter: - (void)setGroupName:(id)name;	// 0x304e7e0d
// converted property setter: - (void)setHistoryDelegate:(id)delegate;	// 0x3054be15
// converted property setter: - (void)setHostWindow:(id)window;	// 0x3054a7c1
- (void)setMainFrameDocumentReady:(BOOL)ready;	// 0x304e6a3d
// converted property setter: - (void)setMainFrameURL:(id)url;	// 0x3054a3e1
- (void)setMaintainsBackForwardList:(BOOL)list;	// 0x304e9851
- (void)setMark:(id)mark;	// 0x3054ce35
// converted property setter: - (void)setMediaStyle:(id)style;	// 0x3054abe9
// converted property setter: - (void)setMediaVolume:(float)volume;	// 0x30551899
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)enabled;	// 0x3054f051
- (void)setNextKeyView:(id)view;	// 0x3054a4c1
// converted property setter: - (void)setPageSizeMultiplier:(float)multiplier;	// 0x3054bf09
// converted property setter: - (void)setPolicyDelegate:(id)delegate;	// 0x304eb7f5
// converted property setter: - (void)setPreferences:(id)preferences;	// 0x3054b431
// converted property setter: - (void)setPreferencesIdentifier:(id)identifier;	// 0x3054b381
// converted property setter: - (void)setResourceLoadDelegate:(id)delegate;	// 0x304eb859
// converted property setter: - (void)setScriptDebugDelegate:(id)delegate;	// 0x3054bdc5
// converted property setter: - (void)setSelectTrailingWhitespaceEnabled:(BOOL)enabled;	// 0x30549cf1
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity;	// 0x30551e7d
// converted property setter: - (void)setShouldCloseWithWindow:(BOOL)closeWithWindow;	// 0x30549361
// converted property setter: - (void)setShouldUpdateWhileOffscreen:(BOOL)updateWhileOffscreen;	// 0x3054a2f9
// converted property setter: - (void)setSmartInsertDeleteEnabled:(BOOL)enabled;	// 0x3054c075
// converted property setter: - (void)setTabKeyCyclesThroughElements:(BOOL)elements;	// 0x305493f5
// converted property setter: - (void)setTextSizeMultiplier:(float)multiplier;	// 0x3054b239
// converted property setter: - (void)setTypingStyle:(id)style;	// 0x3054c029
// converted property setter: - (void)setUIDelegate:(id)delegate;	// 0x304ebd15
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x30549cb1
- (void)setWebMailDelegate:(id)delegate;	// 0x30549171
- (BOOL)shouldClose;	// 0x30551615
// converted property getter: - (BOOL)shouldCloseWithWindow;	// 0x3054937d
// converted property getter: - (BOOL)shouldUpdateWhileOffscreen;	// 0x304e7729
- (void)showGuessPanel:(id)panel;	// 0x3054ce51
// converted property getter: - (BOOL)smartInsertDeleteEnabled;	// 0x305494d9
- (void)startSpeaking:(id)speaking;	// 0x3054ce6d
- (void)stopLoading:(id)loading;	// 0x3054d8dd
- (void)stopLoadingAndClear;	// 0x305511a1
- (void)stopSpeaking:(id)speaking;	// 0x3054ce89
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x3054a955
- (id)styleDeclarationWithText:(id)text;	// 0x3054c109
- (void)subscript:(id)subscript;	// 0x3054cea5
- (void)superscript:(id)superscript;	// 0x3054cec1
- (BOOL)supportsTextEncoding;	// 0x3054ab79
- (void)swapWithMark:(id)mark;	// 0x3054cedd
// converted property getter: - (BOOL)tabKeyCyclesThroughElements;	// 0x30549449
- (void)takeFindStringFromSelection:(id)selection;	// 0x3054cef9
- (void)takeStringURLFrom:(id)from;	// 0x3054bad5
- (id)textIteratorForRect:(CGRect)rect;	// 0x3054ea99
// converted property getter: - (float)textSizeMultiplier;	// 0x3054b1fd
- (void)toggleBaseWritingDirection:(id)direction;	// 0x3054cf15
- (void)transpose:(id)transpose;	// 0x3054cf31
// converted property getter: - (id)typingStyle;	// 0x3054c051
- (void)underline:(id)underline;	// 0x3054cf4d
- (id)undoManager;	// 0x3050a325
- (void)unmarkAllTextMatches;	// 0x30551589
- (void)unscript:(id)unscript;	// 0x3054cf69
- (void)uppercaseWord:(id)word;	// 0x3054cf85
- (id)userAgentForURL:(id)url;	// 0x304effcd
// converted property getter: - (BOOL)usesPageCache;	// 0x304e9385
- (void)viewDidMoveToWindow;	// 0x304e9ff1
- (void)viewWillDraw;	// 0x304ec7dd
- (id)windowScriptObject;	// 0x304fd949
- (void)yank:(id)yank;	// 0x3054cfa1
- (void)yankAndSelect:(id)select;	// 0x3054cfbd
- (void)zoomPageIn:(id)anIn;	// 0x3054bf75
- (void)zoomPageOut:(id)anOut;	// 0x3054bfa5
@end

