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

@class SSDownloadPhase, NSError;

@interface SSDownloadStatus : NSObject <SSCoding, NSCopying> {
@private
	SSDownloadPhase *_activePhase;	// 4 = 0x4
	BOOL _contentRestricted;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	BOOL _failed;	// 16 = 0x10
	BOOL _paused;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) SSDownloadPhase *activePhase;	// G=0x327beb01; @synthesize=_activePhase
@property(assign, nonatomic, getter=isContentRestricted) BOOL contentRestricted;	// G=0x327beb11; S=0x327beb21; @synthesize=_contentRestricted
@property(retain, nonatomic) NSError *error;	// G=0x327beb31; S=0x327beb41; @synthesize=_error
@property(assign, nonatomic, getter=isFailed) BOOL failed;	// G=0x327beb65; S=0x327beb75; @synthesize=_failed
@property(readonly, assign, nonatomic, getter=isFailedTransient) BOOL failedTransient;	// G=0x327be8b5; 
@property(assign, nonatomic, getter=isPausable) BOOL pausable;	// G=0x327be8f1; S=0x327bea59; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x327beb85; S=0x327beb95; @synthesize=_paused
@property(readonly, assign, nonatomic) float percentComplete;	// G=0x327be925; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327be66d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x327be7b5
// declared property getter: - (id)activePhase;	// 0x327beb01
- (id)copyPropertyListEncoding;	// 0x327be501
- (id)copyWithZone:(NSZone *)zone;	// 0x327be7f1
- (void *)copyXPCEncoding;	// 0x327be639
- (void)dealloc;	// 0x327be4a1
// declared property getter: - (id)error;	// 0x327beb31
// declared property getter: - (BOOL)isContentRestricted;	// 0x327beb11
// declared property getter: - (BOOL)isFailed;	// 0x327beb65
// declared property getter: - (BOOL)isFailedTransient;	// 0x327be8b5
// declared property getter: - (BOOL)isPausable;	// 0x327be8f1
// declared property getter: - (BOOL)isPaused;	// 0x327beb85
// declared property getter: - (float)percentComplete;	// 0x327be925
// declared property setter: - (void)setContentRestricted:(BOOL)restricted;	// 0x327beb21
// declared property setter: - (void)setError:(id)error;	// 0x327beb41
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x327beb75
- (void)setOperationProgress:(id)progress;	// 0x327be9bd
- (void)setOperationType:(int)type;	// 0x327bea1d
// declared property setter: - (void)setPausable:(BOOL)pausable;	// 0x327bea59
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x327beb95
- (void)setPercentComplete:(float)complete;	// 0x327bea95
@end
