/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import <NSObject.h> // Unknown library

@class IMPeopleListItem, NSRecursiveLock, NSString, NSDictionary, NSMutableArray, NSArray;

@interface IMPeopleListGroup : NSObject {
	NSMutableArray *_members;	// 4 = 0x4
	NSDictionary *_properties;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_localizableName;	// 16 = 0x10
	IMPeopleListItem *_item;	// 20 = 0x14
	NSRecursiveLock *_lock;	// 24 = 0x18
	BOOL _expanded;	// 28 = 0x1c
	int _maxMembers;	// 32 = 0x20
	BOOL _supportsReordering;	// 36 = 0x24
	BOOL _supportsMemberReordering;	// 37 = 0x25
	BOOL _supportsRename;	// 38 = 0x26
	BOOL _supportsAdding;	// 39 = 0x27
	BOOL _supportsRemoving;	// 40 = 0x28
	BOOL _supportsOfflineMembers;	// 41 = 0x29
}
@property(readonly, assign) int actualNumberOfOnlineItems;	// G=0x30ae35b1; 
@property(readonly, retain) NSString *displayName;	// G=0x30ae32e9; 
@property(assign, setter=setExpanded:) BOOL isExpanded;	// G=0x30ae30d9; S=0x30ae30e9; @synthesize=_expanded
@property(retain) NSString *localizableName;	// G=0x30ae3971; S=0x30ae39d1; @synthesize=_localizableName
@property(assign) int maxMembers;	// G=0x30ae30b9; S=0x30ae30c9; @synthesize=_maxMembers
@property(retain) NSArray *members;	// G=0x30ae39b9; S=0x30ae3a55; @synthesize=_members
@property(retain) NSString *name;	// G=0x30ae39a1; S=0x30ae3a29; @synthesize=_name
@property(readonly, assign) int numberOfItems;	// G=0x30ae31fd; 
@property(readonly, assign) int numberOfOnlineItems;	// G=0x30ae34dd; 
@property(retain) IMPeopleListItem *peopleListItem;	// G=0x30ae3989; S=0x30ae39fd; @synthesize=_item
@property(retain) NSDictionary *properties;	// G=0x30ae3959; S=0x30ae3685; @synthesize=_properties
@property(assign) BOOL supportsAdding;	// G=0x30ae3039; S=0x30ae3049; @synthesize=_supportsAdding
@property(assign) BOOL supportsMemberReordering;	// G=0x30ae3079; S=0x30ae3089; @synthesize=_supportsMemberReordering
@property(assign) BOOL supportsOfflineMembers;	// G=0x30ae2ff9; S=0x30ae3009; @synthesize=_supportsOfflineMembers
@property(assign) BOOL supportsRemoving;	// G=0x30ae3019; S=0x30ae3029; @synthesize=_supportsRemoving
@property(assign) BOOL supportsRename;	// G=0x30ae3059; S=0x30ae3069; @synthesize=_supportsRename
@property(assign) BOOL supportsReordering;	// G=0x30ae3099; S=0x30ae30a9; @synthesize=_supportsReordering
@property(readonly, retain) NSArray *visibleMembers;	// G=0x30ae3319; 
- (id)init;	// 0x30ae33f1
// declared property getter: - (int)actualNumberOfOnlineItems;	// 0x30ae35b1
- (void)addPeopleListItem:(id)item;	// 0x30ae3275
- (void)dealloc;	// 0x30ae332d
- (id)description;	// 0x30ae3189
// declared property getter: - (id)displayName;	// 0x30ae32e9
- (XXStruct_La4IvC)filterForIMHandle:(id)imhandle;	// 0x30ae2fed
// declared property getter: - (BOOL)isExpanded;	// 0x30ae30d9
// declared property getter: - (id)localizableName;	// 0x30ae3971
// declared property getter: - (int)maxMembers;	// 0x30ae30b9
// declared property getter: - (id)members;	// 0x30ae39b9
// declared property getter: - (id)name;	// 0x30ae39a1
// declared property getter: - (int)numberOfItems;	// 0x30ae31fd
// declared property getter: - (int)numberOfOnlineItems;	// 0x30ae34dd
// declared property getter: - (id)peopleListItem;	// 0x30ae3989
// declared property getter: - (id)properties;	// 0x30ae3959
- (void)removeAllItems;	// 0x30ae3139
- (void)removePeopleListItem:(id)item;	// 0x30ae3221
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x30ae30e9
// declared property setter: - (void)setLocalizableName:(id)name;	// 0x30ae39d1
// declared property setter: - (void)setMaxMembers:(int)members;	// 0x30ae30c9
// declared property setter: - (void)setMembers:(id)members;	// 0x30ae3a55
// declared property setter: - (void)setName:(id)name;	// 0x30ae3a29
// declared property setter: - (void)setPeopleListItem:(id)item;	// 0x30ae39fd
// declared property setter: - (void)setProperties:(id)properties;	// 0x30ae3685
// declared property setter: - (void)setSupportsAdding:(BOOL)adding;	// 0x30ae3049
// declared property setter: - (void)setSupportsMemberReordering:(BOOL)reordering;	// 0x30ae3089
// declared property setter: - (void)setSupportsOfflineMembers:(BOOL)members;	// 0x30ae3009
// declared property setter: - (void)setSupportsRemoving:(BOOL)removing;	// 0x30ae3029
// declared property setter: - (void)setSupportsRename:(BOOL)rename;	// 0x30ae3069
// declared property setter: - (void)setSupportsReordering:(BOOL)reordering;	// 0x30ae30a9
- (BOOL)shouldConsumeIMHandle:(id)handle;	// 0x30ae2fe9
- (BOOL)shouldContainIMHandle:(id)handle;	// 0x30ae30f9
// declared property getter: - (BOOL)supportsAdding;	// 0x30ae3039
// declared property getter: - (BOOL)supportsMemberReordering;	// 0x30ae3079
// declared property getter: - (BOOL)supportsOfflineMembers;	// 0x30ae2ff9
// declared property getter: - (BOOL)supportsRemoving;	// 0x30ae3019
// declared property getter: - (BOOL)supportsRename;	// 0x30ae3059
// declared property getter: - (BOOL)supportsReordering;	// 0x30ae3099
// declared property getter: - (id)visibleMembers;	// 0x30ae3319
@end
