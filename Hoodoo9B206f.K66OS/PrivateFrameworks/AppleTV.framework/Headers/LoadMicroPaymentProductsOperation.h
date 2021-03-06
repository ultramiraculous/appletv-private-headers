/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "RequestQueueOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentProductsOperation : RequestQueueOperation {
@private
	NSArray *_invalidIdentifiers;	// 80 = 0x50
	NSArray *_productIdentifiers;	// 84 = 0x54
	NSArray *_products;	// 88 = 0x58
}
@property(retain) NSArray *invalidIdentifiers;	// G=0x367fd461; S=0x367fd475; @synthesize=_invalidIdentifiers
@property(retain) NSArray *productIdentifiers;	// G=0x367fd499; S=0x367fd4ad; @synthesize=_productIdentifiers
@property(retain) NSArray *products;	// G=0x367fd4d1; S=0x367fd4e5; @synthesize=_products
- (int)_bagType;	// 0x367fcb5d
- (void)_clientStoppedNotification:(id)notification;	// 0x367fcaad
- (id)_copyQueryStringDictionaryForApplication:(id)application productIdentifiers:(id)identifiers;	// 0x367fcf35
- (id)_copyResponseForApplication:(id)application identifiers:(id)identifiers returningError:(id *)error;	// 0x367fcd2d
- (id)_getApplicationWithError:(id *)error;	// 0x367fcb91
- (int)_getBatchSizeWithError:(id *)error;	// 0x367fcc1d
- (BOOL)_loadResponseForApplication:(id)application batchSize:(int)size returningError:(id *)error;	// 0x367fd1a1
- (id)copyResponseDictionary;	// 0x367fc73d
- (void)dealloc;	// 0x367fc689
// declared property getter: - (id)invalidIdentifiers;	// 0x367fd461
// declared property getter: - (id)productIdentifiers;	// 0x367fd499
// declared property getter: - (id)products;	// 0x367fd4d1
- (void)run;	// 0x367fc909
// declared property setter: - (void)setInvalidIdentifiers:(id)identifiers;	// 0x367fd475
// declared property setter: - (void)setProductIdentifiers:(id)identifiers;	// 0x367fd4ad
// declared property setter: - (void)setProducts:(id)products;	// 0x367fd4e5
@end

