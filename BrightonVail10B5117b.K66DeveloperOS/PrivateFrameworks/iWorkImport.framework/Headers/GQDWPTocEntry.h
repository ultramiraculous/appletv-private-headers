/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPBlockList.h"


@interface GQDWPTocEntry : GQDWPBlockList {
	CFStringRef mBookmark;	// 8 = 0x8
}
- (CFStringRef)bookmark;	// 0x36aa9bb5
- (void)dealloc;	// 0x36aa9b71
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x36aa9bc5
@end

