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
- (id)init;	// 0x34aa73f1
- (id)initWithText:(id)text;	// 0x348e7e75
- (int)blockType;	// 0x34aa73ed
- (void)clearProperties;	// 0x34aa7415
- (id)document;	// 0x348e81b5
- (BOOL)isEmpty;	// 0x34aa7411
- (id)newRunIterator;	// 0x34aa740d
- (id)runIterator;	// 0x34aa7409
- (id)text;	// 0x348e82c9
- (int)textType;	// 0x348efe85
@end
