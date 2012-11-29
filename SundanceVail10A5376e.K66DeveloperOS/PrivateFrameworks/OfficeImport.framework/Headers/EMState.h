/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class EDSheet, EDWorkbook;

@interface EMState : CMState {
	EDWorkbook *_workbook;	// 40 = 0x28
	EDSheet *_currentSheet;	// 44 = 0x2c
}
@property(assign) EDSheet *currentSheet;	// G=0x36fb76f1; S=0x36fb4259; @synthesize=_currentSheet
@property(retain) EDWorkbook *workbook;	// G=0x36fb5325; S=0x36f9fd89; @synthesize=_workbook
// declared property getter: - (id)currentSheet;	// 0x36fb76f1
- (void)dealloc;	// 0x36fbcfd1
// declared property setter: - (void)setCurrentSheet:(id)sheet;	// 0x36fb4259
// declared property setter: - (void)setWorkbook:(id)workbook;	// 0x36f9fd89
// declared property getter: - (id)workbook;	// 0x36fb5325
@end
