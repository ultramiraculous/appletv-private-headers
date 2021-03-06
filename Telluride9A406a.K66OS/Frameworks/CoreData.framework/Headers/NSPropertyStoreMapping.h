/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSPropertyStoreMapping : NSStoreMapping {
@private
	NSPropertyDescription *_property;	// 8 = 0x8
}
@property(retain) NSPropertyDescription *property;	// G=0x34805519; S=0x34805529; converted property
- (id)initWithProperty:(id)property;	// 0x3480560d
- (void)dealloc;	// 0x34805731
- (id)description;	// 0x348056ad
- (BOOL)isEqual:(id)equal;	// 0x34805539
// converted property getter: - (id)property;	// 0x34805519
// converted property setter: - (void)setProperty:(id)property;	// 0x34805529
@end

