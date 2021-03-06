/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBKeyView.h"
#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UIImageView, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPicker : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {
	UIImageView *_container;	// 112 = 0x70
	UITableView *_picker;	// 116 = 0x74
	UIImageView *_innerShadow;	// 120 = 0x78
}
@property(readonly, retain) UIImageView *container;	// G=0x32017c61; converted property
@property(readonly, assign) UITableView *picker;	// G=0x32017d65; @synthesize=_picker
- (id)initWithFrame:(CGRect)frame;	// 0x32017a0d
// converted property getter: - (id)container;	// 0x32017c61
- (id)containerView;	// 0x32017911
- (void)dealloc;	// 0x32017c71
- (id)defaultIndexPath;	// 0x320178f1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x32017ced
// declared property getter: - (id)picker;	// 0x32017d65
- (BOOL)shouldCache;	// 0x32017ce9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32017d0d
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x32017d11
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32017cf1
@end

