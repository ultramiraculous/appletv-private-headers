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
@property(assign) BOOL serverRunning;	// G=0x4ad3e9; S=0x4ad401; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x4acfad
+ (id)instance;	// 0x4acf65
- (id)init;	// 0x4acbb9
- (void)dealloc;	// 0x4acc1d
- (void)debugHTTP:(BOOL)http;	// 0x4acfe9
- (void)httpServerMain:(id)main;	// 0x4ad009
// declared property getter: - (BOOL)serverRunning;	// 0x4ad3e9
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x4ad401
- (void)start;	// 0x4acc69
- (void)stop;	// 0x4ace21
@end

