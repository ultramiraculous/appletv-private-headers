/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVNetflixMediaOpenRequest : XXUnknownSuperclass {
	NSString *_url;	// 4 = 0x4
	NSDictionary *_params;	// 8 = 0x8
	id _openFinishedHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id openFinishedHandler;	// G=0x26c011; S=0x26c025; @synthesize=_openFinishedHandler
@property(retain, nonatomic) NSDictionary *params;	// G=0x26bfd9; S=0x26bfe9; @synthesize=_params
@property(retain, nonatomic) NSString *url;	// G=0x26bfa1; S=0x26bfb1; @synthesize=_url
- (void).cxx_destruct;	// 0x26c035
// declared property getter: - (id)openFinishedHandler;	// 0x26c011
// declared property getter: - (id)params;	// 0x26bfd9
// declared property setter: - (void)setOpenFinishedHandler:(id)handler;	// 0x26c025
// declared property setter: - (void)setParams:(id)params;	// 0x26bfe9
// declared property setter: - (void)setUrl:(id)url;	// 0x26bfb1
// declared property getter: - (id)url;	// 0x26bfa1
@end

