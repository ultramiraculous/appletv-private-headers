/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <Foundation/NSString.h>


@interface _CPBundleIdentifierString : NSString {
	NSString *_executablePath;	// 4 = 0x4
	NSString *_bundleIdentifierOrProcessName;	// 8 = 0x8
	BOOL _isProcessName;	// 12 = 0xc
}
- (id)_initWithExecutablePath:(id)executablePath;	// 0x2ffd4221
- (BOOL)_isProcessName;	// 0x2ffd44c5
- (void)_loadBundleIdentifierOrProcessName;	// 0x2ffd42d9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x2ffd4529
- (void)dealloc;	// 0x2ffd4275
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x2ffd4565
- (unsigned)length;	// 0x2ffd44ed
@end

