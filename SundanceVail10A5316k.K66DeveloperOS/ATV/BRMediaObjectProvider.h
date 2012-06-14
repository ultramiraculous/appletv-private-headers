/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSString, NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRMediaObjectProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	NSArray *_mediaObjects;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) id controlFactory;	// G=0x324205; S=0x3241a1; converted property
@property(retain) NSArray *mediaObjects;	// G=0x324191; S=0x324155; converted property
@property(retain) NSString *name;	// G=0x3242e1; S=0x3242a5; converted property
+ (id)providerWithMediaObjects:(id)mediaObjects controlFactory:(id)factory;	// 0x324065
- (long)controlCount;	// 0x324295
// converted property getter: - (id)controlFactory;	// 0x324205
- (id)dataAtIndex:(long)index;	// 0x324215
- (long)dataCount;	// 0x3241dd
- (void)dealloc;	// 0x3240dd
- (id)hashForDataAtIndex:(long)index;	// 0x324241
// converted property getter: - (id)mediaObjects;	// 0x324191
// converted property getter: - (id)name;	// 0x3242e1
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x3241a1
// converted property setter: - (void)setMediaObjects:(id)objects;	// 0x324155
// converted property setter: - (void)setName:(id)name;	// 0x3242a5
@end

