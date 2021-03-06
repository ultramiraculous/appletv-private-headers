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
@property(retain, nonatomic) id<BRViewHosting> controlHost;	// G=0x292efd; S=0x292f0d; @synthesize=_controlHost
- (id)init;	// 0x292299
- (void)_addTransaction:(id)transaction;	// 0x292f1d
- (id)_checkSubstitutions:(id)substitutions;	// 0x294681
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x2944bd
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x293d31
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x293e59
- (void)_processPopToTransaction:(id)transaction;	// 0x293b29
- (void)_processPopTransaction:(id)transaction;	// 0x2937d9
- (void)_processPushTransaction:(id)transaction;	// 0x2936e1
- (void)_processRemoveTransaction:(id)transaction;	// 0x293f71
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x2940d5
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x2942cd
- (void)_processSwapTransaction:(id)transaction;	// 0x293989
- (void)_processTransactions;	// 0x292f6d
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x2931a9
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x2945fd
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x2945a5
- (id)accessibilityLabel;	// 0x292ed5
- (BOOL)brEventAction:(id)action;	// 0x292cf5
// declared property getter: - (id)controlHost;	// 0x292efd
- (id)controllers;	// 0x292ae9
- (id)controllersLabeled:(id)labeled;	// 0x292b15
- (id)controllersOfClass:(Class)aClass;	// 0x292bf5
- (int)count;	// 0x292cd5
- (void)dealloc;	// 0x29235d
- (void)layoutSubcontrols;	// 0x2924c9
- (id)peekController;	// 0x292a85
- (void)popController;	// 0x2925d9
- (void)popToController:(id)controller;	// 0x292715
- (void)popToControllerOfClass:(Class)aClass;	// 0x292785
- (void)popToControllerWithLabel:(id)label;	// 0x292809
- (void)pushController:(id)controller;	// 0x292559
- (void)removeController:(id)controller;	// 0x292879
- (void)replaceAllControllersWithController:(id)controller;	// 0x292969
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x2929e9
- (id)rootController;	// 0x292aa5
// declared property setter: - (void)setControlHost:(id)host;	// 0x292f0d
- (id)stackPathForController:(id)controller;	// 0x292d79
- (void)swapController:(id)controller;	// 0x2928e9
- (void)updateStackPathForController:(id)controller previousIdentifier:(id)identifier;	// 0x292e11
@end

