/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSMutableURLRequestProperties;

__attribute__((visibility("hidden")))
@interface ATVJSURLRequestProperties : XXUnknownSuperclass {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SSMutableURLRequestProperties *_requestProperties;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x166a69; S=0x166a79; @synthesize=_jsObjectRef
@property(retain, nonatomic) SSMutableURLRequestProperties *requestProperties;	// G=0x166a89; S=0x166a99; @synthesize=_requestProperties
- (id)initWithContext:(OpaqueJSContext *)context requestProperties:(id)properties;	// 0x166681
- (void)dealloc;	// 0x166a1d
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x166a69
// declared property getter: - (id)requestProperties;	// 0x166a89
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x166a79
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x166a99
@end
