/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSFetchedResultsSectionInfo.h"

@class NSFetchedResultsController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
@private
	NSFetchedResultsController *_controller;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_indexTitle;	// 12 = 0xc
	unsigned _sectionOffset;	// 16 = 0x10
	unsigned _numberOfObjects;	// 20 = 0x14
	unsigned _oldSectionNumber;	// 24 = 0x18
	id _sectionObjects;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *indexTitle;	// G=0x31f295dd; @synthesize=_indexTitle
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31f295ed; @synthesize=_name
@property(readonly, assign, nonatomic) unsigned numberOfObjects;	// G=0x31f295bd; @synthesize=_numberOfObjects
@property(readonly, assign, nonatomic) NSArray *objects;	// G=0x31f29751; 
@property(assign, nonatomic) unsigned oldSectionNumber;	// G=0x31f2959d; S=0x31f295ad; @synthesize=_oldSectionNumber
@property(readonly, assign, nonatomic) unsigned sectionNumber;	// G=0x31f2984d; 
@property(readonly, assign, nonatomic) unsigned sectionOffset;	// G=0x31f295cd; @synthesize=_sectionOffset
- (id)initWithCoder:(id)coder;	// 0x31f298f5
- (id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;	// 0x31f295fd
- (void)clearSectionObjectsCache;	// 0x31f29821
- (void)dealloc;	// 0x31f29af9
- (void)encodeWithCoder:(id)coder;	// 0x31f29a25
- (unsigned)indexOfObject:(id)object;	// 0x31f296b9
// declared property getter: - (id)indexTitle;	// 0x31f295dd
// declared property getter: - (id)name;	// 0x31f295ed
// declared property getter: - (unsigned)numberOfObjects;	// 0x31f295bd
// declared property getter: - (id)objects;	// 0x31f29751
// declared property getter: - (unsigned)oldSectionNumber;	// 0x31f2959d
// declared property getter: - (unsigned)sectionNumber;	// 0x31f2984d
// declared property getter: - (unsigned)sectionOffset;	// 0x31f295cd
- (void)setController:(id)controller;	// 0x31f2958d
- (void)setNumberOfObjects:(unsigned)objects;	// 0x31f298d5
// declared property setter: - (void)setOldSectionNumber:(unsigned)number;	// 0x31f295ad
- (void)setSectionOffset:(unsigned)offset;	// 0x31f298b5
@end

