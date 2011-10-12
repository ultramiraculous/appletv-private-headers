/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileRemoteRequest : NSObject {
	GEOTileKeyList *_list;	// 4 = 0x4
	CFRunLoopRef _queue;	// 8 = 0x8
	BOOL _movedToNetwork;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) GEOTileKeyList *list;	// G=0x32c92465; @synthesize=_list
@property(assign) BOOL movedToNetwork;	// G=0x32c92485; S=0x32c92495; @synthesize=_movedToNetwork
@property(readonly, assign, nonatomic) CFRunLoopRef queue;	// G=0x32c92475; @synthesize=_queue
- (id)initWithList:(id)list queue:(CFRunLoopRef)queue;	// 0x32c92399
- (void)dealloc;	// 0x32c92405
// declared property getter: - (id)list;	// 0x32c92465
// declared property getter: - (BOOL)movedToNetwork;	// 0x32c92485
// declared property getter: - (CFRunLoopRef)queue;	// 0x32c92475
// declared property setter: - (void)setMovedToNetwork:(BOOL)network;	// 0x32c92495
@end

