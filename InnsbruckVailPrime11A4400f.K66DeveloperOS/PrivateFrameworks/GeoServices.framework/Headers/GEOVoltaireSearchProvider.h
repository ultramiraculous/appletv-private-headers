/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOSearchProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 8 = 0x8
	id _finished;	// 12 = 0xc
	id _spellingSuggestion;	// 16 = 0x10
	id _refinement;	// 20 = 0x14
	BOOL _cancelled;	// 24 = 0x18
}
+ (void)_resetURL;	// 0x30efc469
+ (id)_searchURLForRequest:(id)request;	// 0x30eaaa51
+ (int)defaultLocalSearchProviderID;	// 0x30efc4ad
+ (int)localSearchProviderID;	// 0x30ead4f1
+ (unsigned short)provider;	// 0x30e8fb1d
+ (id)searchProviderURL;	// 0x30efc3f1
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x30e8fb21
- (id)init;	// 0x30ea6a55
- (void)cancel;	// 0x30efc72d
- (void)dealloc;	// 0x30eaa4b9
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x30eb0a2d
- (void)requesterDidCancel:(id)requester;	// 0x30efcaa5
- (void)requesterDidFinish:(id)requester;	// 0x30ea975d
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error isCompletions:(BOOL)completions;	// 0x30ea6ae9
@end
