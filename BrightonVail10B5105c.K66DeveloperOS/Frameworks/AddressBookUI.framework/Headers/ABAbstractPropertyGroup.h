/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ABStyleProvider;

@interface ABAbstractPropertyGroup : NSObject {
	NSArray *_people;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
	void *_preinsertedPerson;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasChanges;	// G=0x376215c1; S=0x3761ff05; @synthesize=_hasChanges
@property(retain, nonatomic) NSArray *people;	// G=0x37620131; S=0x3761f761; @synthesize=_people
@property(assign, nonatomic) void *preinsertedPerson;	// G=0x3767aa95; S=0x3767a8b1; @synthesize=_preinsertedPerson
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3767aa85; S=0x3761f751; @synthesize=_styleProvider
- (id)init;	// 0x3761f659
- (BOOL)canSave;	// 0x3767a9b9
- (void)dealloc;	// 0x3763a71d
// declared property getter: - (BOOL)hasChanges;	// 0x376215c1
// declared property getter: - (id)people;	// 0x37620131
// declared property getter: - (void *)preinsertedPerson;	// 0x3767aa95
- (int)property;	// 0x3767a8e5
- (void)reloadFromModel;	// 0x3761fe25
// declared property setter: - (void)setHasChanges:(BOOL)changes;	// 0x3761ff05
// declared property setter: - (void)setPeople:(id)people;	// 0x3761f761
// declared property setter: - (void)setPreinsertedPerson:(void *)person;	// 0x3767a8b1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3761f751
// declared property getter: - (id)styleProvider;	// 0x3767aa85
- (void)updateRecord;	// 0x3767a8ed
@end
