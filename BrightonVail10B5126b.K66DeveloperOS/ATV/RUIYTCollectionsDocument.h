/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class RUIYTCollectionsDocumentSpec, NSArray, YTSubscriptionsRequest;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocument : RUIYTDocument {
	unsigned _startIndex;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	RUIYTCollectionsDocumentSpec *_spec;	// 12 = 0xc
	NSArray *_collections;	// 16 = 0x10
	int _totalCollectiont;	// 20 = 0x14
	YTSubscriptionsRequest *__request;	// 24 = 0x18
}
@property(retain, nonatomic) YTSubscriptionsRequest *_request;	// G=0x273219; S=0x273229; @synthesize=__request
@property(retain, nonatomic) NSArray *collections;	// G=0x2731c1; S=0x2731d1; @synthesize=_collections
@property(assign, nonatomic) unsigned count;	// G=0x273169; S=0x273179; @synthesize=_count
@property(retain, nonatomic) RUIYTCollectionsDocumentSpec *spec;	// G=0x273189; S=0x273199; @synthesize=_spec
@property(assign, nonatomic) unsigned startIndex;	// G=0x273149; S=0x273159; @synthesize=_startIndex
@property(assign, nonatomic) int totalCollections;	// G=0x2731f9; S=0x273209; @synthesize=_totalCollectiont
- (id)initWithSpec:(id)spec;	// 0x272b59
- (void).cxx_destruct;	// 0x273251
- (void)_cancelLoad;	// 0x272e35
- (void)_loadRequest;	// 0x272c95
// declared property getter: - (id)_request;	// 0x273219
// declared property getter: - (id)collections;	// 0x2731c1
// declared property getter: - (unsigned)count;	// 0x273169
- (void)dealloc;	// 0x272c31
// declared property setter: - (void)setCollections:(id)collections;	// 0x2731d1
// declared property setter: - (void)setCount:(unsigned)count;	// 0x273179
// declared property setter: - (void)setSpec:(id)spec;	// 0x273199
// declared property setter: - (void)setStartIndex:(unsigned)index;	// 0x273159
// declared property setter: - (void)setTotalCollections:(int)collections;	// 0x273209
// declared property setter: - (void)set_request:(id)request;	// 0x273229
// declared property getter: - (id)spec;	// 0x273189
// declared property getter: - (unsigned)startIndex;	// 0x273149
- (void)subscriptionsRequest:(id)request didFailWithError:(id)error;	// 0x273135
- (void)subscriptionsRequest:(id)request receivedSubscriptions:(id)subscriptions startIndex:(unsigned)index resultsRemaining:(unsigned)remaining;	// 0x272e6d
// declared property getter: - (int)totalCollections;	// 0x2731f9
@end

