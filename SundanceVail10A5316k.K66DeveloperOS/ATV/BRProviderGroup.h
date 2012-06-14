/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRProviderGroup : XXUnknownSuperclass {
	NSArray *_providers;	// 4 = 0x4
}
@property(readonly, retain) NSArray *providers;	// G=0x3256d9; converted property
+ (id)groupWithProviders:(id)providers;	// 0x32568d
- (id)initWithProviders:(id)providers;	// 0x3255ed
- (id)createControlAtGroupIndex:(long)groupIndex currentControl:(id)control requestedBy:(id)by;	// 0x32598d
- (id)createControlsInGroupRange:(NSRange)groupRange requestedBy:(id)by;	// 0x3259ed
- (long)dataCount;	// 0x3256e9
- (id)dataForGroupIndex:(long)groupIndex;	// 0x325795
- (void)dealloc;	// 0x325641
- (long)groupIndexForHash:(id)hash;	// 0x32587d
- (id)hashForDataAtGroupIndex:(long)groupIndex;	// 0x3257c5
- (id)providerForDataAtGroupIndex:(long)groupIndex providerIndex:(long *)index;	// 0x3257f5
// converted property getter: - (id)providers;	// 0x3256d9
@end

