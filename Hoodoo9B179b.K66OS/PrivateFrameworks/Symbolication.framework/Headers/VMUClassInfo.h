/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding> {
@private
	id _reader;	// 4 = 0x4
	unsigned long long _remoteIsa;	// 8 = 0x8
	unsigned _remotePointerSize;	// 16 = 0x10
	unsigned _ivarCount;	// 20 = 0x14
	unsigned _superclassOffset;	// 24 = 0x18
	unsigned _instanceSize;	// 28 = 0x1c
	unsigned _ro_flags;	// 32 = 0x20
	unsigned _rw_flags;	// 36 = 0x24
	objc_ivar **_localIvarList;	// 40 = 0x28
	int *_ivarSizes;	// 44 = 0x2c
	int _remoteType;	// 48 = 0x30
	NSString *_remoteClassName;	// 52 = 0x34
	NSString *_remoteBinaryName;	// 56 = 0x38
	VMUClassInfo *_superclassLayout;	// 60 = 0x3c
	char *_weakLayout;	// 64 = 0x40
	char *_strongLayout;	// 68 = 0x44
	BOOL *_weakMap;	// 72 = 0x48
	BOOL *_strongMap;	// 76 = 0x4c
}
@property(readonly, assign) NSString *binaryName;	// G=0x34d41fcd; @synthesize=_remoteBinaryName
@property(readonly, assign) NSString *className;	// G=0x34d420b9; @synthesize=_remoteClassName
@property(readonly, assign) NSString *fullIvarDescription;	// G=0x34d42585; 
@property(readonly, assign) BOOL hasCppConstructorOrDestructor;	// G=0x34d420a5; 
@property(readonly, assign) int infoType;	// G=0x34d42045; 
@property(readonly, assign) unsigned instanceSize;	// G=0x34d420c9; @synthesize=_instanceSize
@property(readonly, assign) BOOL isARR;	// G=0x34d42055; 
@property(readonly, assign) BOOL isMetaClass;	// G=0x34d4207d; 
@property(readonly, assign) BOOL isRealized;	// G=0x34d42069; 
@property(readonly, assign) BOOL isRootClass;	// G=0x34d42091; 
@property(readonly, assign) unsigned long long remoteIsa;	// G=0x34d42441; @synthesize=_remoteIsa
@property(readonly, assign) NSString *shortIvarDescription;	// G=0x34d42505; 
@property(readonly, assign) NSString *typeName;	// G=0x34d41fed; 
+ (id)classInfoWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x34d423b9
+ (id)descriptionForTypeEncoding:(const char *)typeEncoding ivarName:(const char *)name;	// 0x34d42399
+ (void)initialize;	// 0x34d42401
- (id)initWithClass:(unsigned long long)aClass infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x34d421a9
- (id)initWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x34d43a21
- (id)initWithCoder:(id)coder;	// 0x34d42cd9
- (id)initWithIsaPointer:(unsigned)isaPointer symbolicator:(CSTypeRef)symbolicator;	// 0x34d43945
- (objc_ivar *)_copyRemoteIvarAt:(unsigned long long)at;	// 0x34d43d15
- (const char *)_copyRemoteLayout:(unsigned long long)layout;	// 0x34d42199
- (const char *)_copyRemoteStringAt:(unsigned long long)at;	// 0x34d420d9
- (id)_initWithClass:(unsigned long long)aClass doLayouts:(BOOL)layouts infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x34d4332d
- (id)_ivarDescription:(unsigned)description withSpacing:(unsigned)spacing;	// 0x34d42c15
- (void)_logDescriptionWithSuperclasses:(BOOL)superclasses indentation:(int)indentation toLogger:(id)logger;	// 0x34d4298d
- (void)_parseIvarsAndLayouts;	// 0x34d43b29
- (BOOL *)_processARRLayout:(const char *)layout;	// 0x34d43c3d
- (int)_readRemoteIntAt:(unsigned long long)at;	// 0x34d41f4d
- (unsigned long long)_readRemotePointerAt:(unsigned long long)at;	// 0x34d41f7d
- (void)_scanFieldsToOffset:(unsigned)offset withBlock:(id)block;	// 0x34d427b1
- (void)_setClassNameWithAddress:(unsigned long long)address;	// 0x34d43ac5
// declared property getter: - (id)binaryName;	// 0x34d41fcd
// declared property getter: - (id)className;	// 0x34d420b9
- (void)dealloc;	// 0x34d43179
- (id)debugDescription;	// 0x34d424f5
- (id)description;	// 0x34d42475
- (void)encodeWithCoder:(id)coder;	// 0x34d42f6d
- (void)enumerateIvarsWithBlock:(id)block;	// 0x34d42611
// declared property getter: - (id)fullIvarDescription;	// 0x34d42585
// declared property getter: - (BOOL)hasCppConstructorOrDestructor;	// 0x34d420a5
- (unsigned)hash;	// 0x34d421e9
// declared property getter: - (int)infoType;	// 0x34d42045
// declared property getter: - (unsigned)instanceSize;	// 0x34d420c9
// declared property getter: - (BOOL)isARR;	// 0x34d42055
- (BOOL)isEqual:(id)equal;	// 0x34d42221
// declared property getter: - (BOOL)isMetaClass;	// 0x34d4207d
// declared property getter: - (BOOL)isRealized;	// 0x34d42069
// declared property getter: - (BOOL)isRootClass;	// 0x34d42091
// declared property getter: - (unsigned long long)remoteIsa;	// 0x34d42441
- (void)scanObject:(unsigned long long)object ofSize:(unsigned)size withBlock:(id)block;	// 0x34d42725
- (void)setMemoryReader:(id)reader;	// 0x34d426ed
// declared property getter: - (id)shortIvarDescription;	// 0x34d42505
- (id)type;	// 0x34d42601
// declared property getter: - (id)typeName;	// 0x34d41fed
@end
