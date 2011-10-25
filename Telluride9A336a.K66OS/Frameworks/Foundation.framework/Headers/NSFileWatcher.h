/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURL, NSMutableDictionary, NSFileWatcherObservations;

__attribute__((visibility("hidden")))
@interface NSFileWatcher : NSObject {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	id _observer;	// 12 = 0xc
	BOOL _isWatching;	// 16 = 0x10
	dispatch_source_s *_eventSource;	// 20 = 0x14
	FSEventStreamRef _eventStream;	// 24 = 0x18
	BOOL _isUnsettled;	// 28 = 0x1c
	NSFileWatcherObservations *_itemObservations;	// 32 = 0x20
	NSMutableDictionary *_subitemObservationsByEventPath;	// 36 = 0x24
	NSURL *_formerURL;	// 40 = 0x28
}
- (id)initWithQueue:(dispatch_queue_s *)queue;	// 0x3377ed1d
- (void)dealloc;	// 0x3377ed89
- (void)handleFSEventPath:(id)path flags:(unsigned long)flags id:(unsigned long long)anId;	// 0x3377ee8d
- (void)setURL:(id)url;	// 0x3377fa7d
- (void)settle;	// 0x3377fbd1
- (void)startWithObserver:(id)observer;	// 0x3377fb6d
- (void)stop;	// 0x3377ff1d
- (void)watchItem;	// 0x3377f03d
@end

