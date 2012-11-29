/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSXPCCoder.h"

@class NSMutableArray, NSXPCConnection;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
	NSMutableArray *_containers;	// 12 = 0xc
	NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
	NSXPCConnection *_connection;	// 20 = 0x14
	CFDictionaryRef _replacedObjects;	// 24 = 0x18
	CFDictionaryRef _replacedByDelegateObjects;	// 28 = 0x1c
	id<NSXPCEncoderDelegate> _delegate;	// 32 = 0x20
	BOOL _askForReplacement;	// 36 = 0x24
}
@property(assign) NSXPCConnection *_connection;	// G=0x3265ca31; S=0x32543b9d; @synthesize
@property(assign) id<NSXPCEncoderDelegate> delegate;	// G=0x3265ca45; S=0x32543bb9; @synthesize=_delegate
- (id)init;	// 0x32543a99
- (void)_addObject:(id)object forKey:(id)key;	// 0x3254417d
// declared property getter: - (id)_connection;	// 0x3265ca31
- (id)_createRootXPCObject;	// 0x32544bdd
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x3265c465
- (id)_encodeXPCObject:(id)object;	// 0x3265c299
- (void)_popContainer;	// 0x32544bbd
- (void)_pushContainer:(id)container;	// 0x32543b7d
- (void)_pushContainerForKey:(id)key;	// 0x32544129
- (id)_topContainer;	// 0x3254423d
- (BOOL)allowsKeyedCoding;	// 0x3265c43d
- (void)dealloc;	// 0x32544ca5
- (id)debugDescription;	// 0x3265c37d
// declared property getter: - (id)delegate;	// 0x3265ca45
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x32544b79
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x3265c8dd
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x3265c9e9
- (void)encodeDataObject:(id)object;	// 0x3265c451
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3265c84d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3265c809
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3265c775
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3265c7b9
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3265c731
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x3265c89d
- (void)encodeInvocation:(id)invocation;	// 0x3254428d
- (void)encodeObject:(id)object;	// 0x32544b01
- (void)encodeObject:(id)object forKey:(id)key;	// 0x32543be9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x3265c445
- (void)encodeXPCObject:(id)object forKey:(id)key;	// 0x3265c9b5
- (void)finalize;	// 0x3265c30d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32543bb9
// declared property setter: - (void)set_connection:(id)connection;	// 0x32543b9d
@end
