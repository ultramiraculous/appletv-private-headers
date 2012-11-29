/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library


@interface XPCDetailedSignature : NSObject {
	unsigned _argumentCount;	// 4 = 0x4
	Class *_classes;	// 8 = 0x8
}
+ (id)signatureWithArgumentCount:(unsigned)argumentCount classes:(Class)classes;	// 0x36c8dda1
+ (id)signatureWithoutArguments;	// 0x36c8de31
- (id)initWithArgumentCount:(unsigned)argumentCount;	// 0x36c8de4d
- (Class)argumentClassAtIndex:(unsigned)index;	// 0x36c8df9d
- (void)dealloc;	// 0x36c8dea9
- (void)setClass:(Class)aClass forArgumentAtIndex:(unsigned)index;	// 0x36c8deed
@end
