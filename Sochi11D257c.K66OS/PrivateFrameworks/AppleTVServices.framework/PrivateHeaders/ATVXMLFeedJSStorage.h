/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>
#import "AppleTVServices-Structs.h"

@class ATVXMLFeedLegacyJSContext;
@protocol ATVXMLFeedReadWriteFeedResource;

@interface ATVXMLFeedJSStorage : NSObject {
	ATVXMLFeedLegacyJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVXMLFeedReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVXMLFeedLegacyJSContext *context;	// G=0x3043f8e1; S=0x3043f8f5; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x3043f905; S=0x3043f915; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVXMLFeedReadWriteFeedResource> resource;	// G=0x3043f925; S=0x3043f935; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x3043f1ed
- (void).cxx_destruct;	// 0x3043f949
// declared property getter: - (id)context;	// 0x3043f8e1
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x3043f905
// declared property getter: - (id)resource;	// 0x3043f925
// declared property setter: - (void)setContext:(id)context;	// 0x3043f8f5
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x3043f915
// declared property setter: - (void)setResource:(id)resource;	// 0x3043f935
@end

