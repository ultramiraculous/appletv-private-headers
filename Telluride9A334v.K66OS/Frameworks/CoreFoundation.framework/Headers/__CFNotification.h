/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying> {
@private
	id _name;	// 4 = 0x4
	id _object;	// 8 = 0x8
	id _userInfo;	// 12 = 0xc
	BOOL _fouSemantics;	// 16 = 0x10
	BOOL _dyingObject;	// 17 = 0x11
}
@property(readonly, retain) id name;	// G=0x3485e2f1; converted property
@property(readonly, retain) id object;	// G=0x3485e301; converted property
@property(readonly, retain) id userInfo;	// G=0x34863f41; converted property
- (id)initWithName:(CFStringRef)name object:(const void *)object userInfo:(CFDictionaryRef)info foundation:(BOOL)foundation;	// 0x3485e219
- (id)copyWithZone:(NSZone *)zone;	// 0x348ca2f9
- (void)dealloc;	// 0x3485e311
- (void)finalize;	// 0x348ca309
- (unsigned)hash;	// 0x348ca1c9
- (BOOL)isEqual:(id)equal;	// 0x348ca1f1
// converted property getter: - (id)name;	// 0x3485e2f1
// converted property getter: - (id)object;	// 0x3485e301
// converted property getter: - (id)userInfo;	// 0x34863f41
@end

