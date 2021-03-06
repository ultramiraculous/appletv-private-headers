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
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x336bb9cd; S=0x336bb9e1; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL launchFailed;	// G=0x336bba11; S=0x336bba21; @synthesize=_launchFailed
@property(assign, nonatomic) BOOL willResume;	// G=0x336bb9f1; S=0x336bba01; @synthesize=_willResume
+ (id)responseForLaunchFailure:(id)launchFailure;	// 0x336bb651
+ (id)responseForWorkspaceUnsuspend:(id)workspaceUnsuspend;	// 0x336bb6c5
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x336bb8c9
// declared property getter: - (id)bundleIdentifier;	// 0x336bb9cd
- (id)copyWithZone:(NSZone *)zone;	// 0x336bb815
- (void)dealloc;	// 0x336bb739
- (id)description;	// 0x336bb785
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x336bb959
// declared property getter: - (BOOL)launchFailed;	// 0x336bba11
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x336bb9e1
// declared property setter: - (void)setLaunchFailed:(BOOL)failed;	// 0x336bba21
// declared property setter: - (void)setWillResume:(BOOL)resume;	// 0x336bba01
// declared property getter: - (BOOL)willResume;	// 0x336bb9f1
@end

