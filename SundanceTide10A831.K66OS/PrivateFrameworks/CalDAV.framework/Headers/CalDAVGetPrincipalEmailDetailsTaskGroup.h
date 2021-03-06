/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"

@class CalDAVPrincipalEmailDetailsResult, NSURL, NSString, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	CalDAVPrincipalEmailDetailsResult *_principalResult;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
}
@property(readonly, assign) NSSet *addresses;	// G=0x34711819; 
@property(readonly, assign) NSString *displayName;	// G=0x34711841; 
@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult;	// G=0x34711869; S=0x3471187d; @synthesize=_principalResult
@property(retain) NSURL *principalURL;	// G=0x3471188d; S=0x347118a1; @synthesize=_principalURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x34711449
- (void)_finishWithError:(id)error;	// 0x34711701
- (void)_processPropFind:(id)find;	// 0x34711711
// declared property getter: - (id)addresses;	// 0x34711819
- (void)dealloc;	// 0x347113e5
// declared property getter: - (id)displayName;	// 0x34711841
// declared property getter: - (id)principalResult;	// 0x34711869
// declared property getter: - (id)principalURL;	// 0x3471188d
// declared property setter: - (void)setPrincipalResult:(id)result;	// 0x3471187d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x347118a1
- (void)startTaskGroup;	// 0x34711495
- (void)task:(id)task didFinishWithError:(id)error;	// 0x34711781
@end

