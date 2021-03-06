/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEOLocationShiftProvider.h> // Unknown library
#import "PBRequesterDelegate.h"

@class GMMRequester;

@interface GMMGEOLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {
	GMMRequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (unsigned short)providerID;	// 0x35baf019
- (void)cancelRequest;	// 0x35baf2b9
- (void)dealloc;	// 0x35baf021
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x35baf2d9
- (void)requesterDidCancel:(id)requester;	// 0x35baf2f9
- (void)requesterDidFinish:(id)requester;	// 0x35baf349
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x35baf0ad
@end

