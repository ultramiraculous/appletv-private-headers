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
@property(assign) id delegate;	// G=0x302bea5d; S=0x302bea6d; converted property
@property(readonly, retain) NSError *error;	// G=0x302beb85; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x302be9b5
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x302bea0d
- (id)initWithPath:(id)path;	// 0x302be9c1
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x302bec61
- (void)_setError:(id)error;	// 0x302bebbd
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x302bead5
- (BOOL)_validatePaths:(id *)paths;	// 0x302beda1
- (void)dealloc;	// 0x302befc1
// converted property getter: - (id)delegate;	// 0x302bea5d
// converted property getter: - (id)error;	// 0x302beb85
- (void)handlePathname:(id)pathname;	// 0x302bea7d
- (void)main;	// 0x302beda5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x302bea6d
- (BOOL)shouldProceedAfterError:(id)error;	// 0x302bec01
@end
