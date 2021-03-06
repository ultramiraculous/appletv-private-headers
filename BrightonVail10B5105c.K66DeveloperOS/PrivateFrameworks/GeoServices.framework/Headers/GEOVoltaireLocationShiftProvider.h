/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOLocationShiftProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x3395bdd5
+ (unsigned short)providerID;	// 0x3395bdcd
- (id)init;	// 0x3395be01
- (void)cancelRequest;	// 0x3395c10d
- (void)dealloc;	// 0x3395bf05
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x3395c12d
- (void)requesterDidCancel:(id)requester;	// 0x3395c1e9
- (void)requesterDidFinish:(id)requester;	// 0x3395c241
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x3395bf91
@end

