/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
	NSArray *_sortDescriptors;	// 8 = 0x8
}
- (id)initWithSortDescriptors:(id)sortDescriptors inScope:(id)scope;	// 0x36587591
- (id)_generateSQLForOrderedManyToManyInverse:(id)manyInverse inContext:(id)context;	// 0x366408d5
- (id)_generateSQLForOrderedToManyInverse:(id)manyInverse inContext:(id)context;	// 0x36640a79
- (void)dealloc;	// 0x3658b119
- (id)generateSQLStringInContext:(id)context;	// 0x3658a44d
@end

