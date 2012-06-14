/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface RUITrailersProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_trailers;	// 4 = 0x4
	id<BRControlFactory> _factory;	// 8 = 0x8
}
- (id)initWithData:(id)data controlFactory:(id)factory;	// 0xf4179
- (id)controlFactory;	// 0xf4255
- (id)dataAtIndex:(long)index;	// 0xf4285
- (long)dataCount;	// 0xf4265
- (void)dealloc;	// 0xf41f1
- (id)hashForDataAtIndex:(long)index;	// 0xf42a5
@end

