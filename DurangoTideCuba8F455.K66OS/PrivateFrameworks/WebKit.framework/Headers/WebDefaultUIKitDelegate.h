/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject {
}
+ (id)sharedUIKitDelegate;	// 0x304eae89
- (void)addInputString:(id)string;	// 0x3051696d
- (id)checkSpellingOfString:(id)string;	// 0x30516981
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x305168c1
- (void)deleteFromInput;	// 0x30516971
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x305168d5
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x30516979
- (void)webView:(id)view attachRootLayer:(id)layer;	// 0x30516975
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x305168f1
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x30516941
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x3051693d
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x305168f5
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x305050f1
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x30516949
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x30516965
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x30516919
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x30516955
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x30516969
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x30516909
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x305168ed
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x30516951
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x3051694d
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x30516911
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x30516959
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x30516901
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x305168f9
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x30516925
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x30516985
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x30516939
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x30516961
- (void)webViewDidDrawTiles:(id)webView;	// 0x30516989
- (void)webViewDidLayout:(id)webView;	// 0x3051697d
- (void)webViewDidNotSimulateClick:(id)webView;	// 0x30516935
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x30516921
- (void)webViewDidSimulateClick:(id)webView;	// 0x3051692d
- (void)webViewWillSimulateClick:(id)webView;	// 0x30516931
@end

