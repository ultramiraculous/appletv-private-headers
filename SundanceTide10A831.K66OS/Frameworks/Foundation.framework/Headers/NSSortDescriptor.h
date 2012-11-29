/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
	unsigned _sortDescriptorFlags;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _selectorOrBlock;	// 16 = 0x10
}
@property(readonly, retain) NSString *key;	// G=0x32502401; converted property
@property(readonly, assign) SEL selector;	// G=0x325023b1; converted property
+ (id)_defaultSelectorName;	// 0x325a7951
+ (void)initialize;	// 0x3251bf6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;	// 0x3253ef6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x325a7909
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x3253ef99
- (id)initWithCoder:(id)coder;	// 0x325a7b91
- (id)initWithKey:(id)key ascending:(BOOL)ascending;	// 0x3251fd4d
- (id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x325a795d
- (id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x32501db9
- (BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;	// 0x325a8071
- (id)_selectorName;	// 0x325a7d85
- (void)_setAscending:(BOOL)ascending;	// 0x325a7cd9
- (void)_setKey:(id)key;	// 0x325a7c95
- (void)_setSelectorName:(id)name;	// 0x325a7d1d
- (BOOL)ascending;	// 0x3250239d
- (id)comparator;	// 0x325a7cf5
- (int)compareObject:(id)object toObject:(id)object2;	// 0x325a7ea5
- (id)copyWithZone:(NSZone *)zone;	// 0x325a7c85
- (void)dealloc;	// 0x32502745
- (id)description;	// 0x325a7dc5
- (void)encodeWithCoder:(id)coder;	// 0x325a7a35
- (BOOL)isEqual:(id)equal;	// 0x325a8171
// converted property getter: - (id)key;	// 0x32502401
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x32658631
- (id)reversedSortDescriptor;	// 0x325a7fb9
// converted property getter: - (SEL)selector;	// 0x325023b1
@end
