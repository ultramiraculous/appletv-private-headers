/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x319c5bd9
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x319ed41d
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x319ed50d
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x318d6279
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x31abd611
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x31af6c65
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x31af6b99
- (void)addChild:(id)child;	// 0x31967ae5
- (id)addChildOfType:(unsigned short)type;	// 0x31abd635
- (id)addContainerChildOfType:(unsigned short)type;	// 0x31abd6ed
- (id)addEshChild:(EshObject *)child;	// 0x31abd669
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x31af68d5
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x31af681d
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x31af68fd
- (id)childAt:(unsigned)at;	// 0x31961e01
- (unsigned)childCount;	// 0x319627d9
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x3196e8b9
- (void)dealloc;	// 0x318e5555
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x318d55fd
- (EshContainer *)eshContainer;	// 0x31967b41
- (EshGroup *)eshGroup;	// 0x3196c37d
- (id)firstChildOfType:(unsigned short)type;	// 0x319620c9
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x319fbbc5
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x31abd5d9
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x319d0d8d
- (void)insertChild:(id)child at:(unsigned)at;	// 0x31abd871
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x31abd7a5
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x319c5e5d
- (void)removeChild:(id)child;	// 0x31abd8d5
- (id)shapeContainer;	// 0x319e7a91
@end

