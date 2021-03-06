/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableSet, BRControllerStack, BRContextMenuControl, NSString;

__attribute__((visibility("hidden")))
@interface BRController : BRControl {
	NSMutableSet *_labels;	// 84 = 0x54
	BRControllerStack *_stack;	// 88 = 0x58
	BOOL _depthLimited;	// 92 = 0x5c
	BRContextMenuControl *_contextMenu;	// 96 = 0x60
	NSString *_title;	// 100 = 0x64
	id _wasPushedBlock;	// 104 = 0x68
	id _wasPoppedBlock;	// 108 = 0x6c
	id _wasBuriedBlock;	// 112 = 0x70
	id _wasExhumedBlock;	// 116 = 0x74
	int _maxDepthLimit;	// 120 = 0x78
	NSString *_depthLimitLabel;	// 124 = 0x7c
	BOOL _showsHeader;	// 128 = 0x80
}
@property(retain, nonatomic) NSString *depthLimitLabel;	// G=0x28df19; S=0x28df29; @synthesize=_depthLimitLabel
@property(assign) BOOL depthLimited;	// G=0x28dd51; S=0x28dd09; converted property
@property(assign, nonatomic) int maxDepthLimit;	// G=0x28def9; S=0x28df09; @synthesize=_maxDepthLimit
@property(assign, nonatomic) BOOL showsHeader;	// G=0x28df39; S=0x28df49; @synthesize=_showsHeader
@property(retain) BRControllerStack *stack;	// G=0x28dc0d; S=0x28dbfd; converted property
@property(copy, nonatomic) NSString *title;	// G=0x28de45; S=0x28de59; @synthesize=_title
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x28deb1; S=0x28dec5; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x28ded5; S=0x28dee9; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x28de8d; S=0x28dea1; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x28de69; S=0x28de7d; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x28d841
- (id)init;	// 0x28d87d
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x28e1c5
- (void)_handleWindowMaxBoundsChanged;	// 0x28dd7d
- (BOOL)_showContextMenu;	// 0x28e201
- (void)addLabel:(id)label;	// 0x28dc51
- (BOOL)brEventAction:(id)action;	// 0x28dab9
- (BOOL)canBeRemovedFromStack;	// 0x28dc4d
- (id)cancelProviderForContextMenu;	// 0x28df5d
- (int)contextMenuDimOption;	// 0x28e119
- (BOOL)contextMenuIsVisible;	// 0x28e0a5
- (id)controlForContextMenuPositioning;	// 0x28e035
- (id)controlForContextMenuStart;	// 0x28e039
- (id)controlToDim;	// 0x28e115
- (void)controlWasDeactivated;	// 0x28da79
- (void)dealloc;	// 0x28d971
// declared property getter: - (id)depthLimitLabel;	// 0x28df19
// converted property getter: - (BOOL)depthLimited;	// 0x28dd51
- (id)description;	// 0x28db51
- (void)dismissContextMenu;	// 0x28e0d1
- (long)errorNumberForNoContent;	// 0x28dd65
- (BOOL)isLabelled:(id)labelled;	// 0x28dcdd
- (BOOL)isNetworkDependent;	// 0x28dd01
- (BOOL)isValidAfterDataUpdate;	// 0x28dd61
// declared property getter: - (int)maxDepthLimit;	// 0x28def9
- (id)providersForContextMenu;	// 0x28df59
- (BOOL)recreateOnReselect;	// 0x28dd05
- (void)removeLabel:(id)label;	// 0x28dcbd
// declared property setter: - (void)setDepthLimitLabel:(id)label;	// 0x28df29
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x28dd09
// declared property setter: - (void)setMaxDepthLimit:(int)limit;	// 0x28df09
// declared property setter: - (void)setShowsHeader:(BOOL)header;	// 0x28df49
// converted property setter: - (void)setStack:(id)stack;	// 0x28dbfd
// declared property setter: - (void)setTitle:(id)title;	// 0x28de59
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x28dec5
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x28dee9
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x28dea1
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x28de7d
- (void)showDetailContextMenuWithProvider:(id)provider initialSelection:(long)selection;	// 0x28e03d
// declared property getter: - (BOOL)showsHeader;	// 0x28df39
// converted property getter: - (id)stack;	// 0x28dc0d
// declared property getter: - (id)title;	// 0x28de45
- (BOOL)topOfStack;	// 0x28dc1d
- (id)transitionType;	// 0x28dd6d
- (void)wasBuried;	// 0x28e171
// declared property getter: - (id)wasBuriedBlock;	// 0x28deb1
- (void)wasExhumed;	// 0x28e1a9
// declared property getter: - (id)wasExhumedBlock;	// 0x28ded5
- (void)wasPopped;	// 0x28e139
// declared property getter: - (id)wasPoppedBlock;	// 0x28de8d
- (void)wasPushed;	// 0x28e11d
// declared property getter: - (id)wasPushedBlock;	// 0x28de69
@end

