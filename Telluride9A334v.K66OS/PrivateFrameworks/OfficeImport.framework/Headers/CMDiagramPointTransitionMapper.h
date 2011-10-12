/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {
@private
	int mShapeType;	// 24 = 0x18
	NSDictionary *mAdjustValues;	// 28 = 0x1c
}
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type adjustValues:(id)values parent:(id)parent;	// 0x356d1835
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type parent:(id)parent;	// 0x356e4f49
- (void)mapAt:(id)at withState:(id)state;	// 0x356d1899
@end

