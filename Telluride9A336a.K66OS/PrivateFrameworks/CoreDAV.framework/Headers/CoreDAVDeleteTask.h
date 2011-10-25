/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVTask {
	NSString *_previousETag;	// 120 = 0x78
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousETag;	// G=0x32c3a09d; S=0x32c3a0b1; @synthesize=_previousETag
- (id)additionalHeaderValues;	// 0x32c39e51
- (void)dealloc;	// 0x32c39d35
- (id)description;	// 0x32c39d81
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x32c39f0d
- (id)httpMethod;	// 0x32c39e45
// declared property getter: - (id)previousETag;	// 0x32c3a09d
- (id)requestBody;	// 0x32c39f09
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x32c3a0b1
@end

