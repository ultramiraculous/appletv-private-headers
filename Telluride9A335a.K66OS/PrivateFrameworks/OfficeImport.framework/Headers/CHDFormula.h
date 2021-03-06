/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFormula.h"

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula : EDFormula {
@private
	EDReferenceCollection *mReferences;	// 8 = 0x8
	EDWorkbook *mWorkbook;	// 12 = 0xc
}
@property(retain) id references;	// G=0x35298939; S=0x35298d01; converted property
+ (id)formulaWithReference:(id)reference;	// 0x35312c85
+ (id)formulaWithReferences:(id)references;	// 0x35324b3d
- (id)initWithReference:(id)reference;	// 0x35312cd1
- (id)initWithReferences:(id)references;	// 0x35324b89
- (id)initWithWorkbook:(id)workbook;	// 0x3538b72d
- (unsigned)countOfCellsBeingReferenced;	// 0x35298da1
- (void)dealloc;	// 0x352a0b81
- (bool)isConstantStringFormula;	// 0x3538b771
- (void)prepareTokens;	// 0x3538b7c5
// converted property getter: - (id)references;	// 0x35298939
- (id)referencesFromFormula;	// 0x352989ad
// converted property setter: - (void)setReferences:(id)references;	// 0x35298d01
- (void)setWorkbook:(id)workbook;	// 0x35293c95
@end

