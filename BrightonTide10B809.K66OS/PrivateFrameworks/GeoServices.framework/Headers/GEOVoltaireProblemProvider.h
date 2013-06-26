/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOProblemProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireProblemProvider : GEOProblemProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x34001ecd
+ (unsigned short)providerID;	// 0x34002099
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x34001ef9
- (id)init;	// 0x34001f09
- (void)cancelRequest;	// 0x340021d9
- (void)dealloc;	// 0x3400200d
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x340021f9
- (void)requesterDidCancel:(id)requester;	// 0x340022c5
- (void)requesterDidFinish:(id)requester;	// 0x3400232d
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x340020a1
@end
