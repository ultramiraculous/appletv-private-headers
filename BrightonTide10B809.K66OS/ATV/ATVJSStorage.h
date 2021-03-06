/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVJSContext;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVJSStorage : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVJSContext *context;	// G=0x1845cd; S=0x1845e1; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x1845f1; S=0x184601; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVReadWriteFeedResource> resource;	// G=0x184611; S=0x184621; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x184025
// declared property getter: - (id)context;	// 0x1845cd
- (void)dealloc;	// 0x184569
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x1845f1
// declared property getter: - (id)resource;	// 0x184611
// declared property setter: - (void)setContext:(id)context;	// 0x1845e1
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x184601
// declared property setter: - (void)setResource:(id)resource;	// 0x184621
@end

