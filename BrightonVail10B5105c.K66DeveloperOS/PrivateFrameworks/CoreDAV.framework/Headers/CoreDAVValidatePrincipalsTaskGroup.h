/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSSet, NSURL, NSMutableSet;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSMutableSet *_urlsToExamine;	// 44 = 0x2c
	NSMutableSet *_principalURLs;	// 48 = 0x30
	NSURL *_urlBeingExamined;	// 52 = 0x34
	BOOL _authError;	// 56 = 0x38
}
@property(readonly, assign) BOOL didReceiveAuthenticationError;	// G=0x36013e79; @synthesize=_authError
@property(retain) NSMutableSet *principalURLs;	// G=0x36013e31; S=0x36013e45; @synthesize=_principalURLs
@property(readonly, assign) NSSet *resultPrincipalURLs;	// G=0x360139bd; 
@property(retain) NSURL *urlBeingExamined;	// G=0x36013e55; S=0x36013e69; @synthesize=_urlBeingExamined
@property(retain) NSMutableSet *urlsToExamine;	// G=0x36013e0d; S=0x36013e21; @synthesize=_urlsToExamine
- (id)initWithAccountInfoProvider:(id)accountInfoProvider urls:(id)urls taskManager:(id)manager;	// 0x360138a1
- (void)_fetchNextURL;	// 0x36013a05
- (void)_finishWithError:(id)error;	// 0x360139f5
- (void)cancelTaskGroup;	// 0x36013dc9
- (void)dealloc;	// 0x36013945
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x36013e79
// declared property getter: - (id)principalURLs;	// 0x36013e31
// declared property getter: - (id)resultPrincipalURLs;	// 0x360139bd
// declared property setter: - (void)setPrincipalURLs:(id)urls;	// 0x36013e45
// declared property setter: - (void)setUrlBeingExamined:(id)examined;	// 0x36013e69
// declared property setter: - (void)setUrlsToExamine:(id)examine;	// 0x36013e21
- (void)startTaskGroup;	// 0x36013db9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x36013c31
// declared property getter: - (id)urlBeingExamined;	// 0x36013e55
// declared property getter: - (id)urlsToExamine;	// 0x36013e0d
@end
