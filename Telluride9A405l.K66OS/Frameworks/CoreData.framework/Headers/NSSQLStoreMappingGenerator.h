/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLStoreMappingGenerator : NSObject {
@private
	NSMutableDictionary *_names;	// 4 = 0x4
}
+ (id)defaultMappingGenerator;	// 0x33f39785
+ (void)invalidate;	// 0x34016c61
- (id)init;	// 0x33f3c351
- (void)dealloc;	// 0x33f603d1
- (id)generateTableName:(id)name;	// 0x33f397cd
- (id)newGeneratedPropertyName:(id)name;	// 0x33f3c519
- (id)newUniqueNameWithBase:(unsigned short *)base withLength:(unsigned)length;	// 0x33f3c611
- (id)uniqueNameWithBase:(id)base;	// 0x33f67041
@end
