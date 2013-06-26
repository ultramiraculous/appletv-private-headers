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
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x316b3fe9
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x3174d1d9
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x317d58d5
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x316b75b5
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x318f6a4d
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x31911f39
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x31911e41
- (void)addChild:(id)child;	// 0x31713f69
- (id)addChildOfType:(unsigned short)type;	// 0x318f6939
- (id)addContainerChildOfType:(unsigned short)type;	// 0x318f6975
- (id)addEshChild:(EshObject *)child;	// 0x318f68a5
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x31911b41
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x31911a45
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x31911b69
- (id)childAt:(unsigned)at;	// 0x316c0485
- (unsigned)childCount;	// 0x316c0465
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x316c5a69
- (id)containerChildAt:(unsigned)at;	// 0x318f6dcd
- (id)containerChildOfType:(unsigned short)type instance:(short)instance mustExist:(BOOL)exist;	// 0x318f6d99
- (id)containerFromObject:(id)object mustExist:(BOOL)exist;	// 0x318f6d0d
- (void)dealloc;	// 0x317142b1
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x317b4cd5
- (EshContainer *)eshContainer;	// 0x31713fd1
- (EshGroup *)eshGroup;	// 0x3177f6e1
- (id)firstChildOfType:(unsigned short)type;	// 0x316c02b5
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x318f6c49
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x318f6cd1
- (id)firstContainerChildOfType:(unsigned short)type mustExist:(BOOL)exist;	// 0x318f6d65
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x316cbd19
- (void)insertChild:(id)child at:(unsigned)at;	// 0x318f6a75
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x318f6ae1
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x316b43b9
- (void)removeChild:(id)child;	// 0x318f6bc5
- (id)shapeContainer;	// 0x317ba111
- (void)writeToWriter:(OcWriter *)writer;	// 0x318f6e01
@end
