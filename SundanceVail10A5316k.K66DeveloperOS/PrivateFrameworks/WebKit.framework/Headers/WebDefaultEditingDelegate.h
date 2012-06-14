/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject {
}
+ (id)sharedEditingDelegate;	// 0x3502399d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x350345f1
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x350345ed
- (id)undoManagerForWebView:(id)webView;	// 0x3502845d
- (BOOL)webView:(id)view doCommandBySelector:(SEL)selector;	// 0x350345e9
- (BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;	// 0x350345dd
- (BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;	// 0x350239e5
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x350345d9
- (BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;	// 0x350345e5
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x350345d5
- (BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;	// 0x350345c9
- (BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;	// 0x350345cd
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x350345d1
- (BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;	// 0x350345e1
- (BOOL)webView:(id)view shouldShowDeleteInterfaceForElement:(id)element;	// 0x350345c5
- (void)webViewDidBeginEditing:(id)webView;	// 0x350345f5
- (void)webViewDidChange:(id)webView;	// 0x350345f9
- (void)webViewDidChangeSelection:(id)webView;	// 0x35034605
- (void)webViewDidChangeTypingStyle:(id)webView;	// 0x35034601
- (void)webViewDidEndEditing:(id)webView;	// 0x350345fd
@end
