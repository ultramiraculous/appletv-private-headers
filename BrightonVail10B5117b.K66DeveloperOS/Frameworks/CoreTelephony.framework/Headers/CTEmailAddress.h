/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CTMessageAddress.h"
#import "CoreTelephony-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {
	NSString *_address;	// 4 = 0x4
}
@property(readonly, assign) NSString *address;	// G=0x317d8eb9; @synthesize=_address
+ (id)emailAddress:(id)address;	// 0x317d8d69
- (id)initWithAddress:(id)address;	// 0x317d8da5
// declared property getter: - (id)address;	// 0x317d8eb9
- (id)canonicalFormat;	// 0x317d8e99
- (id)copyWithZone:(NSZone *)zone;	// 0x317d8e45
- (void)dealloc;	// 0x317d8df9
- (id)encodedString;	// 0x317d8e89
@end

