/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRCyclerDelegate.h"
#import "BRCyclerDataSource.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRStreamingPhotoCollection, BRPhotoControlFactory, NSMutableArray, BRControl;

__attribute__((visibility("hidden")))
@interface BRPhotoCollectionDataSource : NSObject <BRCyclerDelegate, BRCyclerDataSource> {
@private
	BRStreamingPhotoCollection *_collection;	// 4 = 0x4
	BRPhotoControlFactory *_controlFactory;	// 8 = 0x8
	ATVMediaQueryRef _keyItemQuery;	// 12 = 0xc
	ATVMediaQueryRef _itemsQuery;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	BRControl *_currentControl;	// 24 = 0x18
	BOOL _cyclerFocused;	// 28 = 0x1c
	BOOL _itemsQueried;	// 29 = 0x1d
}
@property(retain) id selectionHandler;	// G=0x33aefb95; S=0x33aefbb5; converted property
- (id)initWithCollection:(id)collection;	// 0x33aefa49
- (ATVMediaQueryRef)_createItemsQueryForCollection:(ATVMediaCollectionRef)collection requestKeyAssetOnly:(BOOL)only;	// 0x33aeff25
- (void)_itemsQueryComplete:(ATVMediaQueryRef)complete;	// 0x33af0141
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x33aefcc1
- (void)cyclerWasFocused:(id)focused;	// 0x33aefe79
- (void)cyclerWasUnfocused:(id)unfocused;	// 0x33aeff11
- (void)dealloc;	// 0x33aefbd5
- (long)numberOfItemsInCycler:(id)cycler;	// 0x33aefc95
// converted property getter: - (id)selectionHandler;	// 0x33aefb95
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x33aefbb5
@end

