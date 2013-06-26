/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSJSONSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)JSONObjectWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x318f9f91
+ (id)JSONObjectWithStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x319ac0f9
+ (id)allocWithZone:(NSZone *)zone;	// 0x319abcd5
+ (id)dataWithJSONObject:(id)jsonobject options:(unsigned)options error:(id *)error;	// 0x319abd91
+ (BOOL)isValidJSONObject:(id)object;	// 0x319abd65
+ (int)writeJSONObject:(id)object toStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x319abf11
- (id)init;	// 0x319abd1d
@end
