/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, ACAccountStore, NSSet, NSString;
@protocol ABGroupWrapperDelegate;

@interface ABGroupWrapper : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	void *_source;	// 12 = 0xc
	void *_group;	// 16 = 0x10
	NSString *_cachedName;	// 20 = 0x14
	AccountsManager *_accountsManager;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	NSSet *_childGroupWrappers;	// 36 = 0x24
	BOOL _shouldBeSelectedWhenAllChildrenAreSelected;	// 40 = 0x28
	BOOL _selected;	// 41 = 0x29
	ABGroupWrapper *_parentGroupWrapper;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *_accountDescriptionBasedOnIdentifier;	// G=0x37198f75; 
@property(readonly, assign, nonatomic) NSString *accountIdentifier;	// G=0x37199619; @synthesize=_accountIdentifier
@property(retain, nonatomic) ACAccountStore *accountStore;	// G=0x37198145; S=0x37199599; @synthesize=_accountStore
@property(retain, nonatomic) AccountsManager *accountsManager;	// G=0x37199579; S=0x37199589; @synthesize=_accountsManager
@property(readonly, assign, nonatomic) void *addressBook;	// G=0x37199629; @synthesize=_addressBook
@property(retain, nonatomic) NSSet *childGroupWrappers;	// G=0x371995a9; S=0x371995b9; @synthesize=_childGroupWrappers
@property(assign, nonatomic) id<ABGroupWrapperDelegate> delegate;	// G=0x371995e9; S=0x371995f9; @synthesize=_delegate
@property(readonly, assign, nonatomic) void *group;	// G=0x37199649; @synthesize=_group
@property(readonly, assign, nonatomic) NSString *name;	// G=0x371989c1; 
@property(assign, nonatomic) ABGroupWrapper *parentGroupWrapper;	// G=0x37199659; S=0x37199669; @synthesize=_parentGroupWrapper
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x37199609; S=0x37198d1d; @synthesize=_selected
@property(assign, nonatomic) BOOL shouldBeSelectedWhenAllChildrenAreSelected;	// G=0x371995c9; S=0x371995d9; @synthesize=_shouldBeSelectedWhenAllChildrenAreSelected
@property(readonly, assign, nonatomic) void *source;	// G=0x37199639; @synthesize=_source
@property(readonly, assign, nonatomic) int sourceType;	// G=0x37199495; 
+ (id)newGroupWrapperFromDictionaryRepresentation:(id)dictionaryRepresentation withAddressBook:(void *)addressBook;	// 0x371991a9
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book;	// 0x371987bd
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book accountsManager:(id)manager accountStore:(id)store;	// 0x37198789
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book accountsManager:(id)manager accountStore:(id)store excludingSearchableStores:(BOOL)stores isSoleAccount:(BOOL)account;	// 0x37198195
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book excludingSearchableStores:(BOOL)stores;	// 0x371987e5
- (id)initWithAddressBook:(void *)addressBook accountIdentifier:(id)identifier source:(void *)source group:(void *)group;	// 0x37198819
// declared property getter: - (id)_accountDescriptionBasedOnIdentifier;	// 0x37198f75
// declared property getter: - (id)accountIdentifier;	// 0x37199619
- (id)accountManager;	// 0x371980f5
// declared property getter: - (id)accountStore;	// 0x37198145
// declared property getter: - (id)accountsManager;	// 0x37199579
// declared property getter: - (void *)addressBook;	// 0x37199629
- (void)childGroupWrapper:(id)wrapper didBecomeSelected:(BOOL)selected;	// 0x37198d31
// declared property getter: - (id)childGroupWrappers;	// 0x371995a9
- (int)compareToGroupWrapper:(id)groupWrapper;	// 0x37198ef9
- (id)copyDictionaryRepresentation;	// 0x37198ff5
- (void)dealloc;	// 0x371988d1
// declared property getter: - (id)delegate;	// 0x371995e9
- (id)description;	// 0x371994e1
// declared property getter: - (void *)group;	// 0x37199649
- (BOOL)isContainerWrapper;	// 0x371989b5
- (BOOL)isDirectoryWrapper;	// 0x371989b9
- (BOOL)isEqual:(id)equal;	// 0x37199401
- (BOOL)isGlobalWrapper;	// 0x371989b1
// declared property getter: - (BOOL)isSelected;	// 0x37199609
// declared property getter: - (id)name;	// 0x371989c1
// declared property getter: - (id)parentGroupWrapper;	// 0x37199659
- (int)score;	// 0x37198e3d
// declared property setter: - (void)setAccountStore:(id)store;	// 0x37199599
// declared property setter: - (void)setAccountsManager:(id)manager;	// 0x37199589
// declared property setter: - (void)setChildGroupWrappers:(id)wrappers;	// 0x371995b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x371995f9
// declared property setter: - (void)setParentGroupWrapper:(id)wrapper;	// 0x37199669
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x37198d1d
- (void)setSelected:(BOOL)selected propagateSelectionToChildren:(BOOL)children;	// 0x37198ad9
// declared property setter: - (void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)beSelectedWhenAllChildrenAreSelected;	// 0x371995d9
// declared property getter: - (BOOL)shouldBeSelectedWhenAllChildrenAreSelected;	// 0x371995c9
- (BOOL)showLinkedPeople;	// 0x371989bd
// declared property getter: - (void *)source;	// 0x37199639
// declared property getter: - (int)sourceType;	// 0x37199495
@end

