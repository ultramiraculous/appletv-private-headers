/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTask.h> // Unknown library

@class NSSet;
@protocol CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask {
	NSSet *_setElements;	// 136 = 0x88
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate> delegate;	// @dynamic
@property(retain) NSSet *setElements;	// G=0x3140f839; S=0x3140f84d; @synthesize=_setElements
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x3140f0b9
- (id)initWithURL:(id)url;	// 0x3140f0a5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3140f6a5
- (void)dealloc;	// 0x3140f2f5
- (id)description;	// 0x3140f339
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3140f735
- (id)httpMethod;	// 0x3140f459
- (id)requestBody;	// 0x3140f465
// declared property getter: - (id)setElements;	// 0x3140f839
// declared property setter: - (void)setSetElements:(id)elements;	// 0x3140f84d
- (void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;	// 0x3140f105
@end

