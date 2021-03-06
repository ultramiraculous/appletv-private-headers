/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	int _action;	// 44 = 0x2c
	NSURL *_url;	// 48 = 0x30
	int _state;	// 52 = 0x34
}
@property(assign) int action;	// G=0x33258cb5; S=0x33258cc5; @synthesize=_action
@property(assign) int state;	// G=0x33258c95; S=0x33258ca5; @synthesize=_state
@property(retain) NSURL *url;	// G=0x33259655; S=0x33259631; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x33259571
- (id)initWithSharingAction:(int)sharingAction atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x332595b9
// declared property getter: - (int)action;	// 0x33258cb5
- (void)dealloc;	// 0x33259699
- (id)description;	// 0x3325966d
- (void)finishWithError:(id)error;	// 0x33259561
// declared property setter: - (void)setAction:(int)action;	// 0x33258cc5
// declared property setter: - (void)setState:(int)state;	// 0x33258ca5
// declared property setter: - (void)setUrl:(id)url;	// 0x33259631
- (void)startTaskGroup;	// 0x33258cd5
// declared property getter: - (int)state;	// 0x33258c95
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33259171
// declared property getter: - (id)url;	// 0x33259655
@end

