/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <StoreServices/_SSHTTPHeaderUserAgent.h>

@class NSDictionary, BRMerchant, BRControl;

__attribute__((visibility("hidden")))
@interface ATVAction : _SSHTTPHeaderUserAgent {
	NSDictionary *_parameters;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRMerchant *_merchant;	// 12 = 0xc
}
@property(retain) BRControl *control;	// G=0x12c0e5; S=0x12c0f9; @synthesize=_control
@property(retain) BRMerchant *merchant;	// G=0x12c109; S=0x12c11d; @synthesize=_merchant
@property(retain) NSDictionary *parameters;	// G=0x12c081; S=0x12c03d; @synthesize=_parameters
+ (id)actionWithName:(id)name;	// 0x12bebd
// declared property getter: - (id)control;	// 0x12c0e5
- (void)dealloc;	// 0x12bfc5
- (void)invoke;	// 0x12c091
// declared property getter: - (id)merchant;	// 0x12c109
// declared property getter: - (id)parameters;	// 0x12c081
// declared property setter: - (void)setControl:(id)control;	// 0x12c0f9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x12c11d
// declared property setter: - (void)setParameters:(id)parameters;	// 0x12c03d
@end

