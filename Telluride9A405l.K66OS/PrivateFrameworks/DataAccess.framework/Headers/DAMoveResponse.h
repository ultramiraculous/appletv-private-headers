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
@property(readonly, assign) NSString *destID;	// G=0x36c151cd; @synthesize=_destID
@property(retain) DAMessageMoveRequest *origRequest;	// G=0x36c151dd; S=0x36c151f1; @synthesize=_origRequest
@property(readonly, assign) NSString *sourceID;	// G=0x36c151bd; @synthesize=_sourceID
@property(readonly, assign) int status;	// G=0x36c151ad; @synthesize=_status
- (id)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;	// 0x36c1500d
- (void)dealloc;	// 0x36c15139
- (id)description;	// 0x36c15095
// declared property getter: - (id)destID;	// 0x36c151cd
// declared property getter: - (id)origRequest;	// 0x36c151dd
// declared property setter: - (void)setOrigRequest:(id)request;	// 0x36c151f1
// declared property getter: - (id)sourceID;	// 0x36c151bd
// declared property getter: - (int)status;	// 0x36c151ad
@end

