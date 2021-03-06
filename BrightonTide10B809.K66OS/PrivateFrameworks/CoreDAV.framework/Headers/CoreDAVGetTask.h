/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 136 = 0x88
	BOOL _forceNoCache;	// 140 = 0x8c
}
@property(retain) id appSpecificDataItemResult;	// G=0x33717375; S=0x33717389; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x33717399; S=0x337173b1; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x33717375
- (unsigned)cachePolicy;	// 0x337171a9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x337171cd
- (void)dealloc;	// 0x33717009
- (id)description;	// 0x33717055
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33717201
// declared property getter: - (BOOL)forceNoCache;	// 0x33717399
- (id)httpMethod;	// 0x3371719d
- (id)requestBody;	// 0x337171c9
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x33717389
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x337173b1
@end

