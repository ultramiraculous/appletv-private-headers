/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDText;

@interface WDBlock : NSObject {
	WDText *mText;	// 4 = 0x4
}
- (id)init;	// 0x34c833f1
- (id)initWithText:(id)text;	// 0x34ac3e75
- (int)blockType;	// 0x34c833ed
- (void)clearProperties;	// 0x34c83415
- (id)document;	// 0x34ac41b5
- (BOOL)isEmpty;	// 0x34c83411
- (id)newRunIterator;	// 0x34c8340d
- (id)runIterator;	// 0x34c83409
- (id)text;	// 0x34ac42c9
- (int)textType;	// 0x34acbe85
@end

