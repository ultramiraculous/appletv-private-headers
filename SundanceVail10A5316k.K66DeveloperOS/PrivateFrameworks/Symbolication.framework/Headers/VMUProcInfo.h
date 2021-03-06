/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
	unsigned _task;	// 4 = 0x4
	BOOL _needTaskPortDealloc;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	int _cpuType;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
	NSArray *_envVars;	// 24 = 0x18
	NSString *_procTableName;	// 28 = 0x1c
	NSString *_realAppName;	// 32 = 0x20
	NSString *_requestedAppName;	// 36 = 0x24
	NSString *_firstArg;	// 40 = 0x28
	int _pid;	// 44 = 0x2c
	int _ppid;	// 48 = 0x30
	timeval _startTime;	// 52 = 0x34
}
@property(readonly, retain) NSArray *arguments;	// G=0x313d7b0d; converted property
@property(readonly, assign) int cpuType;	// G=0x313d7f39; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x313d7b55; converted property
@property(readonly, retain) NSString *name;	// G=0x313d7bf9; converted property
@property(readonly, assign) int pid;	// G=0x313d7cfd; converted property
@property(readonly, assign) int ppid;	// G=0x313d7d0d; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x313d75f1; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x313d79cd; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x313d7a41; converted property
@property(readonly, assign) timeval startTime;	// G=0x313d74d5; converted property
@property(readonly, assign) unsigned task;	// G=0x313d7d1d; converted property
+ (id)getProcessIds;	// 0x313d72f5
+ (BOOL)isProcessRunning:(int)running;	// 0x313d741d
+ (int)processParentId:(int)anId;	// 0x313d7479
- (id)init;	// 0x313d70f9
- (id)initWithPid:(int)pid;	// 0x313d7125
- (id)initWithTask:(unsigned)task;	// 0x313d7151
- (id)_infoFromCommandLine:(int)commandLine;	// 0x313d771d
// converted property getter: - (id)arguments;	// 0x313d7b0d
- (int)compare:(id)compare;	// 0x313d80ed
- (int)compareByName:(id)name;	// 0x313d8141
- (int)compareByUserAppName:(id)name;	// 0x313d817d
// converted property getter: - (int)cpuType;	// 0x313d7f39
- (void)dealloc;	// 0x313d719d
- (id)description;	// 0x313d7ca9
// converted property getter: - (id)envVars;	// 0x313d7b55
- (void)finalize;	// 0x313d7295
- (id)firstArgument;	// 0x313d7ab5
- (unsigned)hash;	// 0x313d81b9
- (BOOL)isApp;	// 0x313d7ebd
- (BOOL)isCFM;	// 0x313d7ee5
- (BOOL)isEqual:(id)equal;	// 0x313d807d
- (BOOL)isMachO;	// 0x313d7ec1
- (BOOL)isNative;	// 0x313d7fe9
- (BOOL)isRunning;	// 0x313d7fed
// converted property getter: - (id)name;	// 0x313d7bf9
// converted property getter: - (int)pid;	// 0x313d7cfd
// converted property getter: - (int)ppid;	// 0x313d7d0d
// converted property getter: - (id)procTableName;	// 0x313d75f1
// converted property getter: - (id)realAppName;	// 0x313d79cd
// converted property getter: - (id)requestedAppName;	// 0x313d7a41
- (BOOL)signal:(int)signal;	// 0x313d8059
// converted property getter: - (timeval)startTime;	// 0x313d74d5
// converted property getter: - (unsigned)task;	// 0x313d7d1d
- (BOOL)terminate;	// 0x313d8021
- (void)update;	// 0x313d7d9d
- (id)userAppName;	// 0x313d7b9d
@end

