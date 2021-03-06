/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMediatorProvider : XXUnknownSuperclass <BRControlFactory, BRProvider> {
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x357149; converted property
+ (id)provider;	// 0x356d3d
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x356ead
+ (id)providerWithControlArray:(id)controlArray;	// 0x357065
+ (id)providerWithControls:(id)controls;	// 0x356fb5
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x356ef9
+ (id)providerWithMediator:(id)mediator;	// 0x356d89
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x356e61
+ (id)providerWithMediators:(id)mediators;	// 0x356dd5
- (id)init;	// 0x356c99
- (id)initWithMediators:(id)mediators;	// 0x356b71
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x3576f9
- (void)_activeStateChanged:(id)changed;	// 0x357575
- (void)_controlChanged:(id)changed;	// 0x35767d
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x357791
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x35742d
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x3574e5
- (void)addMediator:(id)mediator;	// 0x357159
- (id)controlFactory;	// 0x35739d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x357419
- (id)dataAtIndex:(long)index;	// 0x3573c1
- (long)dataCount;	// 0x3573a1
- (void)dealloc;	// 0x356cad
- (id)hashForDataAtIndex:(long)index;	// 0x3573e1
- (void)insertMediator:(id)mediator after:(id)after;	// 0x357275
- (void)insertMediator:(id)mediator before:(id)before;	// 0x3572d5
- (id)mediatorWithIdentifier:(id)identifier;	// 0x357321
// converted property getter: - (id)mediators;	// 0x357149
- (void)removeMediator:(id)mediator;	// 0x357199
@end

