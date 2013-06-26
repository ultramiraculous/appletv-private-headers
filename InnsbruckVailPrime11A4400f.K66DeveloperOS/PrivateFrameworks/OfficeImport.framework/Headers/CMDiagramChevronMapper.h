/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
	BOOL mHChevron;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x31885da9
- (void)mapAt:(id)at withState:(id)state;	// 0x31885c21
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x31885f49
- (void)setIsHChevron:(BOOL)chevron;	// 0x3189c069
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x31885d31
@end
