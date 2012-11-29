/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSArray, NSExpression;

@interface NSPropertyMapping : NSObject {
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x36611b31; S=0x36611b41; converted property
@property(retain) NSDictionary *userInfo;	// G=0x36611bf9; S=0x36611c09; converted property
@property(retain) NSExpression *valueExpression;	// G=0x36611b95; S=0x36611ba5; converted property
+ (void)initialize;	// 0x36611641
- (id)init;	// 0x3661165d
- (id)initWithCoder:(id)coder;	// 0x366117c9
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x36611cf9
- (void)_createCachesAndOptimizeState;	// 0x36611d21
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x36611c5d
- (id)_propertyTransforms;	// 0x36611e71
- (void)_setIsEditable:(BOOL)editable;	// 0x36611d25
- (void)_setPropertyTransforms:(id)transforms;	// 0x36611e1d
- (void)_throwIfNotEditable;	// 0x36611dbd
- (id)copyWithZone:(NSZone *)zone;	// 0x366118cd
- (void)dealloc;	// 0x36611671
- (id)description;	// 0x36611a9d
- (void)encodeWithCoder:(id)coder;	// 0x36611719
- (BOOL)isEditable;	// 0x36611d09
- (BOOL)isEqual:(id)equal;	// 0x36611985
// converted property getter: - (id)name;	// 0x36611b31
// converted property setter: - (void)setName:(id)name;	// 0x36611b41
// converted property setter: - (void)setUserInfo:(id)info;	// 0x36611c09
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x36611ba5
// converted property getter: - (id)userInfo;	// 0x36611bf9
// converted property getter: - (id)valueExpression;	// 0x36611b95
@end
