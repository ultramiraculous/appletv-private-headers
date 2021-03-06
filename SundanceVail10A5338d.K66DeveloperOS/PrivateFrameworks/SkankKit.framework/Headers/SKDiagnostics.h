/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface SKDiagnostics : NSObject {
	unsigned _diagDataAccess;	// 4 = 0x4
	unsigned _pmuService;	// 8 = 0x8
	HDHangHistory *_hangHistory;	// 12 = 0xc
	void *_sysCfg;	// 16 = 0x10
}
@property(readonly, assign) unsigned diagDataAccess;	// G=0x33127435; converted property
@property(readonly, assign) HDHangHistory *hangHistory;	// G=0x3312785d; converted property
@property(readonly, assign) unsigned pmuService;	// G=0x33127639; converted property
@property(readonly, assign) void *sysCfg;	// G=0x33127a55; converted property
+ (id)sharedInstance;	// 0x331272d5
- (id)init;	// 0x331273a5
- (int)clearHangHistory;	// 0x331279bd
- (void)clearLastBootError;	// 0x33127801
- (void)dealloc;	// 0x331273d1
// converted property getter: - (unsigned)diagDataAccess;	// 0x33127435
- (void)flagSuccessfulBoot;	// 0x33127a05
// converted property getter: - (HDHangHistory *)hangHistory;	// 0x3312785d
- (int)lastBootError;	// 0x331277cd
- (int)lastBootStage;	// 0x3312776d
// converted property getter: - (unsigned)pmuService;	// 0x33127639
- (void *)pmuValueForIdentifier:(id)identifier;	// 0x33127715
- (int)readDiagnosticData:(char *)data offset:(unsigned)offset size:(unsigned)size set:(CFStringRef)set;	// 0x3312749d
- (HDHangHistory *)readHangHistory;	// 0x33127895
- (void *)readSysCfg;	// 0x33127a81
// converted property getter: - (void *)sysCfg;	// 0x33127a55
- (int)writeDiagnosticData:(char *)data offset:(unsigned)offset size:(unsigned)size commit:(int)commit set:(CFStringRef)set;	// 0x33127521
- (int)writeHangHistory:(HDHangHistory *)history;	// 0x33127941
- (int)writeSysCfg:(void *)cfg;	// 0x33127ae1
@end

