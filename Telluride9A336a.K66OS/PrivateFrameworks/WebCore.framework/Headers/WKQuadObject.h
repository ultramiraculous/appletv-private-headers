/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WKQuadObject : NSObject {
@private
	WKQuad _quad;	// 4 = 0x4
}
@property(readonly, assign) WKQuad quad;	// G=0x31bc57f5; converted property
- (id)initWithQuad:(WKQuad)quad;	// 0x31bc5921
- (CGRect)boundingBox;	// 0x31bc582d
// converted property getter: - (WKQuad)quad;	// 0x31bc57f5
@end

