/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NflxhlsAuthenticationPrimer, NSCondition;

@interface HTTPServer : XXUnknownSuperclass {
	NflxhlsAuthenticationPrimer *primer;	// 4 = 0x4
	BOOL serverRunning;	// 8 = 0x8
	BOOL serverStopping;	// 9 = 0x9
	NSCondition *stopCondition;	// 12 = 0xc
	BOOL serverRunning_;	// 16 = 0x10
}
@property(assign) BOOL serverRunning;	// G=0x509409; S=0x509421; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x508fcd
+ (id)instance;	// 0x508f85
- (id)init;	// 0x508bd9
- (void)dealloc;	// 0x508c3d
- (void)debugHTTP:(BOOL)http;	// 0x509009
- (void)httpServerMain:(id)main;	// 0x509029
// declared property getter: - (BOOL)serverRunning;	// 0x509409
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x509421
- (void)start;	// 0x508c89
- (void)stop;	// 0x508e41
@end

