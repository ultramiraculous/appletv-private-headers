/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x312b7811
- (id)initWithParagraph:(id)paragraph;	// 0x310ebd11
- (void)clearProperties;	// 0x312b782d
- (void)dealloc;	// 0x310f4cd9
- (BOOL)isEmpty;	// 0x312b7829
- (id)paragraph;	// 0x310f0429
- (int)runType;	// 0x312b780d
@end

