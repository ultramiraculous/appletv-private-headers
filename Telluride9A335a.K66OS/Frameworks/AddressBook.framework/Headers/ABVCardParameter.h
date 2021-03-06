/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_grouping;	// 8 = 0x8
	id _value;	// 12 = 0xc
	NSMutableArray *_types;	// 16 = 0x10
	BOOL _primary;	// 20 = 0x14
}
@property(retain) NSString *grouping;	// G=0x3401a8c5; S=0x3401bac9; converted property
@property(assign) BOOL isPrimary;	// G=0x3401a8e5; S=0x3401a8f5; converted property
@property(readonly, retain) NSString *name;	// G=0x3401a8b5; converted property
@property(readonly, retain) NSMutableArray *types;	// G=0x3401a8a5; converted property
@property(retain) id value;	// G=0x3401a8d5; S=0x3401bb39; converted property
- (id)initWithName:(id)name;	// 0x3401bc15
- (void)addType:(id)type;	// 0x3401bb15
- (void)addTypes:(id)types;	// 0x3401baf1
- (void)dealloc;	// 0x3401bb8d
- (id)description;	// 0x3401ba29
- (void)finalize;	// 0x3401bb61
// converted property getter: - (id)grouping;	// 0x3401a8c5
// converted property getter: - (BOOL)isPrimary;	// 0x3401a8e5
// converted property getter: - (id)name;	// 0x3401a8b5
// converted property setter: - (void)setGrouping:(id)grouping;	// 0x3401bac9
// converted property setter: - (void)setIsPrimary:(BOOL)primary;	// 0x3401a8f5
// converted property setter: - (void)setValue:(id)value;	// 0x3401bb39
// converted property getter: - (id)types;	// 0x3401a8a5
// converted property getter: - (id)value;	// 0x3401a8d5
@end

