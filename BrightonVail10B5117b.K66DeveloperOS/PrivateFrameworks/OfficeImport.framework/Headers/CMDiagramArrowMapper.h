/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
	BOOL mIsVertical;	// 112 = 0x70
	BOOL mIsOutward;	// 113 = 0x71
	float mRadius;	// 116 = 0x74
}
+ (void)initialize;	// 0x34bb5959
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x34bb59d1
- (CGRect)circumscribedBounds;	// 0x34bb62b9
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34bb5b91
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x34bb6385
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x34bb6441
@end

