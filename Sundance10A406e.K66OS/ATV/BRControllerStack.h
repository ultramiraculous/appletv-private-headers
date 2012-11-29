/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol BRViewHosting;

__attribute__((visibility("hidden")))
@interface BRControllerStack : BRControl {
	NSMutableArray *_stack;	// 84 = 0x54
	NSMutableArray *_transactions;	// 88 = 0x58
	NSMutableArray *_currentStackPath;	// 92 = 0x5c
	id<BRViewHosting> _controlHost;	// 96 = 0x60
	BOOL _processingTransactions;	// 100 = 0x64
}
@property(retain, nonatomic) id<BRViewHosting> controlHost;	// G=0x2838dd; S=0x2838ed; @synthesize=_controlHost
- (id)init;	// 0x282c79
- (void)_addTransaction:(id)transaction;	// 0x2838fd
- (id)_checkSubstitutions:(id)substitutions;	// 0x285061
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x284e9d
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x284711
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x284839
- (void)_processPopToTransaction:(id)transaction;	// 0x284509
- (void)_processPopTransaction:(id)transaction;	// 0x2841b9
- (void)_processPushTransaction:(id)transaction;	// 0x2840c1
- (void)_processRemoveTransaction:(id)transaction;	// 0x284951
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x284ab5
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x284cad
- (void)_processSwapTransaction:(id)transaction;	// 0x284369
- (void)_processTransactions;	// 0x28394d
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x283b89
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x284fdd
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x284f85
- (id)accessibilityLabel;	// 0x2838b5
- (BOOL)brEventAction:(id)action;	// 0x2836d5
// declared property getter: - (id)controlHost;	// 0x2838dd
- (id)controllers;	// 0x2834c9
- (id)controllersLabeled:(id)labeled;	// 0x2834f5
- (id)controllersOfClass:(Class)aClass;	// 0x2835d5
- (int)count;	// 0x2836b5
- (void)dealloc;	// 0x282d3d
- (void)layoutSubcontrols;	// 0x282ea9
- (id)peekController;	// 0x283465
- (void)popController;	// 0x282fb9
- (void)popToController:(id)controller;	// 0x2830f5
- (void)popToControllerOfClass:(Class)aClass;	// 0x283165
- (void)popToControllerWithLabel:(id)label;	// 0x2831e9
- (void)pushController:(id)controller;	// 0x282f39
- (void)removeController:(id)controller;	// 0x283259
- (void)replaceAllControllersWithController:(id)controller;	// 0x283349
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x2833c9
- (id)rootController;	// 0x283485
// declared property setter: - (void)setControlHost:(id)host;	// 0x2838ed
- (id)stackPathForController:(id)controller;	// 0x283759
- (void)swapController:(id)controller;	// 0x2832c9
- (void)updateStackPathForController:(id)controller previousIdentifier:(id)identifier;	// 0x2837f1
@end
