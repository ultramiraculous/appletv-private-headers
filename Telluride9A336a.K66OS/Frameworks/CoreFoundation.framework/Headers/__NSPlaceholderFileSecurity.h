/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
}
+ (id)immutablePlaceholder;	// 0x307b873d
+ (void)initialize;	// 0x307b86c1
- (id)init;	// 0x307b8785
- (id)initWithCoder:(id)coder;	// 0x307b87c1
- (id)initWithFileSec:(filesec *)fileSec;	// 0x307b874d
- (id)copyWithZone:(NSZone *)zone;	// 0x307b89e5
- (void)dealloc;	// 0x307b87bd
- (void)encodeWithCoder:(id)coder;	// 0x307b8965
- (oneway void)release;	// 0x307b87b1
- (id)retain;	// 0x307b87ad
- (unsigned)retainCount;	// 0x307b87b5
@end

