/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsParentalLocaleControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	NSDictionary *_localeNameToLocaleIDMap;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *localeNameToLocaleIDMap;	// G=0x2c0c29; S=0x2c0c39; @synthesize=_localeNameToLocaleIDMap
- (id)initWithLocalNameMap:(id)localNameMap;	// 0x2c0a65
- (void).cxx_destruct;	// 0x2c0c61
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2c0ad5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2c0c25
// declared property getter: - (id)localeNameToLocaleIDMap;	// 0x2c0c29
// declared property setter: - (void)setLocaleNameToLocaleIDMap:(id)localeIDMap;	// 0x2c0c39
@end
