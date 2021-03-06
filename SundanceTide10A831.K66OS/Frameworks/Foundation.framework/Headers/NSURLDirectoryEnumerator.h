/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSDirectoryEnumerator.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x325709fd; S=0x32570a11; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x325707bd
- (void)dealloc;	// 0x32570955
- (id)directoryAttributes;	// 0x32570951
// declared property getter: - (id)errorHandler;	// 0x325709fd
- (id)fileAttributes;	// 0x3257094d
- (void)finalize;	// 0x325709b9
- (unsigned)level;	// 0x32570939
- (id)nextObject;	// 0x3257089d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x32570a11
- (void)skipDescendants;	// 0x32570925
- (void)skipDescendents;	// 0x32570915
@end

