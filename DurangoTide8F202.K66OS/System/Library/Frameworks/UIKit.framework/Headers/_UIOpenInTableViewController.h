/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIOpenInTableViewController : UITableViewController {
@private
	UIDocumentInteractionController *_documentInteractionController;	// 144 = 0x90
}
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x3083c24d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3083c099
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3083bff1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3083c21d
@end

