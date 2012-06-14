/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSDictionary, NSString, NSMutableDictionary, NSArray;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableDictionary *m_dict;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3031f609; 
@property(readonly, assign, nonatomic) NSDictionary *dict;	// G=0x3031f8ed; @synthesize=m_dict
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x3031f8fd; S=0x3031f90d; @synthesize=m_explicitlySpecified
@property(copy, nonatomic) NSString *name;	// G=0x3031f8b9; S=0x3031f8c9; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *names;	// G=0x3031f5e9; 
- (id)init;	// 0x3031f0c1
- (id)initWithCoder:(id)coder;	// 0x3031f1dd
- (id)initWithDictionary:(id)dictionary;	// 0x3031f125
- (id)arrayValueForName:(id)name;	// 0x3031f865
- (BOOL)boolValueForName:(id)name;	// 0x3031f7cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3031f2fd
// declared property getter: - (unsigned)count;	// 0x3031f609
- (void)dealloc;	// 0x3031f17d
- (id)description;	// 0x3031f3ad
// declared property getter: - (id)dict;	// 0x3031f8ed
- (void)encodeWithCoder:(id)coder;	// 0x3031f27d
// declared property getter: - (BOOL)explicitlySpecified;	// 0x3031f8fd
- (int)intValueForName:(id)name;	// 0x3031f819
- (void)mergeAttributes:(id)attributes;	// 0x3031f70d
// declared property getter: - (id)name;	// 0x3031f8b9
// declared property getter: - (id)names;	// 0x3031f5e9
- (void)setBoolValueForName:(BOOL)name forName:(id)name2;	// 0x3031f68d
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x3031f90d
- (void)setIntValueForName:(int)name forName:(id)name2;	// 0x3031f6cd
// declared property setter: - (void)setName:(id)name;	// 0x3031f8c9
- (void)setValue:(id)value forName:(id)name;	// 0x3031f629
- (id)stringValueForName:(id)name;	// 0x3031f779
- (id)valueForName:(id)name;	// 0x3031f759
@end
