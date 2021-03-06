/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSCoding, NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0x327bedd5; 
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0x327beecd; 
@property(readonly, assign) int phaseType;	// G=0x327bedf5; 
@property(readonly, assign) float progressChangeRate;	// G=0x327bee5d; 
@property(readonly, assign) int progressUnits;	// G=0x327bee2d; 
@property(readonly, assign) long long progressValue;	// G=0x327bee8d; 
@property(readonly, assign) long long totalProgressValue;	// G=0x327beead; 
- (id)init;	// 0x327beba5
- (id)initWithOperationProgress:(id)operationProgress;	// 0x327bebb9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327becad
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x327bed25
- (id)copyPropertyListEncoding;	// 0x327bec59
- (id)copyWithZone:(NSZone *)zone;	// 0x327bed61
- (void *)copyXPCEncoding;	// 0x327bec79
- (void)dealloc;	// 0x327bec0d
// declared property getter: - (double)estimatedSecondsRemaining;	// 0x327bedd5
// declared property getter: - (id)operationProgress;	// 0x327beecd
// declared property getter: - (int)phaseType;	// 0x327bedf5
// declared property getter: - (float)progressChangeRate;	// 0x327bee5d
// declared property getter: - (int)progressUnits;	// 0x327bee2d
// declared property getter: - (long long)progressValue;	// 0x327bee8d
// declared property getter: - (long long)totalProgressValue;	// 0x327beead
@end

