/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSSet, GEOTileKeyMap, GEOTileKeyList;
@protocol _GEORegionalResourcesRequestDelegate;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesRequest : NSObject {
	GEOTileKeyList *_list;	// 4 = 0x4
	GEOTileKeyList *_keysWithResources;	// 8 = 0x8
	GEOTileKeyList *_completedList;	// 12 = 0xc
	GEOTileKeyMap *_keysToResourceIdentifiers;	// 16 = 0x10
	NSMutableSet *_resourceIdentifiers;	// 20 = 0x14
	id<_GEORegionalResourcesRequestDelegate> _delegate;	// 24 = 0x18
}
@property(assign, nonatomic) id<_GEORegionalResourcesRequestDelegate> delegate;	// G=0x379babc5; S=0x379babd5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSSet *resourceIdentifiers;	// G=0x379babf5; @synthesize=_resourceIdentifiers
@property(readonly, assign, nonatomic) GEOTileKeyList *tileKeys;	// G=0x379babe5; @synthesize=_list
- (id)initWithTileKeys:(id)tileKeys;	// 0x379ba615
- (void)addCompletedResourceIdentifier:(id)identifier;	// 0x379ba999
- (void)addResourceIdentifiers:(id)identifiers forTileKeys:(id)tileKeys;	// 0x379ba70d
- (void)dealloc;	// 0x379ba66d
// declared property getter: - (id)delegate;	// 0x379babc5
// declared property getter: - (id)resourceIdentifiers;	// 0x379babf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x379babd5
// declared property getter: - (id)tileKeys;	// 0x379babe5
@end

