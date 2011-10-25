/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class ATVJSContext;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVJSStorage : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVJSContext *context;	// G=0x33a2a3d5; S=0x33a2a3e9; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x33a2a40d; S=0x33a2a41d; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVReadWriteFeedResource> resource;	// G=0x33a2a42d; S=0x33a2a43d; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x33a29e3d
// declared property getter: - (id)context;	// 0x33a2a3d5
- (void)dealloc;	// 0x33a2a375
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x33a2a40d
// declared property getter: - (id)resource;	// 0x33a2a42d
// declared property setter: - (void)setContext:(id)context;	// 0x33a2a3e9
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x33a2a41d
// declared property setter: - (void)setResource:(id)resource;	// 0x33a2a43d
@end

