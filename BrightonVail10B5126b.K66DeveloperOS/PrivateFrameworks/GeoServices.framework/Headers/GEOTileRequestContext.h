/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileRequestContext : NSObject {
	GEOTileKeyList *_fullList;	// 4 = 0x4
	GEOTileKeyList *_networkList;	// 8 = 0x8
	GEOTileRequester *_tileRequester;	// 12 = 0xc
}
@property(retain, nonatomic) GEOTileKeyList *fullList;	// G=0x33f855e1; S=0x33f855f1; @synthesize=_fullList
@property(retain, nonatomic) GEOTileKeyList *networkList;	// G=0x33f85601; S=0x33f85611; @synthesize=_networkList
@property(retain, nonatomic) GEOTileRequester *tileRequester;	// G=0x33f85621; S=0x33f85631; @synthesize=_tileRequester
- (void)dealloc;	// 0x33f85575
// declared property getter: - (id)fullList;	// 0x33f855e1
// declared property getter: - (id)networkList;	// 0x33f85601
// declared property setter: - (void)setFullList:(id)list;	// 0x33f855f1
// declared property setter: - (void)setNetworkList:(id)list;	// 0x33f85611
// declared property setter: - (void)setTileRequester:(id)requester;	// 0x33f85631
// declared property getter: - (id)tileRequester;	// 0x33f85621
@end

