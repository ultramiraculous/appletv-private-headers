/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMessageMoveRequest : NSObject {
	NSString *_message;	// 4 = 0x4
	NSString *_fromFolder;	// 8 = 0x8
	NSString *_toFolder;	// 12 = 0xc
	id _context;	// 16 = 0x10
}
@property(retain) id context;	// G=0x345f3d65; S=0x345f3d79; @synthesize=_context
@property(readonly, assign) NSString *fromFolder;	// G=0x345f3d45; @synthesize=_fromFolder
@property(readonly, assign) NSString *message;	// G=0x345f3d35; @synthesize=_message
@property(readonly, assign) NSString *toFolder;	// G=0x345f3d55; @synthesize=_toFolder
- (id)initMoveRequestWithMessage:(id)message fromFolder:(id)folder toFolder:(id)folder3;	// 0x345f39e1
// declared property getter: - (id)context;	// 0x345f3d65
- (void)dealloc;	// 0x345f3cad
- (id)description;	// 0x345f3c25
// declared property getter: - (id)fromFolder;	// 0x345f3d45
- (unsigned)hash;	// 0x345f3a71
- (BOOL)isEqual:(id)equal;	// 0x345f3b0d
// declared property getter: - (id)message;	// 0x345f3d35
// declared property setter: - (void)setContext:(id)context;	// 0x345f3d79
// declared property getter: - (id)toFolder;	// 0x345f3d55
@end

