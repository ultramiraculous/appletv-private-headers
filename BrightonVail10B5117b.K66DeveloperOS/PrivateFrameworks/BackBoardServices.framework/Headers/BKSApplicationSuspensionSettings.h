/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSNumber, NSString;

@interface BKSApplicationSuspensionSettings : NSObject <NSCopying, BKSXPCCoding> {
	NSNumber *_statusBarStyle;	// 4 = 0x4
	NSNumber *_statusBarHidden;	// 8 = 0x8
	NSNumber *_classicAppZoomedIn;	// 12 = 0xc
	NSNumber *_taskSuspendingUnsupported;	// 16 = 0x10
	NSNumber *_defaultPNGExpirationTime;	// 20 = 0x14
	NSString *_defaultPNG;	// 24 = 0x18
}
@property(retain, nonatomic) NSNumber *classicAppZoomedIn;	// G=0x336baddd; S=0x336baded; @synthesize=_classicAppZoomedIn
@property(copy, nonatomic) NSString *defaultPNG;	// G=0x336bae3d; S=0x336bae51; @synthesize=_defaultPNG
@property(retain, nonatomic) NSNumber *defaultPNGExpirationTime;	// G=0x336bae1d; S=0x336bae2d; @synthesize=_defaultPNGExpirationTime
@property(retain, nonatomic) NSNumber *statusBarHidden;	// G=0x336badbd; S=0x336badcd; @synthesize=_statusBarHidden
@property(retain, nonatomic) NSNumber *statusBarStyle;	// G=0x336bad9d; S=0x336badad; @synthesize=_statusBarStyle
@property(retain, nonatomic) NSNumber *taskSuspendingUnsupported;	// G=0x336badfd; S=0x336bae0d; @synthesize=_taskSuspendingUnsupported
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x336ba89d
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x336babf1
// declared property getter: - (id)classicAppZoomedIn;	// 0x336baddd
- (id)copyWithZone:(NSZone *)zone;	// 0x336babb5
- (void)dealloc;	// 0x336ba9d9
// declared property getter: - (id)defaultPNG;	// 0x336bae3d
// declared property getter: - (id)defaultPNGExpirationTime;	// 0x336bae1d
- (id)description;	// 0x336baa8d
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x336bacdd
// declared property setter: - (void)setClassicAppZoomedIn:(id)anIn;	// 0x336baded
// declared property setter: - (void)setDefaultPNG:(id)png;	// 0x336bae51
// declared property setter: - (void)setDefaultPNGExpirationTime:(id)time;	// 0x336bae2d
// declared property setter: - (void)setStatusBarHidden:(id)hidden;	// 0x336badcd
// declared property setter: - (void)setStatusBarStyle:(id)style;	// 0x336badad
// declared property setter: - (void)setTaskSuspendingUnsupported:(id)unsupported;	// 0x336bae0d
// declared property getter: - (id)statusBarHidden;	// 0x336badbd
// declared property getter: - (id)statusBarStyle;	// 0x336bad9d
// declared property getter: - (id)taskSuspendingUnsupported;	// 0x336badfd
@end

