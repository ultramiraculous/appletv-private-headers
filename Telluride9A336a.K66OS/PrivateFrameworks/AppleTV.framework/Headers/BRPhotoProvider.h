/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;
@protocol BRControlFactory;

@interface BRPhotoProvider : NSObject <BRProvider> {
@private
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x33a5f4fd; S=0x33a5f4bd; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x33a5f3a5
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x33a5f3e5
// converted property getter: - (id)controlFactory;	// 0x33a5f4fd
- (id)dataAtIndex:(long)index;	// 0x33a5f52d
- (long)dataCount;	// 0x33a5f50d
- (void)dealloc;	// 0x33a5f45d
- (id)hashForDataAtIndex:(long)index;	// 0x33a5f579
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x33a5f4bd
@end

