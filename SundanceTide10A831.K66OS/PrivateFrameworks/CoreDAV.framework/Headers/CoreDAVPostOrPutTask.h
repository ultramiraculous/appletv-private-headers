/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
	BOOL _forceToServer;	// 140 = 0x8c
	NSString *_previousETag;	// 144 = 0x90
	NSString *_requestDataContentType;	// 148 = 0x94
	NSData *_requestDataPayload;	// 152 = 0x98
	BOOL _sendOrder;	// 156 = 0x9c
	int _absoluteOrder;	// 160 = 0xa0
	NSURL *_priorOrderedURL;	// 164 = 0xa4
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x3340c045; S=0x3340bf2d; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x3340bfa9; S=0x3340bfc1; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x3340bfd9; S=0x3340bfed; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x3340c055; S=0x3340bf51; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x3340bffd; S=0x3340c011; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x3340c021; S=0x3340c035; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x3340ba61
- (id)initWithURL:(id)url;	// 0x3340ba3d
// declared property getter: - (int)absoluteOrder;	// 0x3340c045
- (id)additionalHeaderValues;	// 0x3340bcf5
- (void)dealloc;	// 0x3340bb05
- (id)description;	// 0x3340bb91
// declared property getter: - (BOOL)forceToServer;	// 0x3340bfa9
// declared property getter: - (id)previousETag;	// 0x3340bfd9
// declared property getter: - (id)priorOrderedURL;	// 0x3340c055
- (id)requestBody;	// 0x3340bef5
// declared property getter: - (id)requestDataContentType;	// 0x3340bffd
// declared property getter: - (id)requestDataPayload;	// 0x3340c021
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x3340bf2d
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x3340bfc1
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x3340bfed
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x3340bf51
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x3340c011
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x3340c035
@end
