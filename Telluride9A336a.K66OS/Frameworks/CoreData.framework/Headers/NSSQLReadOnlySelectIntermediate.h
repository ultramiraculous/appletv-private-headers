/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLSelectIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
@private
	BOOL _onlyFetchesAggregates;	// 33 = 0x21
}
@property(readonly, assign) BOOL onlyFetchesAggregates;	// G=0x323d71f1; converted property
- (id)generateSQLStringInContext:(id)context;	// 0x32327d9d
// converted property getter: - (BOOL)onlyFetchesAggregates;	// 0x323d71f1
@end

