/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
	NSSQLForeignKey *_foreignKey;	// 32 = 0x20
	NSSQLForeignEntityKey *_foreignEntityKey;	// 36 = 0x24
	NSSQLForeignOrderKey *_foreignOrderKey;	// 40 = 0x28
	unsigned _slot;	// 44 = 0x2c
	BOOL _isVirtual;	// 48 = 0x30
}
@property(readonly, retain) NSSQLForeignEntityKey *foreignEntityKey;	// G=0x334a3459; converted property
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x334a3449; converted property
@property(readonly, retain) NSSQLForeignOrderKey *foreignOrderKey;	// G=0x334a37bd; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x334a3a11; converted property
@property(readonly, assign) unsigned slot;	// G=0x33550b05; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x33550835
- (id)initWithEntity:(id)entity inverseToMany:(id)many;	// 0x334a434d
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x334a2da1
- (id)initWithEntity:(id)entity propertyDescription:(id)description virtualForToMany:(id)many;	// 0x334a2dc5
- (void)_setForeignOrderKey:(id)key;	// 0x335509fd
- (id)columnName;	// 0x33550a51
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33550b51
- (void)dealloc;	// 0x3355094d
- (id)description;	// 0x33550a79
// converted property getter: - (id)foreignEntityKey;	// 0x334a3459
// converted property getter: - (id)foreignKey;	// 0x334a3449
// converted property getter: - (id)foreignOrderKey;	// 0x334a37bd
- (BOOL)isOptional;	// 0x33550b15
// converted property getter: - (BOOL)isVirtual;	// 0x334a3a11
// converted property getter: - (unsigned)slot;	// 0x33550b05
@end
