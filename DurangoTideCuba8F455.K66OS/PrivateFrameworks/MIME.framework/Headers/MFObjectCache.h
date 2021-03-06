/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library


@interface MFObjectCache : NSObject {
	int _arrayCapacity;	// 4 = 0x4
	CFArrayRef _keysAndValues;	// 8 = 0x8
	BOOL _useIsEqual;	// 12 = 0xc
}
- (id)initWithCapacity:(long)capacity;	// 0x3151011d
- (void)dealloc;	// 0x31510159
- (BOOL)isObjectInCache:(id)cache;	// 0x315101e5
- (id)objectForKey:(id)key;	// 0x31510279
- (void)removeAllObjects;	// 0x315103e5
- (void)removeObjectForKey:(id)key;	// 0x31510349
- (void)setCapacity:(long)capacity;	// 0x31510199
- (void)setObject:(id)object forKey:(id)key;	// 0x315103fd
- (void)setUsesIsEqualForComparison:(BOOL)comparison;	// 0x3151010d
@end

