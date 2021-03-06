/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import "MSSearchDelegate.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSMutableArray;

@interface IDSAppleEmailInterface : NSObject <MSSearchDelegate> {
	NSMutableDictionary *_currentSearches;	// 4 = 0x4
	NSMutableArray *_handlers;	// 8 = 0x8
}
+ (id)sharedInstance;	// 0x31196da9
- (void)_cancelAllSearches;	// 0x31196f89
- (void)_cancelSearchesForEmail:(id)email;	// 0x31196ef1
- (id)_emailForSearch:(id)search;	// 0x311971b9
- (id)_existingSearchForEmail:(id)email;	// 0x31196ed1
- (id)_registrationInfoIDForSearch:(id)search;	// 0x311970a1
- (int)_searchAttemptForSearch:(id)search;	// 0x311972bd
- (void)_startSearchingForRegistrationEmail:(id)registrationEmail registrationInfo:(id)info attempt:(int)attempt;	// 0x311973e5
- (id)_vettingIDForSearch:(id)search;	// 0x31196f9d
- (void)addListener:(id)listener;	// 0x31198761
- (BOOL)cancelMonitoringForEmail:(id)email registrationInfo:(id)info;	// 0x31197a7d
- (void)dealloc;	// 0x31196e5d
- (void)removeListener:(id)listener;	// 0x311987ed
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x31197b11
- (void)search:(id)search didFinishWithError:(id)error;	// 0x31198281
- (BOOL)startMonitoringForEmail:(id)email registrationInfo:(id)info;	// 0x311979d5
@end

