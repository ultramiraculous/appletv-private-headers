/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVContainerMultiGetSubmittable.h"

@class NSSet, NSError, CoreDAVContainerMultiGetTask, NSMutableSet;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {
	BOOL _shouldIgnoreResponseErrors;	// 44 = 0x2c
	BOOL _usingMultiGet;	// 45 = 0x2d
	CoreDAVContainerMultiGetTask *_multiGetTask;	// 48 = 0x30
	id _getBlock;	// 52 = 0x34
	NSMutableSet *_urls;	// 56 = 0x38
	NSMutableSet *_parsedContents;	// 60 = 0x3c
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property(copy, nonatomic) id completionBlock;
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3372d869; 
@property(readonly, assign, nonatomic) NSSet *missingURLs;	// G=0x3372d8f5; 
@property(readonly, assign, nonatomic) NSSet *parsedContents;	// G=0x3372d939; 
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x3372d979; S=0x3372d989; @synthesize=_shouldIgnoreResponseErrors
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;
@property(assign) double timeoutInterval;
- (id)initWithURLs:(id)urls multiGetBlock:(id)block getBlock:(id)block3 accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3372d191
- (void)_configureAndSubmitTask:(id)task;	// 0x3372d2cd
- (void)_fetchOneItem;	// 0x3372d3c5
- (void)_switchToSingleGetMode;	// 0x3372d371
- (void)dealloc;	// 0x3372d241
// declared property getter: - (id)error;	// 0x3372d869
// declared property getter: - (id)missingURLs;	// 0x3372d8f5
// declared property getter: - (id)parsedContents;	// 0x3372d939
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x3372d989
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x3372d979
- (void)startTaskGroup;	// 0x3372d675
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3372d815
@end

