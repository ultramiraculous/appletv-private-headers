/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMetadataProvider.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : NSObject <BRMetadataProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x30740025; S=0x30740035; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x30740185
- (id)initWithCatalogItem:(id)catalogItem;	// 0x30740135
- (id)controlFactory;	// 0x3074005d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x30740045
- (id)dataAtIndex:(long)index;	// 0x30740061
- (long)dataCount;	// 0x30740049
- (void)dealloc;	// 0x307400ed
- (id)hashForDataAtIndex:(long)index;	// 0x30740075
- (void)populateMetadataForControl:(id)control;	// 0x30740071
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x30740035
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x30740025
@end

