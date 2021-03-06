/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSValue.h"


__attribute__((visibility("hidden")))
@interface NSWeakPointerValue : NSValue {
@private
	void *_value;	// 4 = 0x4
	void *_weakValue;	// 8 = 0x8
}
- (id)initWithPointer:(void *)pointer;	// 0x320a7a5d
- (id)copyWithZone:(NSZone *)zone;	// 0x320a7b29
- (void)getValue:(void *)value;	// 0x320a7b05
- (unsigned)hash;	// 0x320a7ae9
- (BOOL)isEqualToValue:(id)value;	// 0x320a7aa9
- (id)nonretainedObjectValue;	// 0x320a7b19
- (const char *)objCType;	// 0x320a7af9
@end

