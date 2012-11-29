/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRControllerStack, BRContextMenuControl, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BRController : BRControl {
	NSMutableSet *_labels;	// 80 = 0x50
	BRControllerStack *_stack;	// 84 = 0x54
	BOOL _depthLimited;	// 88 = 0x58
	BRContextMenuControl *_contextMenu;	// 92 = 0x5c
	NSString *_title;	// 96 = 0x60
	id _wasPushedBlock;	// 100 = 0x64
	id _wasPoppedBlock;	// 104 = 0x68
	id _wasBuriedBlock;	// 108 = 0x6c
	id _wasExhumedBlock;	// 112 = 0x70
	int _maxDepthLimit;	// 116 = 0x74
	NSString *_depthLimitLabel;	// 120 = 0x78
	BOOL _showsHeader;	// 124 = 0x7c
}
@property(retain, nonatomic) NSString *depthLimitLabel;	// G=0x26d931; S=0x26d941; @synthesize=_depthLimitLabel
@property(assign) BOOL depthLimited;	// G=0x26d769; S=0x26d721; converted property
@property(assign, nonatomic) int maxDepthLimit;	// G=0x26d911; S=0x26d921; @synthesize=_maxDepthLimit
@property(assign, nonatomic) BOOL showsHeader;	// G=0x26d951; S=0x26d961; @synthesize=_showsHeader
@property(retain) BRControllerStack *stack;	// G=0x26d625; S=0x26d615; converted property
@property(copy, nonatomic) NSString *title;	// G=0x26d85d; S=0x26d871; @synthesize=_title
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x26d8c9; S=0x26d8dd; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x26d8ed; S=0x26d901; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x26d8a5; S=0x26d8b9; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x26d881; S=0x26d895; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x26d019
- (id)init;	// 0x26d055
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x26dac1
- (void)_handleWindowMaxBoundsChanged;	// 0x26d795
- (void)addLabel:(id)label;	// 0x26d669
- (BOOL)brEventAction:(id)action;	// 0x26d291
- (BOOL)canBeRemovedFromStack;	// 0x26d665
- (int)contextMenuDimOption;	// 0x26da15
- (BOOL)contextMenuIsVisible;	// 0x26d9a1
- (id)controlForContextMenuPositioning;	// 0x26d975
- (id)controlForContextMenuStart;	// 0x26d979
- (id)controlToDim;	// 0x26da11
- (void)controlWasDeactivated;	// 0x26d251
- (void)dealloc;	// 0x26d149
// declared property getter: - (id)depthLimitLabel;	// 0x26d931
// converted property getter: - (BOOL)depthLimited;	// 0x26d769
- (id)description;	// 0x26d569
- (void)dismissContextMenu;	// 0x26d9cd
- (long)errorNumberForNoContent;	// 0x26d77d
- (BOOL)isLabelled:(id)labelled;	// 0x26d6f5
- (BOOL)isNetworkDependent;	// 0x26d719
- (BOOL)isValidAfterDataUpdate;	// 0x26d779
// declared property getter: - (int)maxDepthLimit;	// 0x26d911
- (id)providersForContextMenu;	// 0x26d971
- (BOOL)recreateOnReselect;	// 0x26d71d
- (void)removeLabel:(id)label;	// 0x26d6d5
// declared property setter: - (void)setDepthLimitLabel:(id)label;	// 0x26d941
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x26d721
// declared property setter: - (void)setMaxDepthLimit:(int)limit;	// 0x26d921
// declared property setter: - (void)setShowsHeader:(BOOL)header;	// 0x26d961
// converted property setter: - (void)setStack:(id)stack;	// 0x26d615
// declared property setter: - (void)setTitle:(id)title;	// 0x26d871
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x26d8dd
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x26d901
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x26d8b9
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x26d895
- (void)showDetailContextMenuWithProviders:(id)providers;	// 0x26d97d
// declared property getter: - (BOOL)showsHeader;	// 0x26d951
// converted property getter: - (id)stack;	// 0x26d625
// declared property getter: - (id)title;	// 0x26d85d
- (BOOL)topOfStack;	// 0x26d635
- (id)transitionType;	// 0x26d785
- (void)wasBuried;	// 0x26da6d
// declared property getter: - (id)wasBuriedBlock;	// 0x26d8c9
- (void)wasExhumed;	// 0x26daa5
// declared property getter: - (id)wasExhumedBlock;	// 0x26d8ed
- (void)wasPopped;	// 0x26da35
// declared property getter: - (id)wasPoppedBlock;	// 0x26d8a5
- (void)wasPushed;	// 0x26da19
// declared property getter: - (id)wasPushedBlock;	// 0x26d881
@end
