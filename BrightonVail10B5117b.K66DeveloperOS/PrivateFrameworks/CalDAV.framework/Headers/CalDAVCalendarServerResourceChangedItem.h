/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {
	NSMutableSet *_created;	// 28 = 0x1c
	NSMutableSet *_updated;	// 32 = 0x20
	NSMutableSet *_deleted;	// 36 = 0x24
	NSMutableSet *_collectionChanges;	// 40 = 0x28
	NSMutableSet *_collectionUpdates;	// 44 = 0x2c
	ICSDateValue *_dtstamp;	// 48 = 0x30
}
@property(retain) NSMutableSet *collectionChanges;	// G=0x3375d7d9; S=0x3375d7ed; @synthesize=_collectionChanges
@property(retain) NSMutableSet *collectionUpdates;	// G=0x3375d7fd; S=0x3375d811; @synthesize=_collectionUpdates
@property(retain) NSMutableSet *created;	// G=0x3375d76d; S=0x3375d781; @synthesize=_created
@property(retain) NSMutableSet *deleted;	// G=0x3375d7b5; S=0x3375d7c9; @synthesize=_deleted
@property(retain) ICSDateValue *dtstamp;	// G=0x3375d821; S=0x3375d835; @synthesize=_dtstamp
@property(retain) NSMutableSet *updated;	// G=0x3375d791; S=0x3375d7a5; @synthesize=_updated
- (id)init;	// 0x3375d119
- (void)addCollectionChanges:(id)changes;	// 0x3375d295
- (void)addCollectionUpdates:(id)updates;	// 0x3375d305
- (void)addCreated:(id)created;	// 0x3375d145
- (void)addDeleted:(id)deleted;	// 0x3375d225
- (void)addUpdated:(id)updated;	// 0x3375d1b5
// declared property getter: - (id)collectionChanges;	// 0x3375d7d9
// declared property getter: - (id)collectionUpdates;	// 0x3375d7fd
- (id)copyParseRules;	// 0x3375d3c5
// declared property getter: - (id)created;	// 0x3375d76d
- (void)dealloc;	// 0x3375d065
// declared property getter: - (id)deleted;	// 0x3375d7b5
// declared property getter: - (id)dtstamp;	// 0x3375d821
// declared property setter: - (void)setCollectionChanges:(id)changes;	// 0x3375d7ed
// declared property setter: - (void)setCollectionUpdates:(id)updates;	// 0x3375d811
// declared property setter: - (void)setCreated:(id)created;	// 0x3375d781
// declared property setter: - (void)setDeleted:(id)deleted;	// 0x3375d7c9
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x3375d835
- (void)setDtstampItem:(id)item;	// 0x3375d375
// declared property setter: - (void)setUpdated:(id)updated;	// 0x3375d7a5
// declared property getter: - (id)updated;	// 0x3375d791
@end
