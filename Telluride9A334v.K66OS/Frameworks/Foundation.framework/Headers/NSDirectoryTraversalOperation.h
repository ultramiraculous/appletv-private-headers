/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSOperation.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSDirectoryTraversalOperation : NSOperation {
@private
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_stream;	// 24 = 0x18
	int _optionsFlags;	// 28 = 0x1c
	int _lastDeviceInode;	// 32 = 0x20
	BOOL _shouldFilterUnderbars;	// 36 = 0x24
	BOOL _stopped;	// 37 = 0x25
}
@property(assign) id delegate;	// G=0x30667a5d; S=0x30667a6d; converted property
@property(readonly, retain) NSError *error;	// G=0x30667b85; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x306679b5
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x30667a0d
- (id)initWithPath:(id)path;	// 0x306679c1
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x30667c61
- (void)_setError:(id)error;	// 0x30667bbd
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x30667ad5
- (BOOL)_validatePaths:(id *)paths;	// 0x30667da1
- (void)dealloc;	// 0x30667fc1
// converted property getter: - (id)delegate;	// 0x30667a5d
// converted property getter: - (id)error;	// 0x30667b85
- (void)handlePathname:(id)pathname;	// 0x30667a7d
- (void)main;	// 0x30667da5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30667a6d
- (BOOL)shouldProceedAfterError:(id)error;	// 0x30667c01
@end

