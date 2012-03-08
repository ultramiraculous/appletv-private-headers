/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
@private
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x3310caf9; S=0x3310cb09; converted property
@property(assign) int externalScale;	// G=0x3310cb19; S=0x3310cb29; converted property
@property(assign) int externalType;	// G=0x3310cad9; S=0x3310cae9; converted property
- (id)initWithProperty:(id)property;	// 0x3310cb39
- (id)attribute;	// 0x3310cd51
- (id)columnDefinition;	// 0x3310cbad
// converted property getter: - (unsigned)externalPrecision;	// 0x3310caf9
// converted property getter: - (int)externalScale;	// 0x3310cb19
// converted property getter: - (int)externalType;	// 0x3310cad9
- (BOOL)isEqual:(id)equal;	// 0x3310cd61
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x3310cb09
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x3310cb29
// converted property setter: - (void)setExternalType:(int)type;	// 0x3310cae9
- (id)sqlType;	// 0x3310cc15
@end
