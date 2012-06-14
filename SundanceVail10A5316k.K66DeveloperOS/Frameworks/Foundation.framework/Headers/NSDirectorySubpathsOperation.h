/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryTraversalOperation.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
@private
	NSMutableArray *_subpaths;	// 40 = 0x28
}
@property(readonly, retain) NSMutableArray *subpaths;	// G=0x31a5536d; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x31a55235
+ (id)directorySubpathsOperationAtPath:(id)path;	// 0x31a55241
- (void)dealloc;	// 0x31a553d9
- (void)handlePathname:(id)pathname;	// 0x31a55291
// converted property getter: - (id)subpaths;	// 0x31a5536d
@end
