/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityItemProvider.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityItemProvider : UIActivityItemProvider {
	UIDocumentInteractionController *_documentInteractionController;	// 32 = 0x20
}
@property(assign) UIDocumentInteractionController *documentInteractionController;	// G=0x31f0b8ed; S=0x31f0b901; @synthesize=_documentInteractionController
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x31f0b881
- (id)activityViewControllerPlaceholderItem:(id)item;	// 0x31f0b779
// declared property getter: - (id)documentInteractionController;	// 0x31f0b8ed
- (id)item;	// 0x31f0b759
// declared property setter: - (void)setDocumentInteractionController:(id)controller;	// 0x31f0b901
@end

