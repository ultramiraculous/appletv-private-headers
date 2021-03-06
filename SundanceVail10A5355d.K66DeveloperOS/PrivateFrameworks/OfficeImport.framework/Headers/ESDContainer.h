/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

@interface ESDContainer : ESDObject {
	NSMutableArray *mChildren;	// 16 = 0x10
}
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x31b89c45
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x31ca8b8d
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x31ca8d49
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x31b8d289
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x31dd7a61
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x31df5ba9
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x31df5aad
- (void)addChild:(id)child;	// 0x31bf8bed
- (id)addChildOfType:(unsigned short)type;	// 0x31dd794d
- (id)addContainerChildOfType:(unsigned short)type;	// 0x31dd7989
- (id)addEshChild:(EshObject *)child;	// 0x31dd78c1
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x31df57a1
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x31df56a1
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x31df57c9
- (id)childAt:(unsigned)at;	// 0x31b969ed
- (unsigned)childCount;	// 0x31b969cd
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x31ba010d
- (id)containerChildAt:(unsigned)at;	// 0x31dd7dc9
- (id)containerChildOfType:(unsigned short)type instance:(short)instance mustExist:(BOOL)exist;	// 0x31dd7d95
- (id)containerFromObject:(id)object mustExist:(BOOL)exist;	// 0x31dd7d0d
- (void)dealloc;	// 0x31bf8f41
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x31c25369
- (EshContainer *)eshContainer;	// 0x31bf8c55
- (EshGroup *)eshGroup;	// 0x31c06efd
- (id)firstChildOfType:(unsigned short)type;	// 0x31b9681d
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x31dd7c49
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x31dd7cd1
- (id)firstContainerChildOfType:(unsigned short)type mustExist:(BOOL)exist;	// 0x31dd7d61
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x31ba11e9
- (void)insertChild:(id)child at:(unsigned)at;	// 0x31dd7a89
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x31dd7af5
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x31b8a009
- (void)removeChild:(id)child;	// 0x31dd7bd1
- (id)shapeContainer;	// 0x31c34aed
- (void)writeToWriter:(OcWriter *)writer;	// 0x31dd7dfd
@end

