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
@property(assign, nonatomic) BOOL hasChanges;	// G=0x34f76085; S=0x34f749fd; @synthesize=_hasChanges
@property(retain, nonatomic) NSArray *people;	// G=0x34f74c29; S=0x34f74259; @synthesize=_people
@property(assign, nonatomic) void *preinsertedPerson;	// G=0x34fd171d; S=0x34fd1539; @synthesize=_preinsertedPerson
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34fd170d; S=0x34f761ad; @synthesize=_styleProvider
- (id)init;	// 0x34f74161
- (BOOL)canSave;	// 0x34fd1641
- (void)dealloc;	// 0x34f90765
// declared property getter: - (BOOL)hasChanges;	// 0x34f76085
// declared property getter: - (id)people;	// 0x34f74c29
// declared property getter: - (void *)preinsertedPerson;	// 0x34fd171d
- (int)property;	// 0x34fd156d
- (void)reloadFromModel;	// 0x34f7491d
// declared property setter: - (void)setHasChanges:(BOOL)changes;	// 0x34f749fd
// declared property setter: - (void)setPeople:(id)people;	// 0x34f74259
// declared property setter: - (void)setPreinsertedPerson:(void *)person;	// 0x34fd1539
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34f761ad
// declared property getter: - (id)styleProvider;	// 0x34fd170d
- (void)updateRecord;	// 0x34fd1575
@end

