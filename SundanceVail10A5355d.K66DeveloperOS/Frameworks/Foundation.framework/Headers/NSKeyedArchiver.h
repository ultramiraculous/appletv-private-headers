/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"


@interface NSKeyedArchiver : NSCoder {
	void *_stream;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _containers;	// 16 = 0x10
	id _objects;	// 20 = 0x14
	id _objRefMap;	// 24 = 0x18
	id _replacementMap;	// 28 = 0x1c
	id _classNameMap;	// 32 = 0x20
	id _conditionals;	// 36 = 0x24
	id _classes;	// 40 = 0x28
	unsigned _genericKey;	// 44 = 0x2c
	void *_cache;	// 48 = 0x30
	unsigned _cacheSize;	// 52 = 0x34
	unsigned _estimatedCount;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	id _visited;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(assign) id delegate;	// G=0x346c1d91; S=0x346c1d81; converted property
@property(assign) unsigned outputFormat;	// G=0x34652729; S=0x346c1da1; converted property
@property(assign) BOOL requiresSecureCoding;	// G=0x346c2af5; S=0x346c2b09; converted property
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x346c1b15
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x346514a9
+ (id)classNameForClass:(Class)aClass;	// 0x34652361
+ (void)initialize;	// 0x3466b829
+ (void)setClassName:(id)name forClass:(Class)aClass;	// 0x3466b8bd
- (id)init;	// 0x346c1ab9
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x34651569
- (id)_blobForCurrentObject;	// 0x346c1a91
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x3466bc29
- (void)_encodePropertyList:(id)list forKey:(id)key;	// 0x346764b9
- (id)_initWithOutput:(id)output;	// 0x34651579
- (void)_setBlobForCurrentObject:(id)currentObject;	// 0x346c1a41
- (BOOL)allowsKeyedCoding;	// 0x346523ed
- (id)classNameForClass:(Class)aClass;	// 0x34652339
- (void)dealloc;	// 0x34652bd1
// converted property getter: - (id)delegate;	// 0x346c1d91
- (id)description;	// 0x346c1d51
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x346c28e9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3466be75
- (void)encodeBycopyObject:(id)object;	// 0x346c2299
- (void)encodeByrefObject:(id)object;	// 0x346c22a9
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x346c22d9
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x346c1fad
- (void)encodeConditionalObject:(id)object;	// 0x346c21f5
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x346c1e09
- (void)encodeDataObject:(id)object;	// 0x346c22c9
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3467620d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x346c1ebd
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3466c301
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x34682edd
- (void)encodeInt:(int)int forKey:(id)key;	// 0x346760a1
- (void)encodeObject:(id)object;	// 0x346c20fd
- (void)encodeObject:(id)object forKey:(id)key;	// 0x34651785
- (void)encodeRootObject:(id)object;	// 0x346c22b9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x346c24dd
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x346c237d
- (void)finalize;	// 0x346c1c35
- (void)finishEncoding;	// 0x346524b5
// converted property getter: - (unsigned)outputFormat;	// 0x34652729
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x3465210d
// converted property getter: - (BOOL)requiresSecureCoding;	// 0x346c2af5
- (void)setClassName:(id)name forClass:(Class)aClass;	// 0x346834e1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x346c1d81
// converted property setter: - (void)setOutputFormat:(unsigned)format;	// 0x346c1da1
// converted property setter: - (void)setRequiresSecureCoding:(BOOL)coding;	// 0x346c2b09
- (unsigned)systemVersion;	// 0x346c2aed
- (int)versionForClassName:(id)className;	// 0x346c2ac5
@end

