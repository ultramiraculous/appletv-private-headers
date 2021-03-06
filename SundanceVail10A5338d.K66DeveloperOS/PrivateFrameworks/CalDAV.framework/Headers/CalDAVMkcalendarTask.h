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
@property(retain) NSSet *setElements;	// G=0x338dfb1d; S=0x338dfb31; @synthesize=_setElements
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x338df39d
- (id)initWithURL:(id)url;	// 0x338df389
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x338df989
- (void)dealloc;	// 0x338df5d9
- (id)description;	// 0x338df61d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x338dfa19
- (id)httpMethod;	// 0x338df73d
- (id)requestBody;	// 0x338df749
// declared property getter: - (id)setElements;	// 0x338dfb1d
// declared property setter: - (void)setSetElements:(id)elements;	// 0x338dfb31
- (void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;	// 0x338df3e9
@end

