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
@property(retain) NSSet *addReadURLs;	// G=0x36e62ef5; S=0x36e62f09; @synthesize=_addReadURLs
@property(retain) NSSet *addWriteURLs;	// G=0x36e62ed1; S=0x36e62ee5; @synthesize=_addWriteURLs
@property(retain) NSSet *removeURLs;	// G=0x36e62f19; S=0x36e62f2d; @synthesize=_removeURLs
@property(assign) int state;	// G=0x36e62ea5; S=0x36e62eb9; @synthesize=_state
@property(retain) NSSet *updatedReadURLs;	// G=0x36e62f61; S=0x36e62f75; @synthesize=_updatedReadURLs
@property(retain) NSSet *updatedWriteURLs;	// G=0x36e62f3d; S=0x36e62f51; @synthesize=_updatedWriteURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider addWriteURLs:(id)urls addReadURLs:(id)urls3 removeURLs:(id)urls4 taskManager:(id)manager;	// 0x36e624d5
- (void)_fetchExistingGrantedDelegates;	// 0x36e625cd
- (void)_finishWithError:(id)error state:(int)state;	// 0x36e62569
- (void)_populateUpdatesFromFetched:(id)fetched allowWrite:(BOOL)write;	// 0x36e629d1
- (void)_updateDelegatesWithAllowWrite:(BOOL)allowWrite;	// 0x36e626ad
// declared property getter: - (id)addReadURLs;	// 0x36e62ef5
// declared property getter: - (id)addWriteURLs;	// 0x36e62ed1
- (void)dealloc;	// 0x36e62435
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x36e62db5
// declared property getter: - (id)removeURLs;	// 0x36e62f19
// declared property setter: - (void)setAddReadURLs:(id)urls;	// 0x36e62f09
// declared property setter: - (void)setAddWriteURLs:(id)urls;	// 0x36e62ee5
// declared property setter: - (void)setRemoveURLs:(id)urls;	// 0x36e62f2d
// declared property setter: - (void)setState:(int)state;	// 0x36e62eb9
// declared property setter: - (void)setUpdatedReadURLs:(id)urls;	// 0x36e62f75
// declared property setter: - (void)setUpdatedWriteURLs:(id)urls;	// 0x36e62f51
- (void)startTaskGroup;	// 0x36e62b1d
// declared property getter: - (int)state;	// 0x36e62ea5
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x36e62b2d
// declared property getter: - (id)updatedReadURLs;	// 0x36e62f61
// declared property getter: - (id)updatedWriteURLs;	// 0x36e62f3d
@end

