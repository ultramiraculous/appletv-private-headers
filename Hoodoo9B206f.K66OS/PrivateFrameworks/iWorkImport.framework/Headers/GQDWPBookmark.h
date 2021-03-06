/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"


__attribute__((visibility("hidden")))
@interface GQDWPBookmark : GQDWPInlineList {
@private
	CFStringRef mName;	// 8 = 0x8
	BOOL mRanged;	// 12 = 0xc
	BOOL mHidden;	// 13 = 0xd
}
- (void)dealloc;	// 0x33fd938d
- (BOOL)isHidden;	// 0x33fd932d
- (BOOL)isRanged;	// 0x33fd931d
- (CFStringRef)name;	// 0x33fd930d
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x33fd93d1
@end

