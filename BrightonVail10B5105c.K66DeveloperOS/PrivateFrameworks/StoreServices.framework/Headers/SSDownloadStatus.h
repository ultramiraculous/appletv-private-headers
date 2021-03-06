/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {
	SSDownloadPhase *_activePhase;	// 4 = 0x4
	BOOL _contentRestricted;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	BOOL _failed;	// 16 = 0x10
	BOOL _paused;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) SSDownloadPhase *activePhase;	// G=0x35838211; @synthesize=_activePhase
@property(assign, nonatomic, getter=isContentRestricted) BOOL contentRestricted;	// G=0x35838221; S=0x35838231; @synthesize=_contentRestricted
@property(retain, nonatomic) NSError *error;	// G=0x35838241; S=0x35838251; @synthesize=_error
@property(assign, nonatomic, getter=isFailed) BOOL failed;	// G=0x35838261; S=0x35838271; @synthesize=_failed
@property(readonly, assign, nonatomic, getter=isFailedTransient) BOOL failedTransient;	// G=0x35837cf5; 
@property(assign, nonatomic, getter=isPausable) BOOL pausable;	// G=0x35837d35; S=0x35837e95; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x35838281; S=0x35838291; @synthesize=_paused
@property(readonly, assign, nonatomic) float percentComplete;	// G=0x35837d69; 
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x358380b5
// declared property getter: - (id)activePhase;	// 0x35838211
- (id)copyWithZone:(NSZone *)zone;	// 0x35837f3d
- (id)copyXPCEncoding;	// 0x35837ff5
- (void)dealloc;	// 0x35837c91
// declared property getter: - (id)error;	// 0x35838241
// declared property getter: - (BOOL)isContentRestricted;	// 0x35838221
// declared property getter: - (BOOL)isFailed;	// 0x35838261
// declared property getter: - (BOOL)isFailedTransient;	// 0x35837cf5
// declared property getter: - (BOOL)isPausable;	// 0x35837d35
// declared property getter: - (BOOL)isPaused;	// 0x35838281
// declared property getter: - (float)percentComplete;	// 0x35837d69
// declared property setter: - (void)setContentRestricted:(BOOL)restricted;	// 0x35838231
// declared property setter: - (void)setError:(id)error;	// 0x35838251
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x35838271
- (void)setOperationProgress:(id)progress;	// 0x35837dfd
- (void)setOperationType:(int)type;	// 0x35837e59
// declared property setter: - (void)setPausable:(BOOL)pausable;	// 0x35837e95
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x35838291
- (void)setPercentComplete:(float)complete;	// 0x35837ed1
@end

