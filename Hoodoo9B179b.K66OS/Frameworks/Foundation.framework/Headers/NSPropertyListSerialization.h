/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSPropertyListSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3109a3e5
+ (id)dataFromPropertyList:(id)propertyList format:(unsigned)format errorDescription:(out id *)description;	// 0x31012ed1
+ (id)dataWithPropertyList:(id)propertyList format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3102ad21
+ (BOOL)propertyList:(id)list isValidForFormat:(unsigned)format;	// 0x3109a3d5
+ (id)propertyListFromData:(id)data mutabilityOption:(unsigned)option format:(unsigned *)format errorDescription:(out id *)description;	// 0x3100873d
+ (id)propertyListWithData:(id)data options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3101dfa9
+ (id)propertyListWithStream:(id)stream options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3109a56d
+ (int)writePropertyList:(id)list toStream:(id)stream format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3109a475
- (id)init;	// 0x3109a42d
@end

