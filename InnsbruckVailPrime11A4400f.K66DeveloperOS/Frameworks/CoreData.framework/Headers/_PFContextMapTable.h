/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>
#import "CoreData-Structs.h"


@interface _PFContextMapTable : NSObject {
	unsigned _slotLimit;	// 4 = 0x4
	CFDictionaryRef _objectsByTemporaryID;	// 8 = 0x8
	CFDictionaryRef *_objectsByPermanentObjectID;	// 12 = 0xc
	CFDictionaryRef *_objectsBy64bitPKID;	// 16 = 0x10
	unsigned *_capacitiesFor64bitPKMappings;	// 20 = 0x14
	contextMapTableFlags _flags;	// 24 = 0x18
}
- (id)initWithWeaksReferences:(BOOL)weaksReferences;	// 0x2d05f031
- (void)_dispose;	// 0x2d0827cd
- (void)clearTemporaryIDs;	// 0x2d082c51
- (void)dealloc;	// 0x2d0828e5
- (void)finalize;	// 0x2d082925
- (unsigned)getAllObjects:(id *)objects;	// 0x2d082965
- (void)setCapacityHint:(unsigned)hint forSlot:(unsigned)slot;	// 0x2d082ad1
- (void)setForUseWithModel:(id)model;	// 0x2d05f335
@end

