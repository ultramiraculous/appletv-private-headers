/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRAirportNetworksProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x32334d
- (id)controlFactory;	// 0x323421
- (id)dataAtIndex:(long)index;	// 0x323485
- (long)dataCount;	// 0x323465
- (void)dealloc;	// 0x323301
- (id)hashForDataAtIndex:(long)index;	// 0x3234a5
- (void)setNetworks:(id)networks;	// 0x3233a1
@end

