/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewCellDeleteConfirmationControl, UITableViewCellReorderControl, UITableViewCell, UIView, UITableViewCellEditControl;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject {
@private
	UITableViewCell *_cell;	// 4 = 0x4
	int _editingStyle;	// 8 = 0x8
	UITableViewCellEditControl *_editControl;	// 12 = 0xc
	UITableViewCellReorderControl *_reorderControl;	// 16 = 0x10
	UITableViewCellDeleteConfirmationControl *_deleteConfirmationControl;	// 20 = 0x14
	UIView *_reorderSeparatorView;	// 24 = 0x18
}
@property(readonly, assign, nonatomic, getter=isDataRequired) BOOL dataRequired;	// G=0x307c79c5; 
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x306c835d
- (void)dealloc;	// 0x306ca551
- (id)deleteConfirmationControl:(BOOL)control;	// 0x306c8e15
- (id)editControl:(BOOL)control;	// 0x306c8465
// declared property getter: - (BOOL)isDataRequired;	// 0x307c79c5
- (id)reorderControl:(BOOL)control;	// 0x306c8b39
- (id)reorderSeparatorView:(BOOL)view;	// 0x306c8bc9
@end
