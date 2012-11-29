/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString *_previousSyncToken;	// 144 = 0x90
	NSString *_nextSyncToken;	// 148 = 0x94
	BOOL _moreToSync;	// 152 = 0x98
	BOOL _wasInvalidSyncToken;	// 153 = 0x99
}
@property(readonly, assign) BOOL moreToSync;	// G=0x303d5555; @synthesize=_moreToSync
@property(readonly, assign) NSString *nextSyncToken;	// G=0x303d5541; @synthesize=_nextSyncToken
@property(readonly, assign) BOOL wasInvalidSyncToken;	// G=0x303d556d; @synthesize=_wasInvalidSyncToken
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;	// 0x303d4c59
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x303d5251
- (void)dealloc;	// 0x303d4cfd
- (id)description;	// 0x303d4d61
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x303d5309
- (id)httpMethod;	// 0x303d4e11
// declared property getter: - (BOOL)moreToSync;	// 0x303d5555
// declared property getter: - (id)nextSyncToken;	// 0x303d5541
- (id)notFoundHREFs;	// 0x303d50c1
- (id)requestBody;	// 0x303d4e1d
// declared property getter: - (BOOL)wasInvalidSyncToken;	// 0x303d556d
@end
