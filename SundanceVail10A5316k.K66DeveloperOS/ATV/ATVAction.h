/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl, BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVAction : XXUnknownSuperclass {
	NSDictionary *_parameters;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRMerchant *_merchant;	// 12 = 0xc
}
@property(retain) BRControl *control;	// G=0x126c31; S=0x126c45; @synthesize=_control
@property(retain) BRMerchant *merchant;	// G=0x126c55; S=0x126c69; @synthesize=_merchant
@property(retain) NSDictionary *parameters;	// G=0x126bcd; S=0x126b89; @synthesize=_parameters
+ (id)actionWithName:(id)name;	// 0x126a09
// declared property getter: - (id)control;	// 0x126c31
- (void)dealloc;	// 0x126b11
- (void)invoke;	// 0x126bdd
// declared property getter: - (id)merchant;	// 0x126c55
// declared property getter: - (id)parameters;	// 0x126bcd
// declared property setter: - (void)setControl:(id)control;	// 0x126c45
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x126c69
// declared property setter: - (void)setParameters:(id)parameters;	// 0x126b89
@end

