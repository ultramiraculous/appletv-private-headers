/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "DataAccessExpress-Structs.h"

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject {
	int _state;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	NSRange _range;	// 12 = 0xc
	int _timeLimit;	// 20 = 0x14
	unsigned _searchID;	// 24 = 0x18
	id<DASearchQueryConsumer> _consumer;	// 28 = 0x1c
}
@property(assign) id<DASearchQueryConsumer> consumer;	// G=0x3077ddbd; S=0x3077ddcd; @synthesize=_consumer
@property(assign) unsigned maxResults;	// G=0x3077dcf5; S=0x3077dd09; 
@property(assign) NSRange range;	// G=0x3077dd4d; S=0x3077dd69; @synthesize=_range
@property(assign) unsigned searchID;	// G=0x3077dd1d; S=0x3077dd2d; @synthesize=_searchID
@property(readonly, assign) NSString *searchString;	// G=0x3077dd3d; @synthesize=_searchString
@property(assign) int state;	// G=0x3077dd9d; S=0x3077ddad; @synthesize=_state
@property(assign) int timeLimit;	// G=0x3077dd7d; S=0x3077dd8d; @synthesize=_timeLimit
+ (id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3077d841
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x3077da0d
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3077d88d
// declared property getter: - (id)consumer;	// 0x3077ddbd
- (void)dealloc;	// 0x3077d93d
- (id)description;	// 0x3077d999
- (id)dictionaryRepresentation;	// 0x3077dbc1
- (BOOL)isQueryRunning;	// 0x3077db31
// declared property getter: - (unsigned)maxResults;	// 0x3077dcf5
// declared property getter: - (NSRange)range;	// 0x3077dd4d
// declared property getter: - (unsigned)searchID;	// 0x3077dd1d
// declared property getter: - (id)searchString;	// 0x3077dd3d
- (void)sendFinishedToConsumerWithError:(id)error;	// 0x3077db85
- (void)sendResultsToConsumer:(id)consumer;	// 0x3077db49
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x3077ddcd
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x3077dd09
// declared property setter: - (void)setRange:(NSRange)range;	// 0x3077dd69
// declared property setter: - (void)setSearchID:(unsigned)anId;	// 0x3077dd2d
// declared property setter: - (void)setState:(int)state;	// 0x3077ddad
// declared property setter: - (void)setTimeLimit:(int)limit;	// 0x3077dd8d
// declared property getter: - (int)state;	// 0x3077dd9d
// declared property getter: - (int)timeLimit;	// 0x3077dd7d
@end

