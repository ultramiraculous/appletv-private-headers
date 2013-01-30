/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
	CPList *list;	// 4 = 0x4
	int number;	// 8 = 0x8
	CFArrayRef paragraphs;	// 12 = 0xc
}
@property(retain, nonatomic) CPList *list;	// G=0x338358ed; S=0x338358fd; @synthesize
@property(assign, nonatomic) int number;	// G=0x33835921; S=0x33835931; @synthesize
- (id)init;	// 0x338356f5
- (void)addParagraph:(id)paragraph;	// 0x33835839
- (void)dealloc;	// 0x338357b1
- (void)dispose;	// 0x3383574d
- (void)finalize;	// 0x33835771
// declared property getter: - (id)list;	// 0x338358ed
// declared property getter: - (int)number;	// 0x33835921
- (id)paragraphAtIndex:(unsigned)index;	// 0x33835825
- (unsigned)paragraphCount;	// 0x33835811
// declared property setter: - (void)setList:(id)list;	// 0x338358fd
// declared property setter: - (void)setNumber:(int)number;	// 0x33835931
@end
