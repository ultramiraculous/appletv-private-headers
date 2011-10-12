/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSCoding, NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0x324cf319; 
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0x324cf411; 
@property(readonly, assign) int phaseType;	// G=0x324cf339; 
@property(readonly, assign) float progressChangeRate;	// G=0x324cf3a1; 
@property(readonly, assign) int progressUnits;	// G=0x324cf371; 
@property(readonly, assign) long long progressValue;	// G=0x324cf3d1; 
@property(readonly, assign) long long totalProgressValue;	// G=0x324cf3f1; 
- (id)init;	// 0x324cf0e9
- (id)initWithOperationProgress:(id)operationProgress;	// 0x324cf0fd
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324cf1f1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324cf269
- (id)copyPropertyListEncoding;	// 0x324cf19d
- (id)copyWithZone:(NSZone *)zone;	// 0x324cf2a5
- (void *)copyXPCEncoding;	// 0x324cf1bd
- (void)dealloc;	// 0x324cf151
// declared property getter: - (double)estimatedSecondsRemaining;	// 0x324cf319
// declared property getter: - (id)operationProgress;	// 0x324cf411
// declared property getter: - (int)phaseType;	// 0x324cf339
// declared property getter: - (float)progressChangeRate;	// 0x324cf3a1
// declared property getter: - (int)progressUnits;	// 0x324cf371
// declared property getter: - (long long)progressValue;	// 0x324cf3d1
// declared property getter: - (long long)totalProgressValue;	// 0x324cf3f1
@end

