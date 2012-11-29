/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x32bd4485; S=0x32bd4411; 
@property(copy) NSString *TVSignalType;	// G=0x32bd4569; S=0x32bd44c1; 
@property(assign) BOOL allowsVirtualModes;	// G=0x32bd4359; S=0x32bd4379; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x32bd3f55; S=0x32bd3f35; 
@property(readonly, assign) CGRect bounds;	// G=0x32bd2c81; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x32bd3f15; 
@property(readonly, assign) NSSet *clones;	// G=0x32bd3791; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x32bd426d; S=0x32bd42c9; 
@property(assign) float contrast;	// G=0x32bd4141; S=0x32bd4121; 
@property(readonly, assign) NSString *deviceName;	// G=0x32bd2d49; 
@property(readonly, assign) unsigned displayId;	// G=0x32bd2d65; 
@property(assign) float idealRefreshRate;	// G=0x32bd4209; S=0x32bd41e9; 
@property(assign) BOOL invertsColors;	// G=0x32bd40f9; S=0x32bd40d9; 
@property(assign) float maximumRefreshRate;	// G=0x32bd41c5; S=0x32bd41a5; 
@property(assign) float minimumRefreshRate;	// G=0x32bd4181; S=0x32bd4161; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x32bd43b5; S=0x32bd4399; 
@property(readonly, assign) NSString *name;	// G=0x32bd2d31; 
@property(copy) NSString *orientation;	// G=0x32bd4029; S=0x32bd3f8d; 
@property(assign) float overscanAmount;	// G=0x32bd40b5; S=0x32bd4095; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x32bd2d81; 
@property(assign) int tag;	// G=0x32bd43f5; S=0x32bd43d9; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x32bd424d; S=0x32bd422d; 
// declared property getter: - (id)TVMode;	// 0x32bd4485
// declared property getter: - (id)TVSignalType;	// 0x32bd4569
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x32bd2bb9
- (void)addClone:(id)clone;	// 0x32bd3c3d
- (void)addClone:(id)clone options:(id)options;	// 0x32bd39f1
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x32bd4359
// declared property getter: - (CGRect)bounds;	// 0x32bd2c81
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x32bd2e91
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x32bd2ec9
// declared property getter: - (id)cloneMaster;	// 0x32bd3f15
// declared property getter: - (id)clones;	// 0x32bd3791
// declared property getter: - (id)colorMode;	// 0x32bd426d
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x32bd2e5d
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x32bd2ef9
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x32bd2da9
// declared property getter: - (float)contrast;	// 0x32bd4141
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x32bd3689
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x32bd3061
- (void)dealloc;	// 0x32bd2c31
- (id)description;	// 0x32bd45c9
// declared property getter: - (id)deviceName;	// 0x32bd2d49
// declared property getter: - (unsigned)displayId;	// 0x32bd2d65
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x32bd2f39
// declared property getter: - (float)idealRefreshRate;	// 0x32bd4209
- (void)invalidate;	// 0x32bd2bfd
// declared property getter: - (BOOL)invertsColors;	// 0x32bd40f9
// declared property getter: - (BOOL)isBlanked;	// 0x32bd3f55
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x32bd43b5
// declared property getter: - (float)maximumRefreshRate;	// 0x32bd41c5
// declared property getter: - (float)minimumRefreshRate;	// 0x32bd4181
// declared property getter: - (id)name;	// 0x32bd2d31
// declared property getter: - (id)orientation;	// 0x32bd4029
// declared property getter: - (float)overscanAmount;	// 0x32bd40b5
- (void)removeAllClones;	// 0x32bd3d71
- (void)removeClone:(id)clone;	// 0x32bd3c51
// declared property getter: - (unsigned)rendererFlags;	// 0x32bd2d81
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x32bd4379
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x32bd3f35
// declared property setter: - (void)setColorMode:(id)mode;	// 0x32bd42c9
// declared property setter: - (void)setContrast:(float)contrast;	// 0x32bd4121
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x32bd41e9
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x32bd40d9
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x32bd41a5
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x32bd4161
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x32bd4399
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x32bd3f8d
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x32bd4095
// declared property setter: - (void)setTVMode:(id)mode;	// 0x32bd4411
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x32bd44c1
// declared property setter: - (void)setTag:(int)tag;	// 0x32bd43d9
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x32bd422d
// declared property getter: - (int)tag;	// 0x32bd43f5
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x32bd424d
- (void)willUnblank;	// 0x32bd3f75
@end
