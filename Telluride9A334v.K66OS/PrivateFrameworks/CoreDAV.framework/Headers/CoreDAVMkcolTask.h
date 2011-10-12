/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL, NSSet;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVTask {
	NSSet *_propertiesToSet;	// 120 = 0x78
	BOOL _sendOrder;	// 124 = 0x7c
	int _absoluteOrder;	// 128 = 0x80
	NSURL *_priorOrderedURL;	// 132 = 0x84
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x347b3d61; S=0x347b3ca9; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x347b3d71; S=0x347b3ccd; @synthesize=_priorOrderedURL
@property(retain) NSSet *propertiesToSet;	// G=0x347b3d29; S=0x347b3d3d; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x347b33dd
- (id)initWithURL:(id)url;	// 0x347b33c9
// declared property getter: - (int)absoluteOrder;	// 0x347b3d61
- (id)additionalHeaderValues;	// 0x347b3655
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x347b39f1
- (void)dealloc;	// 0x347b3435
- (id)description;	// 0x347b3495
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x347b3a81
- (id)httpMethod;	// 0x347b3649
// declared property getter: - (id)priorOrderedURL;	// 0x347b3d71
// declared property getter: - (id)propertiesToSet;	// 0x347b3d29
- (id)requestBody;	// 0x347b37c5
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x347b3ca9
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x347b3ccd
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x347b3d3d
@end

