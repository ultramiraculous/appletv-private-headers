/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>


@interface GQDImageBinary : NSObject {
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x33caf22d
- (CFURLRef)absoluteUrlForState:(id)state;	// 0x33caf149
- (void)dealloc;	// 0x33caf0d5
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0x33caf231
- (CFStringRef)relativePath;	// 0x33caf21d
- (int)resourceType;	// 0x33caf20d
- (CGSize)size;	// 0x33caf131
@end
