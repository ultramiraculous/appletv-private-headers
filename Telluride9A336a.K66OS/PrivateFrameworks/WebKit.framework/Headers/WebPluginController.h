/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebPluginManualLoader.h"
#import "WebPluginContainerCheckController.h"

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
+ (void)addPlugInView:(id)view;	// 0x3649341d
+ (BOOL)isPlugInView:(id)view;	// 0x36491d41
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x36493199
+ (void)pluginViewHidden:(id)hidden;	// 0x364dbef1
- (id)initWithDocumentView:(id)documentView;	// 0x36479931
- (id)URLPolicyCheckReferrer;	// 0x364dc169
- (void)_cancelOutstandingChecks;	// 0x36497989
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x364dc5b1
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x364dc4e5
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x36493ff9
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x364933c1
- (void)addPlugin:(id)plugin;	// 0x36493581
- (void)dealloc;	// 0x36497ab1
- (void)destroyAllPlugins;	// 0x364976fd
- (void)destroyOnePlugin:(id)plugin;	// 0x36495255
- (void)destroyPlugin:(id)plugin;	// 0x36495025
- (BOOL)plugInsAreRunning;	// 0x364dc759
- (void)pluginView:(id)view receivedData:(id)data;	// 0x364dbf81
- (void)pluginView:(id)view receivedError:(id)error;	// 0x364dbf45
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x364dbfbd
- (void)pluginViewCreated:(id)created;	// 0x36493475
- (void)pluginViewFinishedLoading:(id)loading;	// 0x364dbf0d
- (BOOL)processingUserGesture;	// 0x364dc559
- (void)restorePluginsFromCache;	// 0x364dc5f1
- (void)setDataSource:(id)source;	// 0x36479ea1
- (void)showStatus:(id)status;	// 0x364dc1c1
- (void)startAllPlugins;	// 0x3647cc2d
- (void)stopAllPlugins;	// 0x36497881
- (void)stopOnePlugin:(id)plugin;	// 0x364950f9
- (void)stopOnePluginForPageCache:(id)pageCache;	// 0x364967ad
- (void)stopPluginsForPageCache;	// 0x364966b1
- (id)superlayerForPluginView:(id)pluginView;	// 0x364dc719
- (id)webFrame;	// 0x36493379
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x364dc231
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x364dc2d1
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x364dc1d1
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x364dc281
- (id)webView;	// 0x364938c1
@end
