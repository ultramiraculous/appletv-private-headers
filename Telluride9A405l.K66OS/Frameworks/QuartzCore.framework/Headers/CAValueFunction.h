/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"
#import "NSCoding.h"

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {
	NSString *_string;	// 4 = 0x4
	void *_impl;	// 8 = 0x8
}
@property(readonly, assign) NSString *name;	// G=0x312e73a5; 
+ (id)functionWithName:(id)name;	// 0x312daf81
- (id)initWithCoder:(id)coder;	// 0x31359211
- (Object *)CA_copyRenderValue;	// 0x312db24d
- (id)_initWithName:(int)name;	// 0x312db131
- (BOOL)apply:(const double *)apply result:(double *)result;	// 0x313590a5
- (BOOL)apply:(const double *)apply result:(double *)result parameterFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x313590e1
- (void)dealloc;	// 0x313592f1
- (void)encodeWithCoder:(id)coder;	// 0x313592a5
- (unsigned long)inputCount;	// 0x3135905d
// declared property getter: - (id)name;	// 0x312e73a5
- (unsigned long)outputCount;	// 0x31359081
@end

