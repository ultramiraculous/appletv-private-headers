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
- (id)init;	// 0x371a33f1
- (id)initWithText:(id)text;	// 0x36fe3e75
- (int)blockType;	// 0x371a33ed
- (void)clearProperties;	// 0x371a3415
- (id)document;	// 0x36fe41b5
- (BOOL)isEmpty;	// 0x371a3411
- (id)newRunIterator;	// 0x371a340d
- (id)runIterator;	// 0x371a3409
- (id)text;	// 0x36fe42c9
- (int)textType;	// 0x36febe85
@end

