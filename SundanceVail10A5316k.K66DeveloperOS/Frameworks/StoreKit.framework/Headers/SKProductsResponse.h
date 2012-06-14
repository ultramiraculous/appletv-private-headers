/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface SKProductsResponse : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *invalidProductIdentifiers;	// G=0x34a0374d; 
@property(readonly, assign, nonatomic) NSArray *products;	// G=0x34a03791; 
- (id)init;	// 0x34a03699
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34a037d5
- (void)_setInvalidIdentifiers:(id)identifiers;	// 0x34a03c01
- (void)_setProducts:(id)products;	// 0x34a03c51
- (id)copyXPCEncoding;	// 0x34a03acd
- (void)dealloc;	// 0x34a036fd
// declared property getter: - (id)invalidProductIdentifiers;	// 0x34a0374d
// declared property getter: - (id)products;	// 0x34a03791
@end
