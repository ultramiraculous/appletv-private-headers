/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSString.h> // Unknown library
#import "AppSupport-Structs.h"


@interface _CPBundleIdentifierString : NSString {
	NSString *_executablePath;	// 4 = 0x4
	NSString *_bundleIdentifierOrProcessName;	// 8 = 0x8
	BOOL _isProcessName;	// 12 = 0xc
}
- (id)_initWithExecutablePath:(id)executablePath;	// 0x331be989
- (BOOL)_isProcessName;	// 0x331bec35
- (void)_loadBundleIdentifierOrProcessName;	// 0x331bea41
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x331bec99
- (void)dealloc;	// 0x331be9dd
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x331becd5
- (unsigned)length;	// 0x331bec5d
@end

