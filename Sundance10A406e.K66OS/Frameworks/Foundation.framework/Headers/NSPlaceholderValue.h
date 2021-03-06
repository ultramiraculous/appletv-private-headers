/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber {
	NSZone *zoneForInstance;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x355b1411
- (id)init;	// 0x355b1409
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x355353c5
- (id)initWithCoder:(id)coder;	// 0x3553311d
- (BOOL)_isDeallocating;	// 0x355b13f9
- (BOOL)_tryRetain;	// 0x355b13fd
- (id)autorelease;	// 0x355b13e5
- (void)dealloc;	// 0x355b1401
- (void)finalize;	// 0x355b1405
- (void)getValue:(void *)value;	// 0x355b1481
- (const char *)objCType;	// 0x355b1419
- (oneway void)release;	// 0x355b13f5
- (id)retain;	// 0x355b13e9
- (unsigned)retainCount;	// 0x355b13ed
@end

