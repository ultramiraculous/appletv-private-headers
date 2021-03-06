/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import "BRProvider.h"
#import "ATVSearchController.h"
#import "BRControlFactory.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
	NSArray *_matchedCities;	// 172 = 0xac
}
+ (void)initialize;	// 0x12f1a1
- (id)init;	// 0x12f235
- (void)_runInitialSearch;	// 0x12f3f9
- (id)controlFactory;	// 0x12f4d5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x12f551
- (id)dataAtIndex:(long)index;	// 0x12f4f9
- (long)dataCount;	// 0x12f4d9
- (void)dealloc;	// 0x12f349
- (BOOL)handleSelectionForControl:(id)control;	// 0x12f669
- (id)hashForDataAtIndex:(long)index;	// 0x12f519
- (void)setMatchedCities:(id)cities;	// 0x12f499
- (void)wasPopped;	// 0x12f445
- (void)wasPushed;	// 0x12f395
@end

