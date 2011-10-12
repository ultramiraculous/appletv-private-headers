/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {
	int _status;	// 4 = 0x4
	NSString *_sourceID;	// 8 = 0x8
	NSString *_destID;	// 12 = 0xc
	DAMessageMoveRequest *_origRequest;	// 16 = 0x10
}
@property(readonly, assign) NSString *destID;	// G=0x337a421d; @synthesize=_destID
@property(retain) DAMessageMoveRequest *origRequest;	// G=0x337a422d; S=0x337a4241; @synthesize=_origRequest
@property(readonly, assign) NSString *sourceID;	// G=0x337a420d; @synthesize=_sourceID
@property(readonly, assign) int status;	// G=0x337a41fd; @synthesize=_status
- (id)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;	// 0x337a405d
- (void)dealloc;	// 0x337a4189
- (id)description;	// 0x337a40e5
// declared property getter: - (id)destID;	// 0x337a421d
// declared property getter: - (id)origRequest;	// 0x337a422d
// declared property setter: - (void)setOrigRequest:(id)request;	// 0x337a4241
// declared property getter: - (id)sourceID;	// 0x337a420d
// declared property getter: - (int)status;	// 0x337a41fd
@end

