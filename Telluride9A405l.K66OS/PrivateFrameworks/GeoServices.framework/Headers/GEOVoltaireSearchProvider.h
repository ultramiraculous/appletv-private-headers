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
}
+ (void)_resetURL;	// 0x314520cd
+ (id)hostname;	// 0x314522a1
+ (unsigned short)provider;	// 0x3145229d
- (id)init;	// 0x314520f9
- (void)cancel;	// 0x314524dd
- (void)dealloc;	// 0x314521fd
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x314526c1
- (void)requesterDidCancel:(id)requester;	// 0x31452661
- (void)requesterDidFinish:(id)requester;	// 0x314524fd
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error;	// 0x31452369
@end

