/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSArray, RUIYTCollectionsDocumentSpec, YTSubscriptionsRequest;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocument : RUIYTDocument {
	unsigned _startIndex;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	RUIYTCollectionsDocumentSpec *_spec;	// 12 = 0xc
	NSArray *_collections;	// 16 = 0x10
	int _totalCollectiont;	// 20 = 0x14
	YTSubscriptionsRequest *__request;	// 24 = 0x18
}
@property(retain, nonatomic) YTSubscriptionsRequest *_request;	// G=0x2901ed; S=0x2901fd; @synthesize=__request
@property(retain, nonatomic) NSArray *collections;	// G=0x290195; S=0x2901a5; @synthesize=_collections
@property(assign, nonatomic) unsigned count;	// G=0x29013d; S=0x29014d; @synthesize=_count
@property(retain, nonatomic) RUIYTCollectionsDocumentSpec *spec;	// G=0x29015d; S=0x29016d; @synthesize=_spec
@property(assign, nonatomic) unsigned startIndex;	// G=0x29011d; S=0x29012d; @synthesize=_startIndex
@property(assign, nonatomic) int totalCollections;	// G=0x2901cd; S=0x2901dd; @synthesize=_totalCollectiont
- (id)initWithSpec:(id)spec;	// 0x28fb31
- (void).cxx_destruct;	// 0x290225
- (void)_cancelLoad;	// 0x28fdfd
- (void)_loadRequest;	// 0x28fc61
// declared property getter: - (id)_request;	// 0x2901ed
// declared property getter: - (id)collections;	// 0x290195
// declared property getter: - (unsigned)count;	// 0x29013d
- (void)dealloc;	// 0x28fbfd
// declared property setter: - (void)setCollections:(id)collections;	// 0x2901a5
// declared property setter: - (void)setCount:(unsigned)count;	// 0x29014d
// declared property setter: - (void)setSpec:(id)spec;	// 0x29016d
// declared property setter: - (void)setStartIndex:(unsigned)index;	// 0x29012d
// declared property setter: - (void)setTotalCollections:(int)collections;	// 0x2901dd
// declared property setter: - (void)set_request:(id)request;	// 0x2901fd
// declared property getter: - (id)spec;	// 0x29015d
// declared property getter: - (unsigned)startIndex;	// 0x29011d
- (void)subscriptionsRequest:(id)request didFailWithError:(id)error;	// 0x290109
- (void)subscriptionsRequest:(id)request receivedSubscriptions:(id)subscriptions startIndex:(unsigned)index resultsRemaining:(unsigned)remaining;	// 0x28fe35
// declared property getter: - (int)totalCollections;	// 0x2901cd
@end

