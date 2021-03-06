/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;

@interface BRControllerStack : BRControl {
@private
	NSMutableArray *_stack;	// 48 = 0x30
	NSMutableArray *_transactions;	// 52 = 0x34
	NSMutableArray *_currentStackPath;	// 56 = 0x38
	BOOL _processingTransactions;	// 60 = 0x3c
	BOOL _dumpStack;	// 61 = 0x3d
}
- (id)init;	// 0x3302a215
- (void)_addTransaction:(id)transaction;	// 0x3302ae41
- (id)_checkSubstitutions:(id)substitutions;	// 0x3302c5dd
- (void)_databaseObjectModified:(id)modified;	// 0x3302c43d
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x3302c245
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x3302bba9
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x3302bc85
- (void)_processPopToTransaction:(id)transaction;	// 0x3302b9d1
- (void)_processPopTransaction:(id)transaction;	// 0x3302b691
- (void)_processPushTransaction:(id)transaction;	// 0x3302b591
- (void)_processRemoveTransaction:(id)transaction;	// 0x3302bd51
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x3302bec5
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x3302c099
- (void)_processSwapTransaction:(id)transaction;	// 0x3302b835
- (void)_processTransactions;	// 0x3302ae8d
- (void)_refreshControllersNotification:(id)notification;	// 0x3302c429
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x3302b089
- (void)_updateControllerValidity:(id)validity;	// 0x3302c4f1
- (void)_updateControllersOnlyLegacy:(BOOL)legacy;	// 0x3302c2d9
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x3302c559
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x3302c505
- (id)accessibilityLabel;	// 0x3302ae19
- (BOOL)brEventAction:(id)action;	// 0x3302ac39
- (id)controllers;	// 0x3302aa25
- (id)controllersLabeled:(id)labeled;	// 0x3302aa51
- (id)controllersOfClass:(Class)aClass;	// 0x3302ab35
- (int)count;	// 0x3302ac19
- (void)dealloc;	// 0x3302a3c1
- (void)layoutSubcontrols;	// 0x3302a511
- (id)peekController;	// 0x3302a9bd
- (void)popController;	// 0x3302a619
- (void)popToController:(id)controller;	// 0x3302a671
- (void)popToControllerOfClass:(Class)aClass;	// 0x3302a6d9
- (void)popToControllerWithLabel:(id)label;	// 0x3302a75d
- (void)pushController:(id)controller;	// 0x3302a59d
- (void)removeController:(id)controller;	// 0x3302a7c5
- (void)replaceAllControllersWithController:(id)controller;	// 0x3302a8a9
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x3302a925
- (id)rootController;	// 0x3302a9dd
- (id)stackPathForController:(id)controller;	// 0x3302acbd
- (void)swapController:(id)controller;	// 0x3302a82d
- (void)updateStackPathForController:(id)controller previousIdentifier:(id)identifier;	// 0x3302ad5d
@end

