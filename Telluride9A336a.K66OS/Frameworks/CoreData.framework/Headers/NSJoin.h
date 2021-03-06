/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject <NSCoding, NSCopying> {
@private
	NSString *_sourceAttributeName;	// 4 = 0x4
	NSString *_destinationAttributeName;	// 8 = 0x8
}
@property(readonly, retain) NSString *destinationAttributeName;	// G=0x3235f775; converted property
@property(readonly, retain) NSString *sourceAttributeName;	// G=0x3235f765; converted property
+ (id)joinWithSourceAttributeName:(id)sourceAttributeName destinationAttributeName:(id)name;	// 0x3235f805
- (id)initWithCoder:(id)coder;	// 0x3235f8c5
- (id)initWithSourceAttributeName:(id)sourceAttributeName destinationAttributeName:(id)name;	// 0x3235f785
- (id)copyWithZone:(NSZone *)zone;	// 0x3235f845
- (void)dealloc;	// 0x3235fa0d
// converted property getter: - (id)destinationAttributeName;	// 0x3235f775
- (void)encodeWithCoder:(id)coder;	// 0x3235f855
- (unsigned)hash;	// 0x3235f921
- (BOOL)isEqual:(id)equal;	// 0x3235f965
// converted property getter: - (id)sourceAttributeName;	// 0x3235f765
@end

