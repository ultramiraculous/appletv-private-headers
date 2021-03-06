/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSSet;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
	int _state;	// 44 = 0x2c
	NSSet *_addWriteURLs;	// 48 = 0x30
	NSSet *_addReadURLs;	// 52 = 0x34
	NSSet *_removeURLs;	// 56 = 0x38
	NSSet *_updatedWriteURLs;	// 60 = 0x3c
	NSSet *_updatedReadURLs;	// 64 = 0x40
}
@property(retain) NSSet *addReadURLs;	// G=0x30282799; S=0x302827ad; @synthesize=_addReadURLs
@property(retain) NSSet *addWriteURLs;	// G=0x30282775; S=0x30282789; @synthesize=_addWriteURLs
@property(retain) NSSet *removeURLs;	// G=0x302827bd; S=0x302827d1; @synthesize=_removeURLs
@property(assign) int state;	// G=0x30282749; S=0x3028275d; @synthesize=_state
@property(retain) NSSet *updatedReadURLs;	// G=0x30282805; S=0x30282819; @synthesize=_updatedReadURLs
@property(retain) NSSet *updatedWriteURLs;	// G=0x302827e1; S=0x302827f5; @synthesize=_updatedWriteURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider addWriteURLs:(id)urls addReadURLs:(id)urls3 removeURLs:(id)urls4 taskManager:(id)manager;	// 0x30281d79
- (void)_fetchExistingGrantedDelegates;	// 0x30281e71
- (void)_finishWithError:(id)error state:(int)state;	// 0x30281e0d
- (void)_populateUpdatesFromFetched:(id)fetched allowWrite:(BOOL)write;	// 0x30282275
- (void)_updateDelegatesWithAllowWrite:(BOOL)allowWrite;	// 0x30281f51
// declared property getter: - (id)addReadURLs;	// 0x30282799
// declared property getter: - (id)addWriteURLs;	// 0x30282775
- (void)dealloc;	// 0x30281cd9
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30282655
// declared property getter: - (id)removeURLs;	// 0x302827bd
// declared property setter: - (void)setAddReadURLs:(id)urls;	// 0x302827ad
// declared property setter: - (void)setAddWriteURLs:(id)urls;	// 0x30282789
// declared property setter: - (void)setRemoveURLs:(id)urls;	// 0x302827d1
// declared property setter: - (void)setState:(int)state;	// 0x3028275d
// declared property setter: - (void)setUpdatedReadURLs:(id)urls;	// 0x30282819
// declared property setter: - (void)setUpdatedWriteURLs:(id)urls;	// 0x302827f5
- (void)startTaskGroup;	// 0x302823c1
// declared property getter: - (int)state;	// 0x30282749
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x302823d1
// declared property getter: - (id)updatedReadURLs;	// 0x30282805
// declared property getter: - (id)updatedWriteURLs;	// 0x302827e1
@end

