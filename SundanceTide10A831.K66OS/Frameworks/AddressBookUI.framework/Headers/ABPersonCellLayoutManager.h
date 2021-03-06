/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCellLayoutManager.h> // Unknown library
#import "AddressBookUI-Structs.h"

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager {
	id<ABPersonCellLayoutManagerDelegate> _delegate;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
}
@property(assign, nonatomic) id<ABPersonCellLayoutManagerDelegate> delegate;	// G=0x371b3949; S=0x3715f775; @synthesize=_delegate
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3715f8b9; S=0x3715f785; @synthesize=_styleProvider
- (float)accessoryViewInsetForBounds:(CGRect)bounds;	// 0x3715f8f1
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x37165f35
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x371b340d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x371b3919
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x371b3861
- (id)cellAsMultiCell:(id)cell;	// 0x371b331d
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x37165ffd
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x371b34d5
- (void)dealloc;	// 0x3716d769
// declared property getter: - (id)delegate;	// 0x371b3949
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x371b359d
- (float)deleteConfirmationWidth;	// 0x371b33dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3715f775
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3715f785
// declared property getter: - (id)styleProvider;	// 0x3715f8b9
- (float)widthForCellContentViewInTableView:(id)tableView whenEditing:(BOOL)editing isShowingDeleteConfirmation:(BOOL)confirmation accessoryViewBounds:(CGRect)bounds;	// 0x3715f795
@end

