/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DATaskManager.h> // Unknown library
#import "CoreDAVTaskManager.h"

@class NSRunLoop;

@interface BookmarkDAVTaskManager : DATaskManager <CoreDAVTaskManager> {
	int _numActiveTasks;	// 56 = 0x38
}
@property(retain) NSRunLoop *workRunLoop;	// G=0x30013289; S=0x300132a5; 
- (void)_updateSpinner:(BOOL)spinner;	// 0x30012f5d
- (void)coreDAVTaskDidFinish:(id)coreDAVTask;	// 0x30013279
- (void)coreDAVTaskEndModal:(id)modal;	// 0x30013269
- (void)coreDAVTaskRequestModal:(id)modal;	// 0x30013259
// declared property setter: - (void)setWorkRunLoop:(id)loop;	// 0x300132a5
- (void)submitIndependentCoreDAVTask:(id)task;	// 0x30013249
- (void)submitQueuedCoreDAVTask:(id)task;	// 0x30013239
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x30013089
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x30013161
// declared property getter: - (id)workRunLoop;	// 0x30013289
@end

