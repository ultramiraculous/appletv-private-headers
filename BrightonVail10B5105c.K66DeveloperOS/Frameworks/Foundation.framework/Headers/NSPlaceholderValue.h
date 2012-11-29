/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNumber.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber {
	NSZone *zoneForInstance;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x36121411
- (id)init;	// 0x36121409
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x360a53c5
- (id)initWithCoder:(id)coder;	// 0x360a311d
- (BOOL)_isDeallocating;	// 0x361213f9
- (BOOL)_tryRetain;	// 0x361213fd
- (id)autorelease;	// 0x361213e5
- (void)dealloc;	// 0x36121401
- (void)finalize;	// 0x36121405
- (void)getValue:(void *)value;	// 0x36121481
- (const char *)objCType;	// 0x36121419
- (oneway void)release;	// 0x361213f5
- (id)retain;	// 0x361213e9
- (unsigned)retainCount;	// 0x361213ed
@end
