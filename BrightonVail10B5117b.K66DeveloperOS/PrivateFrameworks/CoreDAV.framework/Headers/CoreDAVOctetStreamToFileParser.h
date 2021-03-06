/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOctetStreamParser.h"

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(retain) NSFileHandle *fileHandle;	// G=0x338f90b5; S=0x338f90c9; @synthesize=_fileHandle
- (id)initWithFileHandle:(id)fileHandle;	// 0x338f8ff1
- (void)dealloc;	// 0x338f9039
// declared property getter: - (id)fileHandle;	// 0x338f90b5
- (BOOL)processData:(id)data forTask:(id)task;	// 0x338f9085
// declared property setter: - (void)setFileHandle:(id)handle;	// 0x338f90c9
@end

