/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControl.h"

@class BRControllerStack, NSMutableDictionary, BRContextMenuControl;

@interface BRController : BRControl {
@private
	NSMutableDictionary *_labels;	// 44 = 0x2c
	BRControllerStack *_stack;	// 48 = 0x30
	BOOL _depthLimited;	// 52 = 0x34
	BRContextMenuControl *_contextMenu;	// 56 = 0x38
}
@property(assign) BOOL depthLimited;	// G=0x32944635; S=0x32944625; converted property
@property(retain) BRControllerStack *stack;	// G=0x32929641; S=0x32913395; converted property
+ (id)controllerWithContentControl:(id)contentControl;	// 0x32944755
- (id)init;	// 0x32913189
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x32944679
- (void)addLabel:(id)label;	// 0x32921999
- (BOOL)brEventAction:(id)action;	// 0x32944819
- (BOOL)canBeRemovedFromStack;	// 0x32944621
- (int)contextMenuDimOption;	// 0x32944671
- (BOOL)contextMenuIsVisible;	// 0x32944701
- (id)controlForContextMenuPositioning;	// 0x32944665
- (id)controlForContextMenuStart;	// 0x32944669
- (id)controlToDim;	// 0x3294466d
- (void)controlWasDeactivated;	// 0x32944ad1
- (void)dealloc;	// 0x3291fe11
// converted property getter: - (BOOL)depthLimited;	// 0x32944635
- (id)description;	// 0x329337c5
- (void)dismissContextMenu;	// 0x329446c1
- (long)errorNumberForNoContent;	// 0x32944649
- (BOOL)isLabelled:(id)labelled;	// 0x32929651
- (BOOL)isNetworkDependent;	// 0x32913419
- (BOOL)isValidAfterDataUpdate;	// 0x32944645
- (id)providersForContextMenu;	// 0x32944661
- (BOOL)recreateOnReselect;	// 0x3292dd55
- (void)removeLabel:(id)label;	// 0x3292c539
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x32944625
// converted property setter: - (void)setStack:(id)stack;	// 0x32913395
// converted property getter: - (id)stack;	// 0x32929641
- (BOOL)topOfStack;	// 0x32944729
- (id)transitionType;	// 0x32944651
- (void)wasBuried;	// 0x329446ad
- (void)wasExhumed;	// 0x32944675
- (void)wasPopped;	// 0x3291fdbd
- (void)wasPushed;	// 0x3291f4f9
@end
