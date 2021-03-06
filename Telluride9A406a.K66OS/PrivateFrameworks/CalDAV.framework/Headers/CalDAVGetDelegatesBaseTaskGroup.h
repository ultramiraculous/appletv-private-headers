/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSURL, NSMutableSet, NSSet, NSMutableArray;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
	BOOL _serverSupportsExpandPropertyReport;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
	NSMutableArray *_readPrincipalURLs;	// 52 = 0x34
	NSMutableArray *_writePrincipalURLs;	// 56 = 0x38
	NSMutableSet *_writeDetails;	// 60 = 0x3c
	NSMutableSet *_readDetails;	// 64 = 0x40
}
@property(retain) NSURL *principalURL;	// G=0x35fc4465; S=0x35fc4441; @synthesize=_principalURL
@property(retain) NSMutableSet *readDetails;	// G=0x35fc4555; S=0x35fc4531; @synthesize=_readDetails
@property(readonly, retain) NSSet *readOnlyPrincipalDetails;	// G=0x35fc432d; 
@property(retain) NSMutableArray *readPrincipalURLs;	// G=0x35fc44a1; S=0x35fc447d; @synthesize=_readPrincipalURLs
@property(readonly, retain) NSSet *readWritePrincipalDetails;	// G=0x35fc4369; 
@property(assign) BOOL serverSupportsExpandPropertyReport;	// G=0x35fc3f89; S=0x35fc3f99; @synthesize=_serverSupportsExpandPropertyReport
@property(retain) NSMutableSet *writeDetails;	// G=0x35fc4519; S=0x35fc44f5; @synthesize=_writeDetails
@property(retain) NSMutableArray *writePrincipalURLs;	// G=0x35fc44dd; S=0x35fc44b9; @synthesize=_writePrincipalURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x35fc468d
- (void)_getPrincipalDetailsForURL:(id)url;	// 0x35fc412d
- (id)_mappingsForPrincipalDetails;	// 0x35fc3fa9
- (id)_popFromArray:(id)array;	// 0x35fc41cd
- (void)_processDetailsFromMultiStatus:(id)multiStatus allowWrite:(BOOL)write;	// 0x35fc456d
- (void)dealloc;	// 0x35fc43a5
// declared property getter: - (id)principalURL;	// 0x35fc4465
// declared property getter: - (id)readDetails;	// 0x35fc4555
// declared property getter: - (id)readOnlyPrincipalDetails;	// 0x35fc432d
// declared property getter: - (id)readPrincipalURLs;	// 0x35fc44a1
// declared property getter: - (id)readWritePrincipalDetails;	// 0x35fc4369
// declared property getter: - (BOOL)serverSupportsExpandPropertyReport;	// 0x35fc3f89
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x35fc4441
// declared property setter: - (void)setReadDetails:(id)details;	// 0x35fc4531
// declared property setter: - (void)setReadPrincipalURLs:(id)urls;	// 0x35fc447d
// declared property setter: - (void)setServerSupportsExpandPropertyReport:(BOOL)report;	// 0x35fc3f99
// declared property setter: - (void)setWriteDetails:(id)details;	// 0x35fc44f5
// declared property setter: - (void)setWritePrincipalURLs:(id)urls;	// 0x35fc44b9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35fc421d
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x35fc42a5
// declared property getter: - (id)writeDetails;	// 0x35fc4519
// declared property getter: - (id)writePrincipalURLs;	// 0x35fc44dd
@end

