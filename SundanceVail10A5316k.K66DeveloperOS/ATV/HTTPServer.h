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
@property(assign) BOOL serverRunning;	// G=0x442699; S=0x4426a9; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x44227d
+ (id)instance;	// 0x442235
- (id)init;	// 0x441ea5
- (void)dealloc;	// 0x441f09
- (void)debugHTTP:(BOOL)http;	// 0x4422b9
- (void)httpServerMain:(id)main;	// 0x4422e1
// declared property getter: - (BOOL)serverRunning;	// 0x442699
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x4426a9
- (void)start;	// 0x441f55
- (void)stop;	// 0x4420fd
@end

