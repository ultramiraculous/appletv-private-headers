/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UITableViewCellLayoutManager : NSObject {
}
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x356d5939
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x356daf11
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x356d5ee9
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x356d6039
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x356d60f9
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x356d5b21
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x356da37d
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x356db2d1
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x356da5ad
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x356dacdd
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356daee1
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x356d6335
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x357a3031
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357a41cd
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356da211
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357a262d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x357a328d
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x357a1f19
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x357bb089
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356d5af1
- (float)contentIndentationForCell:(id)cell;	// 0x356db775
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x359213f1
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x357baca5
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357a2d9d
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x359213e1
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x357fd129
- (id)defaultImageViewForCell:(id)cell;	// 0x356fb4e1
- (id)defaultLabelForCell:(id)cell;	// 0x35740061
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x357400a1
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x357a14d1
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x357baa8d
- (id)detailTextLabelForCell:(id)cell;	// 0x357a13cd
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356da341
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x357a26a5
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x356da56d
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357a2d6d
- (id)editableTextFieldForCell:(id)cell;	// 0x357bd1ad
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356db2a1
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x356da8b5
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x356db675
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357a4155
- (id)imageViewForCell:(id)cell;	// 0x356fb4d1
- (void)layoutSubviewsOfCell:(id)cell;	// 0x356d9475
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356da571
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x356fb57d
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x356dac05
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x357b6501
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x356daca1
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x356fb525
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x356dae8d
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3592142d
- (id)textLabelForCell:(id)cell;	// 0x357a13bd
@end

