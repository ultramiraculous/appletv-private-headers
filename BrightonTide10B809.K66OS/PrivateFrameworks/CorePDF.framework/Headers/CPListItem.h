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
@property(retain, nonatomic) CPList *list;	// G=0x338368ed; S=0x338368fd; @synthesize
@property(assign, nonatomic) int number;	// G=0x33836921; S=0x33836931; @synthesize
- (id)init;	// 0x338366f5
- (void)addParagraph:(id)paragraph;	// 0x33836839
- (void)dealloc;	// 0x338367b1
- (void)dispose;	// 0x3383674d
- (void)finalize;	// 0x33836771
// declared property getter: - (id)list;	// 0x338368ed
// declared property getter: - (int)number;	// 0x33836921
- (id)paragraphAtIndex:(unsigned)index;	// 0x33836825
- (unsigned)paragraphCount;	// 0x33836811
// declared property setter: - (void)setList:(id)list;	// 0x338368fd
// declared property setter: - (void)setNumber:(int)number;	// 0x33836931
@end

