/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
	NSArray *_white;	// 4 = 0x4
	unsigned _lastRef;	// 8 = 0x8
	NSMutableArray *_allowedClasses;	// 12 = 0xc
}
@property(retain) id allowedClassNames;	// G=0x34db9935; S=0x34d7c6fd; converted property
- (id)init;	// 0x34d58d4d
// converted property getter: - (id)allowedClassNames;	// 0x34db9935
- (BOOL)classNameAllowed:(Class)allowed;	// 0x34d5d359
- (void)dealloc;	// 0x34d60ba1
// converted property setter: - (void)setAllowedClassNames:(id)names;	// 0x34d7c6fd
@end

