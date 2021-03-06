/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPostTaskDelegate.h"

@class NSURL, NSString, NSMutableSet, NSSet;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	NSSet *_shareesToRemove;	// 44 = 0x2c
	NSSet *_shareesToSet;	// 48 = 0x30
	NSURL *_calendarURL;	// 52 = 0x34
	NSString *_summary;	// 56 = 0x38
	NSMutableSet *_invalidSharees;	// 60 = 0x3c
}
@property(retain) NSURL *calendarURL;	// G=0x36e55481; S=0x36e55495; @synthesize=_calendarURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSMutableSet *invalidSharees;	// G=0x36e554c9; S=0x36e554dd; @synthesize=_invalidSharees
@property(retain) NSSet *shareesToRemove;	// G=0x36e55439; S=0x36e5544d; @synthesize=_shareesToRemove
@property(retain) NSSet *shareesToSet;	// G=0x36e5545d; S=0x36e55471; @synthesize=_shareesToSet
@property(retain) NSString *summary;	// G=0x36e554a5; S=0x36e554b9; @synthesize=_summary
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x36e548f5
- (id)initWithShareesToSet:(id)set shareesToRemove:(id)remove summary:(id)summary atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x36e5493d
// declared property getter: - (id)calendarURL;	// 0x36e55481
- (void)dealloc;	// 0x36e549ed
- (id)description;	// 0x36e54a81
- (id)generateModificationMessageBody;	// 0x36e54b95
// declared property getter: - (id)invalidSharees;	// 0x36e554c9
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x36e55495
// declared property setter: - (void)setInvalidSharees:(id)sharees;	// 0x36e554dd
// declared property setter: - (void)setShareesToRemove:(id)remove;	// 0x36e5544d
// declared property setter: - (void)setShareesToSet:(id)set;	// 0x36e55471
// declared property setter: - (void)setSummary:(id)summary;	// 0x36e554b9
// declared property getter: - (id)shareesToRemove;	// 0x36e55439
// declared property getter: - (id)shareesToSet;	// 0x36e5545d
- (void)startTaskGroup;	// 0x36e54aad
// declared property getter: - (id)summary;	// 0x36e554a5
- (void)task:(id)task didFinishWithError:(id)error;	// 0x36e54fd5
@end

