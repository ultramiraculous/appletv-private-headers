/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVSettingsSaver.h"

@class BRMerchantInfo;

__attribute__((visibility("hidden")))
@interface BRMerchant : XXUnknownSuperclass <ATVSettingsSaver> {
	BRMerchantInfo *_info;	// 4 = 0x4
}
@property(assign) BOOL enabled;	// G=0x353f91; S=0x353fb9; 
@property(retain) BRMerchantInfo *info;	// G=0x353f19; S=0x353f29; @dynamic
+ (id)flagstaff;	// 0x1b7b11
+ (id)itms;	// 0x1b7a8d
+ (id)merchantForControl:(id)control;	// 0x353a99
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x353aad
+ (id)merchantForObject:(id)object;	// 0x3537a5
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x3537b9
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x353b0d
+ (id)sedona;	// 0x1b7acd
- (id)initWithCoder:(id)coder;	// 0x353d6d
- (id)initWithIdentifier:(id)identifier;	// 0x353cd9
- (id)initWithVendorBag:(id)vendorBag;	// 0x353c49
- (id)accountType;	// 0x353f8d
- (void)addPathsToSaveTo:(id)to;	// 0x353e91
- (void)assignToControl:(id)control;	// 0x3540d5
- (BOOL)assignToObject:(id)object;	// 0x353fe5
- (Class)catalogAgent;	// 0x1b7b51
- (id)copyWithZone:(NSZone *)zone;	// 0x353d69
- (void)dealloc;	// 0x353d75
- (void)decorateRequestProperties:(id)properties;	// 0x35410d
- (id)description;	// 0x353df1
// declared property getter: - (BOOL)enabled;	// 0x353f91
- (void)encodeWithCoder:(id)coder;	// 0x353d71
- (id)evaluatePlist:(id)plist;	// 0x354341
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x3541c5
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x3541e9
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body timeout:(double)timeout;	// 0x35421d
- (BOOL)hasAffinityToURL:(id)url;	// 0x354349
- (id)identifier;	// 0x353f65
// declared property getter: - (id)info;	// 0x353f19
- (id)localizedStringForKey:(id)key;	// 0x354335
- (id)merchantErrorForError:(id)error;	// 0x35433d
- (id)playerDelegate;	// 0x354345
- (oneway void)release;	// 0x353d5d
- (id)retain;	// 0x353d59
- (unsigned)retainCount;	// 0x353d61
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x353fb9
// declared property setter: - (void)setInfo:(id)info;	// 0x353f29
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x353e95
@end

