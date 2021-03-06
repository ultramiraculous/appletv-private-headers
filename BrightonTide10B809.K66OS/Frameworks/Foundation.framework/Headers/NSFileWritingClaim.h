/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim : NSFileAccessClaim {
	NSURL *_url;	// 76 = 0x4c
	BOOL _urlDidChange;	// 80 = 0x50
	unsigned _options;	// 84 = 0x54
	NSFileAccessNode *_location;	// 88 = 0x58
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x319ca8dd
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x319ca85d
- (BOOL)blocksClaim:(id)claim;	// 0x319cb329
- (void)dealloc;	// 0x319caa91
- (void)devalueSelf;	// 0x319cb211
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x319cad35
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x319caadd
- (void)granted;	// 0x319caeed
- (void)invokeClaimer;	// 0x319cb0e1
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x319cae25
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x319cae89
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x319cb2d5
@end

