/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray, NSMutableDictionary, NSDate, NSOrderedSet, NSPredicate, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIDocumentContainerObserver : NSObject {
	NSMutableSet *_added;	// 4 = 0x4
	NSMutableSet *_removed;	// 8 = 0x8
	NSMutableDictionary *_moved;	// 12 = 0xc
	NSArray *_descriptors;	// 16 = 0x10
	NSOrderedSet *_lastSnapshot;	// 20 = 0x14
	NSDate *_lastSnapshotDate;	// 24 = 0x18
	id _handler;	// 28 = 0x1c
	NSPredicate *_predicate;	// 32 = 0x20
}
@property(copy, nonatomic) NSArray *descriptors;	// G=0x2f95c665; S=0x2f95c0f9; @synthesize=_descriptors
@property(copy, nonatomic) id handler;	// G=0x2f95c6b9; S=0x2f95c6cd; @synthesize=_handler
@property(retain, nonatomic) NSOrderedSet *lastSnapshot;	// G=0x2f95c679; S=0x2f95c689; @synthesize=_lastSnapshot
@property(retain, nonatomic) NSDate *lastSnapshotDate;	// G=0x2f95c699; S=0x2f95c6a9; @synthesize=_lastSnapshotDate
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x2f95c6dd; S=0x2f95c6ed; @synthesize=_predicate
+ (id)_observerForDirectories:(id)directories sortedWithDescriptors:(id)descriptors updateHandler:(id)handler;	// 0x2f95b7ad
- (id)initWithDirectories:(id)directories sortDescriptors:(id)descriptors handler:(id)handler;	// 0x2f95b801
- (id)_computeUpdatesFromOld:(id)old toNew:(id)aNew;	// 0x2f95bc59
- (id)_predicateForItemsInDirectory:(id)directory;	// 0x2f95bb31
- (void)addURL:(id)url;	// 0x2f95bfa1
- (void)dealloc;	// 0x2f95ba55
// declared property getter: - (id)descriptors;	// 0x2f95c665
// declared property getter: - (id)handler;	// 0x2f95c6b9
// declared property getter: - (id)lastSnapshot;	// 0x2f95c679
// declared property getter: - (id)lastSnapshotDate;	// 0x2f95c699
- (void)moveURL:(id)url toURL:(id)url2;	// 0x2f95c071
// declared property getter: - (id)predicate;	// 0x2f95c6dd
- (void)processResults:(id)results;	// 0x2f95c159
- (void)removeURL:(id)url;	// 0x2f95c009
// declared property setter: - (void)setDescriptors:(id)descriptors;	// 0x2f95c0f9
// declared property setter: - (void)setHandler:(id)handler;	// 0x2f95c6cd
// declared property setter: - (void)setLastSnapshot:(id)snapshot;	// 0x2f95c689
// declared property setter: - (void)setLastSnapshotDate:(id)date;	// 0x2f95c6a9
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x2f95c6ed
@end

