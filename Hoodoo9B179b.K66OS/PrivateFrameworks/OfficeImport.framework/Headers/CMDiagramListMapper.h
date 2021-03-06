/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper {
@private
	float mMaxLineCount;	// 112 = 0x70
}
- (void)mapAt:(id)at withState:(id)state;	// 0x32928eed
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32929601
- (void)mapListItemAt:(id)at index:(int)index withState:(id)state;	// 0x32929659
- (void)setDefaultFonSize;	// 0x329291e5
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x3292937d
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32a26ba1
- (id)suggestedBoundsForHListItemWithIndex:(int)index;	// 0x32929739
- (CGSize)textSize;	// 0x32929545
@end

