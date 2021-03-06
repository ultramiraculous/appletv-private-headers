/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVDataQuery, ATVDataType;

__attribute__((visibility("hidden")))
@interface ATVRentedMediaProvider : XXUnknownSuperclass <BRProvider, BRSelectionHandler, BRControlFactory> {
	ATVDataType *_mediaType;	// 4 = 0x4
	ATVDataQuery *_dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(id)mediaType;	// 0x210bf9
- (id)init;	// 0x210c45
- (id)initWithMediaType:(id)mediaType;	// 0x210c65
- (void)_accountLoggedOut:(id)anOut;	// 0x2114f9
- (void)_reloadRentals;	// 0x211099
- (void)_rentalQueryComplete;	// 0x211361
- (id)controlFactory;	// 0x210f31
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x210f35
- (id)dataAtIndex:(long)index;	// 0x210ef1
- (long)dataCount;	// 0x210f11
- (void)dealloc;	// 0x210de5
- (BOOL)handleSelectionForControl:(id)control;	// 0x210fb1
- (id)hashForDataAtIndex:(long)index;	// 0x210ea9
@end

