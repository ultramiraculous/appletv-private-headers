/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADDashStop : NSObject <NSCopying> {
	float mDash;	// 4 = 0x4
	float mSpace;	// 8 = 0x8
}
- (id)initWithDash:(float)dash space:(float)space;	// 0x379749f1
- (id)copyWithZone:(NSZone *)zone;	// 0x37af66ed
- (float)dash;	// 0x37974aad
- (unsigned)hash;	// 0x37af6749
- (BOOL)isEqual:(id)equal;	// 0x37af6781
- (float)space;	// 0x37974af5
@end

