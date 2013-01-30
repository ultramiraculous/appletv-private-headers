/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVMetadataFaceObject;

@interface AVMetadataFaceObjectInternal : NSObject {
	int faceID;	// 4 = 0x4
	BOOL hasRollAngle;	// 8 = 0x8
	float rollAngle;	// 12 = 0xc
	BOOL hasYawAngle;	// 16 = 0x10
	float yawAngle;	// 20 = 0x14
	AVMetadataFaceObject *originalFaceObject;	// 24 = 0x18
}
@property(assign) int faceID;	// G=0x302e5a99; S=0x302e5aad; @synthesize
@property(assign) BOOL hasRollAngle;	// G=0x302e5ac5; S=0x302e5add; @synthesize
@property(assign) BOOL hasYawAngle;	// G=0x302e5b21; S=0x302e5b39; @synthesize
@property(retain) AVMetadataFaceObject *originalFaceObject;	// G=0x302e5b7d; S=0x302e5b91; @synthesize
@property(assign) float rollAngle;	// G=0x302e5af5; S=0x302e5b09; @synthesize
@property(assign) float yawAngle;	// G=0x302e5b51; S=0x302e5b65; @synthesize
- (void)dealloc;	// 0x302e5a4d
// declared property getter: - (int)faceID;	// 0x302e5a99
// declared property getter: - (BOOL)hasRollAngle;	// 0x302e5ac5
// declared property getter: - (BOOL)hasYawAngle;	// 0x302e5b21
// declared property getter: - (id)originalFaceObject;	// 0x302e5b7d
// declared property getter: - (float)rollAngle;	// 0x302e5af5
// declared property setter: - (void)setFaceID:(int)anId;	// 0x302e5aad
// declared property setter: - (void)setHasRollAngle:(BOOL)angle;	// 0x302e5add
// declared property setter: - (void)setHasYawAngle:(BOOL)angle;	// 0x302e5b39
// declared property setter: - (void)setOriginalFaceObject:(id)object;	// 0x302e5b91
// declared property setter: - (void)setRollAngle:(float)angle;	// 0x302e5b09
// declared property setter: - (void)setYawAngle:(float)angle;	// 0x302e5b65
// declared property getter: - (float)yawAngle;	// 0x302e5b51
@end
