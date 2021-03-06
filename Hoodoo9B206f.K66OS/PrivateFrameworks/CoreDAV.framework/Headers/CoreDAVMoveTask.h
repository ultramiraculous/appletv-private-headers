/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVCopyOrMoveTask.h"

@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {
	NSString *_previousETag;	// 140 = 0x8c
}
@property(assign, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousETag;	// G=0x339fbead; S=0x339fbec1; @synthesize=_previousETag
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x339fbe35
- (id)additionalHeaderValues;	// 0x339fbd7d
- (void)dealloc;	// 0x339fbc4d
- (id)description;	// 0x339fbcad
- (id)httpMethod;	// 0x339fbd71
// declared property getter: - (id)previousETag;	// 0x339fbead
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x339fbec1
@end

