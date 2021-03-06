/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSPropertyListSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x355a0b25
+ (id)dataFromPropertyList:(id)propertyList format:(unsigned)format errorDescription:(out id *)description;	// 0x355091ad
+ (id)dataWithPropertyList:(id)propertyList format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3551a335
+ (BOOL)propertyList:(id)list isValidForFormat:(unsigned)format;	// 0x355a0b15
+ (id)propertyListFromData:(id)data mutabilityOption:(unsigned)option format:(unsigned *)format errorDescription:(out id *)description;	// 0x35501e21
+ (id)propertyListWithData:(id)data options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3551f271
+ (id)propertyListWithStream:(id)stream options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x355a0cb1
+ (int)writePropertyList:(id)list toStream:(id)stream format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x355a0bb5
- (id)init;	// 0x355a0b6d
@end

