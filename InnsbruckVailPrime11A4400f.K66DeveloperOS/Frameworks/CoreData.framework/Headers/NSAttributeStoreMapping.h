/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x2d08f991; S=0x2d08f9a1; converted property
@property(assign) int externalScale;	// G=0x2d08f9b1; S=0x2d08f9c1; converted property
@property(assign) int externalType;	// G=0x2d08f971; S=0x2d08f981; converted property
- (id)initWithProperty:(id)property;	// 0x2d08f841
- (id)attribute;	// 0x2d08f961
- (id)columnDefinition;	// 0x2d08fb05
// converted property getter: - (unsigned)externalPrecision;	// 0x2d08f991
// converted property getter: - (int)externalScale;	// 0x2d08f9b1
// converted property getter: - (int)externalType;	// 0x2d08f971
- (BOOL)isEqual:(id)equal;	// 0x2d08f8b1
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x2d08f9a1
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x2d08f9c1
// converted property setter: - (void)setExternalType:(int)type;	// 0x2d08f981
- (id)sqlType;	// 0x2d08f9d1
@end
