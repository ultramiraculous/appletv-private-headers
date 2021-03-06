/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSAffineTransform;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : NSObject <NSCopying> {
@private
	NSAffineTransform *m_world;	// 4 = 0x4
	CGPoint m_windowOrg;	// 8 = 0x8
	CGPoint m_windowExt;	// 16 = 0x10
	CGPoint m_viewportOrg;	// 24 = 0x18
	CGPoint m_viewportExt;	// 32 = 0x20
	NSAffineTransform *m_combinedTransform;	// 40 = 0x28
	int m_mapMode;	// 44 = 0x2c
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 48 = 0x30
}
- (id)initWithDriver:(id)driver;	// 0x3117a3f1
- (CGPoint)DPtoLP:(CGPoint)lp;	// 0x313ac3ed
- (CGPoint)LPtoDP:(CGPoint)dp;	// 0x313ac3b5
- (id)copyWithZone:(NSZone *)zone;	// 0x31180489
- (void)dealloc;	// 0x31175fa9
- (int)getMapMode;	// 0x311807dd
- (id)getTransformMatrix;	// 0x3118078d
- (CGPoint)getViewportExtent;	// 0x31180761
- (CGPoint)getViewportOrg;	// 0x31180735
- (CGPoint)getWindowExtent;	// 0x31180709
- (CGPoint)getWindowOrg;	// 0x311806dd
- (id)getWorldMatrix;	// 0x3118068d
- (BOOL)isUpsideDown;	// 0x313ac5d1
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x312a6d75
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x313ac489
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x313ac4d9
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3122f7e1
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x313ac529
- (int)setMapMode:(int)mode;	// 0x3117b769
- (void)setTransformMatrix:(id)matrix;	// 0x3118079d
- (void)setViewportExt:(CGPoint)ext;	// 0x31180779
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x3117bd45
- (void)setViewportOrg:(CGPoint)org;	// 0x3118074d
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x3117bcc9
- (void)setWindowExt:(CGPoint)ext;	// 0x31180721
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x3117bc19
- (void)setWindowOrg:(CGPoint)org;	// 0x311806f5
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x3117b895
- (void)setWorldMatrix:(id)matrix;	// 0x3118069d
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x312d3361
- (int)updateTransform;	// 0x3117b8d1
@end

