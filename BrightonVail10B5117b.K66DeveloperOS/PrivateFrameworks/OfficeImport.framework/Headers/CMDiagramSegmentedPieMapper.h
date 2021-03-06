/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper {
	BOOL mDrawArrows;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x34bb6fd9
- (void)mapAt:(id)at withState:(id)state;	// 0x34bb6b49
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34bb6d61
- (int)pointCount;	// 0x34bb6b21
- (void)setDrawArrows:(BOOL)arrows;	// 0x34bb6b39
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x34bb7041
@end

