/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
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
@property(retain) NSSet *addReadURLs;	// G=0x3380ebcd; S=0x3380ebe1; @synthesize=_addReadURLs
@property(retain) NSSet *addWriteURLs;	// G=0x3380eba9; S=0x3380ebbd; @synthesize=_addWriteURLs
@property(retain) NSSet *removeURLs;	// G=0x3380ebf1; S=0x3380ec05; @synthesize=_removeURLs
@property(assign) int state;	// G=0x3380eb7d; S=0x3380eb91; @synthesize=_state
@property(retain) NSSet *updatedReadURLs;	// G=0x3380ec39; S=0x3380ec4d; @synthesize=_updatedReadURLs
@property(retain) NSSet *updatedWriteURLs;	// G=0x3380ec15; S=0x3380ec29; @synthesize=_updatedWriteURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider addWriteURLs:(id)urls addReadURLs:(id)urls3 removeURLs:(id)urls4 taskManager:(id)manager;	// 0x3380e1ad
- (void)_fetchExistingGrantedDelegates;	// 0x3380e2a5
- (void)_finishWithError:(id)error state:(int)state;	// 0x3380e241
- (void)_populateUpdatesFromFetched:(id)fetched allowWrite:(BOOL)write;	// 0x3380e6a9
- (void)_updateDelegatesWithAllowWrite:(BOOL)allowWrite;	// 0x3380e385
// declared property getter: - (id)addReadURLs;	// 0x3380ebcd
// declared property getter: - (id)addWriteURLs;	// 0x3380eba9
- (void)dealloc;	// 0x3380e10d
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3380ea8d
// declared property getter: - (id)removeURLs;	// 0x3380ebf1
// declared property setter: - (void)setAddReadURLs:(id)urls;	// 0x3380ebe1
// declared property setter: - (void)setAddWriteURLs:(id)urls;	// 0x3380ebbd
// declared property setter: - (void)setRemoveURLs:(id)urls;	// 0x3380ec05
// declared property setter: - (void)setState:(int)state;	// 0x3380eb91
// declared property setter: - (void)setUpdatedReadURLs:(id)urls;	// 0x3380ec4d
// declared property setter: - (void)setUpdatedWriteURLs:(id)urls;	// 0x3380ec29
- (void)startTaskGroup;	// 0x3380e7f5
// declared property getter: - (int)state;	// 0x3380eb7d
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x3380e805
// declared property getter: - (id)updatedReadURLs;	// 0x3380ec39
// declared property getter: - (id)updatedWriteURLs;	// 0x3380ec15
@end

