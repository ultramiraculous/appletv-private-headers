/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "NSCopying.h"
#import "CTMessageAddress.h"
#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {
@private
	NSString *_address;	// 4 = 0x4
}
@property(readonly, assign) NSString *address;	// G=0x304a9841; @synthesize=_address
+ (id)emailAddress:(id)address;	// 0x304a9701
- (id)initWithAddress:(id)address;	// 0x304a973d
// declared property getter: - (id)address;	// 0x304a9841
- (id)canonicalFormat;	// 0x304a9831
- (id)copyWithZone:(NSZone *)zone;	// 0x304a97dd
- (void)dealloc;	// 0x304a9791
- (id)encodedString;	// 0x304a9821
@end
