/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPluginManualLoader.h"
#import "WebPluginContainerCheckController.h"
#import <NSObject.h> // Unknown library

@class WebDataSource, WAKView, NSMutableSet, NSMutableArray;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
	WAKView *_documentView;	// 4 = 0x4
	WebDataSource *_dataSource;	// 8 = 0x8
	NSMutableArray *_views;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	NSMutableSet *_checksInProgress;	// 20 = 0x14
	NSMutableArray *_viewsNotInDocument;	// 24 = 0x18
}
+ (void)addPlugInView:(id)view;	// 0x36783091
+ (BOOL)isPlugInView:(id)view;	// 0x3677e5e9
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x36782d2d
+ (void)pluginViewHidden:(id)hidden;	// 0x367d4275
- (id)initWithDocumentView:(id)documentView;	// 0x36770b0d
- (id)URLPolicyCheckReferrer;	// 0x367d4751
- (void)_cancelOutstandingChecks;	// 0x36784fe1
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x367d4291
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x367d42ed
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x36785a29
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x36783039
- (void)addPlugin:(id)plugin;	// 0x36783891
- (void)dealloc;	// 0x367850f9
- (void)destroyAllPlugins;	// 0x36784d81
- (void)destroyOnePlugin:(id)plugin;	// 0x36785781
- (void)destroyPlugin:(id)plugin;	// 0x3678554d
- (BOOL)plugInsAreRunning;	// 0x367d40a5
- (void)pluginView:(id)view receivedData:(id)data;	// 0x367d49e9
- (void)pluginView:(id)view receivedError:(id)error;	// 0x367d4a29
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x367d47a9
- (void)pluginViewCreated:(id)created;	// 0x367830e9
- (void)pluginViewFinishedLoading:(id)loading;	// 0x367d4a69
- (BOOL)processingUserGesture;	// 0x367d42e1
- (void)restorePluginsFromCache;	// 0x367d4145
- (void)setDataSource:(id)source;	// 0x36771085
- (void)showStatus:(id)status;	// 0x367d4719
- (void)startAllPlugins;	// 0x367741fd
- (void)stopAllPlugins;	// 0x36784ee9
- (void)stopOnePlugin:(id)plugin;	// 0x36785629
- (void)stopOnePluginForPageCache:(id)pageCache;	// 0x36786015
- (void)stopPluginsForPageCache;	// 0x36785e99
- (id)superlayerForPluginView:(id)pluginView;	// 0x367d4105
- (id)webFrame;	// 0x36782ff1
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x367d4669
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x367d435d
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x367d46b9
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x367d4619
- (id)webView;	// 0x367d4729
@end

