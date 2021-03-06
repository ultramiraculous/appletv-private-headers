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

@class NSString;

@interface BKSWorkspaceActivationResponse : NSObject <NSCopying, BKSXPCCoding> {
	NSString *_bundleIdentifier;	// 4 = 0x4
	BOOL _willResume;	// 8 = 0x8
	BOOL _launchFailed;	// 9 = 0x9
}
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x36b5ba15; S=0x36b5ba29; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL launchFailed;	// G=0x36b5ba59; S=0x36b5ba69; @synthesize=_launchFailed
@property(assign, nonatomic) BOOL willResume;	// G=0x36b5ba39; S=0x36b5ba49; @synthesize=_willResume
+ (id)responseForLaunchFailure:(id)launchFailure;	// 0x36b5b699
+ (id)responseForWorkspaceUnsuspend:(id)workspaceUnsuspend;	// 0x36b5b70d
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x36b5b911
// declared property getter: - (id)bundleIdentifier;	// 0x36b5ba15
- (id)copyWithZone:(NSZone *)zone;	// 0x36b5b85d
- (void)dealloc;	// 0x36b5b781
- (id)description;	// 0x36b5b7cd
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x36b5b9a1
// declared property getter: - (BOOL)launchFailed;	// 0x36b5ba59
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x36b5ba29
// declared property setter: - (void)setLaunchFailed:(BOOL)failed;	// 0x36b5ba69
// declared property setter: - (void)setWillResume:(BOOL)resume;	// 0x36b5ba49
// declared property getter: - (BOOL)willResume;	// 0x36b5ba39
@end

