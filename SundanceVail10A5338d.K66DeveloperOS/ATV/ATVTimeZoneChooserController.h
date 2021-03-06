/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchController.h"
#import "BRSelectionHandler.h"
#import "BRProvider.h"
#import "BRControlFactory.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
	NSArray *_matchedCities;	// 168 = 0xa8
}
+ (void)initialize;	// 0x1149d5
- (id)init;	// 0x114a69
- (void)_runInitialSearch;	// 0x114c2d
- (id)controlFactory;	// 0x114d09
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x114d85
- (id)dataAtIndex:(long)index;	// 0x114d2d
- (long)dataCount;	// 0x114d0d
- (void)dealloc;	// 0x114b7d
- (BOOL)handleSelectionForControl:(id)control;	// 0x114e9d
- (id)hashForDataAtIndex:(long)index;	// 0x114d4d
- (void)setMatchedCities:(id)cities;	// 0x114ccd
- (void)wasPopped;	// 0x114c79
- (void)wasPushed;	// 0x114bc9
@end

