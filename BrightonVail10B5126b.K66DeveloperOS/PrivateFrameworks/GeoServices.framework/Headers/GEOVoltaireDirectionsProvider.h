/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEODirectionsProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 20 = 0x14
}
@property(retain, nonatomic) GEORequester *requester;	// G=0x33f9d86d; S=0x33f9d87d; @synthesize=_requester
+ (unsigned short)providerID;	// 0x33f9d311
+ (id)providerURL;	// 0x33f9d101
+ (void)resetProviderURL;	// 0x33f9d179
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x33f9d315
- (id)init;	// 0x33f9d1a5
- (void)cancelProviderRequest;	// 0x33f9d53d
- (void)cleanupRequester;	// 0x33f9d565
- (void)dealloc;	// 0x33f9d2a9
// declared property getter: - (id)requester;	// 0x33f9d86d
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x33f9d809
- (void)requesterDidCancel:(id)requester;	// 0x33f9d83d
- (void)requesterDidFinish:(id)requester;	// 0x33f9d5a9
// declared property setter: - (void)setRequester:(id)requester;	// 0x33f9d87d
- (void)startProviderWithRequest:(id)request;	// 0x33f9d325
@end
