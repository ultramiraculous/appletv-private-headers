/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "ATVJSObject.h"


__attribute__((visibility("hidden")))
@interface ATVJSNode : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *jsObjectRef;	// 4 = 0x4
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x342eadc5; S=0x342eadd5; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x342eab8d
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSNodeClass:(Class)atvjsnodeClass inContext:(OpaqueJSContext *)context;	// 0x342eaccd
+ (id)nodeFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x342ead55
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x342eadc5
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x342eadd5
@end

