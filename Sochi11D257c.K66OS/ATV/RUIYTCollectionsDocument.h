/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSArray, YTSubscriptionsRequest, RUIYTCollectionsDocumentSpec;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocument : RUIYTDocument {
	unsigned _startIndex;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	RUIYTCollectionsDocumentSpec *_spec;	// 12 = 0xc
	NSArray *_collections;	// 16 = 0x10
	int _totalCollectiont;	// 20 = 0x14
	YTSubscriptionsRequest *__request;	// 24 = 0x18
}
@property(retain, nonatomic) YTSubscriptionsRequest *_request;	// G=0x2a133d; S=0x2a134d; @synthesize=__request
@property(retain, nonatomic) NSArray *collections;	// G=0x2a12e5; S=0x2a12f5; @synthesize=_collections
@property(assign, nonatomic) unsigned count;	// G=0x2a128d; S=0x2a129d; @synthesize=_count
@property(retain, nonatomic) RUIYTCollectionsDocumentSpec *spec;	// G=0x2a12ad; S=0x2a12bd; @synthesize=_spec
@property(assign, nonatomic) unsigned startIndex;	// G=0x2a126d; S=0x2a127d; @synthesize=_startIndex
@property(assign, nonatomic) int totalCollections;	// G=0x2a131d; S=0x2a132d; @synthesize=_totalCollectiont
- (id)initWithSpec:(id)spec;	// 0x2a0c81
- (void).cxx_destruct;	// 0x2a1375
- (void)_cancelLoad;	// 0x2a0f4d
- (void)_loadRequest;	// 0x2a0db1
// declared property getter: - (id)_request;	// 0x2a133d
// declared property getter: - (id)collections;	// 0x2a12e5
// declared property getter: - (unsigned)count;	// 0x2a128d
- (void)dealloc;	// 0x2a0d4d
// declared property setter: - (void)setCollections:(id)collections;	// 0x2a12f5
// declared property setter: - (void)setCount:(unsigned)count;	// 0x2a129d
// declared property setter: - (void)setSpec:(id)spec;	// 0x2a12bd
// declared property setter: - (void)setStartIndex:(unsigned)index;	// 0x2a127d
// declared property setter: - (void)setTotalCollections:(int)collections;	// 0x2a132d
// declared property setter: - (void)set_request:(id)request;	// 0x2a134d
// declared property getter: - (id)spec;	// 0x2a12ad
// declared property getter: - (unsigned)startIndex;	// 0x2a126d
- (void)subscriptionsRequest:(id)request didFailWithError:(id)error;	// 0x2a1259
- (void)subscriptionsRequest:(id)request receivedSubscriptions:(id)subscriptions startIndex:(unsigned)index resultsRemaining:(unsigned)remaining;	// 0x2a0f85
// declared property getter: - (int)totalCollections;	// 0x2a131d
@end

