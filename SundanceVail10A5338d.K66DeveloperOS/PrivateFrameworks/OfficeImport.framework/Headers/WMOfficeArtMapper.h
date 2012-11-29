/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {
	BOOL mFloating;	// 80 = 0x50
	BOOL mIsMapped;	// 81 = 0x51
	BOOL mIsInsideGroup;	// 82 = 0x52
	WDAContent *mContent;	// 84 = 0x54
	unsigned mCurrentPage;	// 88 = 0x58
}
@property(assign) BOOL isInsideGroup;	// G=0x33b2b365; S=0x33ae3d4d; converted property
- (id)initWithOadDrawable:(id)oadDrawable asFloating:(BOOL)floating origin:(CGPoint)origin parent:(id)parent;	// 0x33a519dd
- (id)initWithWdOfficeArt:(id)wdOfficeArt parent:(id)parent;	// 0x33a51911
- (id)blipAtIndex:(unsigned)index;	// 0x33a51bed
- (CGSize)expandedSizeForTextBox:(id)textBox withState:(id)state;	// 0x33ae3d61
// converted property getter: - (BOOL)isInsideGroup;	// 0x33b2b365
- (void)mapAt:(id)at withState:(id)state;	// 0x33a51d61
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x33b2b389
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x33ae3b51
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x33a527f9
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x33a59b1d
- (void)mapOfficeArtTextboxAt:(id)at withState:(id)state;	// 0x33a5a049
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x33aff559
- (void)setBoundingBox;	// 0x33a51b11
- (void)setCurrentPage:(unsigned)page;	// 0x33b2b379
// converted property setter: - (void)setIsInsideGroup:(BOOL)group;	// 0x33ae3d4d
- (void)setWithClientData:(id)clientData state:(id)state;	// 0x33a51ff5
@end
