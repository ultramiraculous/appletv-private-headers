/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPluginManualLoader.h"
#import "WebPluginContainerCheckController.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, WAKView, NSMutableArray, WebDataSource;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
@private
	WAKView *_documentView;	// 4 = 0x4
	WebDataSource *_dataSource;	// 8 = 0x8
	NSMutableArray *_views;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	NSMutableSet *_checksInProgress;	// 20 = 0x14
	NSMutableArray *_viewsNotInDocument;	// 24 = 0x18
}
+ (void)addPlugInView:(id)view;	// 0x3501add1
+ (BOOL)isPlugInView:(id)view;	// 0x35019909
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x3501aae9
+ (void)pluginViewHidden:(id)hidden;	// 0x35075441
- (id)initWithDocumentView:(id)documentView;	// 0x35004e7d
- (id)URLPolicyCheckReferrer;	// 0x350758f5
- (void)_cancelOutstandingChecks;	// 0x3501e8a9
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x3507545d
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x350754b9
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x3501b7bd
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x3501ad79
- (void)addPlugin:(id)plugin;	// 0x3501af31
- (void)dealloc;	// 0x3501e9c1
- (void)destroyAllPlugins;	// 0x3501e649
- (void)destroyOnePlugin:(id)plugin;	// 0x3501c6e9
- (void)destroyPlugin:(id)plugin;	// 0x3501c4c1
- (BOOL)plugInsAreRunning;	// 0x35075271
- (void)pluginView:(id)view receivedData:(id)data;	// 0x35075b8d
- (void)pluginView:(id)view receivedError:(id)error;	// 0x35075bcd
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x3507594d
- (void)pluginViewCreated:(id)created;	// 0x3501ae29
- (void)pluginViewFinishedLoading:(id)loading;	// 0x35075c0d
- (BOOL)processingUserGesture;	// 0x350754ad
- (void)restorePluginsFromCache;	// 0x35075311
- (void)setDataSource:(id)source;	// 0x3500546d
- (void)showStatus:(id)status;	// 0x350758e5
- (void)startAllPlugins;	// 0x3500849d
- (void)stopAllPlugins;	// 0x3501e7b1
- (void)stopOnePlugin:(id)plugin;	// 0x3501c59d
- (void)stopOnePluginForPageCache:(id)pageCache;	// 0x3501da61
- (void)stopPluginsForPageCache;	// 0x3501d975
- (id)superlayerForPluginView:(id)pluginView;	// 0x350752d1
- (id)webFrame;	// 0x3501ad31
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x35075835
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x35075529
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x35075885
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x350757e5
- (id)webView;	// 0x3501b285
@end

