/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {
	NSString *_previousETag;	// 136 = 0x88
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousETag;	// G=0x30c9c565; S=0x30c9c579; @synthesize=_previousETag
- (id)additionalHeaderValues;	// 0x30c9c319
- (void)dealloc;	// 0x30c9c1fd
- (id)description;	// 0x30c9c249
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30c9c3d5
- (id)httpMethod;	// 0x30c9c30d
// declared property getter: - (id)previousETag;	// 0x30c9c565
- (id)requestBody;	// 0x30c9c3d1
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x30c9c579
@end
