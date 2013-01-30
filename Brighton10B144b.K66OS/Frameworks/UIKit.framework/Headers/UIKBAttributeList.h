/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableDictionary *m_dict;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x32dfe2e9; 
@property(readonly, assign, nonatomic) NSDictionary *dict;	// G=0x32dfe5b1; @synthesize=m_dict
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x32dfe5c1; S=0x32dfe5d1; @synthesize=m_explicitlySpecified
@property(copy, nonatomic) NSString *name;	// G=0x32dfe58d; S=0x32dfe5a1; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *names;	// G=0x32dfe2c9; 
- (id)init;	// 0x32dfdda5
- (id)initWithCoder:(id)coder;	// 0x32dfdec9
- (id)initWithDictionary:(id)dictionary;	// 0x32dfde0d
- (id)arrayValueForName:(id)name;	// 0x32dfe53d
- (BOOL)boolValueForName:(id)name;	// 0x32dfe4a5
- (id)copyWithZone:(NSZone *)zone;	// 0x32dfdff1
// declared property getter: - (unsigned)count;	// 0x32dfe2e9
- (void)dealloc;	// 0x32dfde65
- (id)description;	// 0x32dfe09d
// declared property getter: - (id)dict;	// 0x32dfe5b1
- (void)encodeWithCoder:(id)coder;	// 0x32dfdf6d
// declared property getter: - (BOOL)explicitlySpecified;	// 0x32dfe5c1
- (int)intValueForName:(id)name;	// 0x32dfe4f1
- (void)mergeAttributes:(id)attributes;	// 0x32dfe3e9
// declared property getter: - (id)name;	// 0x32dfe58d
// declared property getter: - (id)names;	// 0x32dfe2c9
- (void)setBoolValueForName:(BOOL)name forName:(id)name2;	// 0x32dfe369
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x32dfe5d1
- (void)setIntValueForName:(int)name forName:(id)name2;	// 0x32dfe3a9
// declared property setter: - (void)setName:(id)name;	// 0x32dfe5a1
- (void)setValue:(id)value forName:(id)name;	// 0x32dfe309
- (id)stringValueForName:(id)name;	// 0x32dfe455
- (id)valueForName:(id)name;	// 0x32dfe435
@end
