/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramPointMapper.h"
#import "OfficeImport-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {
@private
	int mShapeType;	// 24 = 0x18
	NSDictionary *mAdjustValues;	// 28 = 0x1c
}
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type adjustValues:(id)values parent:(id)parent;	// 0x30dd2835
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type parent:(id)parent;	// 0x30de5f49
- (void)mapAt:(id)at withState:(id)state;	// 0x30dd2899
@end

