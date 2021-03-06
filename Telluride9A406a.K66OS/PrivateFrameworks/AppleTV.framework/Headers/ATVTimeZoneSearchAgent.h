/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
@private
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x32fed335
- (id)initWithController:(id)controller;	// 0x32fed381
- (long)cacheSize;	// 0x32fed51d
- (void)dealloc;	// 0x32fed3c9
- (BOOL)handlePlayForObject:(id)object;	// 0x32fed525
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x32fed409
- (BOOL)showRecentSearches;	// 0x32fed521
@end

