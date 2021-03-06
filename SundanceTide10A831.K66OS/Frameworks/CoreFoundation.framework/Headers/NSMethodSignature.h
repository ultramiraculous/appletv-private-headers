/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSMethodSignature : NSObject {
	void *_private;	// 4 = 0x4
	void *_reserved[6];	// 8 = 0x8
}
+ (id)signatureWithObjCTypes:(const char *)objCTypes;	// 0x34557fcd
- (id)init;	// 0x345ff011
- (NSMethodFrameArgInfo *)_argInfo:(int)info;	// 0x34558add
- (Class)_classForObjectAtArgumentIndex:(int)argumentIndex;	// 0x3459d959
- (XXStruct_0V86UA *)_frameDescriptor;	// 0x34558699
- (id)_protocolsForObjectAtArgumentIndex:(int)argumentIndex;	// 0x345ff0f5
- (id)_signatureForBlockAtArgumentIndex:(int)argumentIndex;	// 0x3459d9b9
- (id)_typeString;	// 0x3459da65
- (void)dealloc;	// 0x345ff029
- (id)debugDescription;	// 0x345ff2ed
- (void)finalize;	// 0x345ff0a1
- (unsigned)frameLength;	// 0x345587ed
- (const char *)getArgumentTypeAtIndex:(unsigned)index;	// 0x34559a19
- (unsigned)hash;	// 0x345ff1e9
- (BOOL)isEqual:(id)equal;	// 0x3459dbe9
- (BOOL)isOneway;	// 0x345ff1c9
- (unsigned)methodReturnLength;	// 0x34584f41
- (const char *)methodReturnType;	// 0x3457c81d
- (unsigned)numberOfArguments;	// 0x34558ac5
@end

