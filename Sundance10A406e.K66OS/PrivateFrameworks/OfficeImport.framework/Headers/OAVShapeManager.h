/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, OCPPackagePart;

@interface OAVShapeManager : NSObject {
	xmlNode *mShape;	// 4 = 0x4
	unsigned short mType;	// 8 = 0x8
	OCPPackagePart *mPackagePart;	// 12 = 0xc
	NSDictionary *mShapeStyle;	// 16 = 0x10
	NSDictionary *mTextBoxStyle;	// 20 = 0x14
}
- (id)initWithShape:(xmlNode *)shape type:(unsigned short)type packagePart:(id)part;	// 0x34f4b4dd
- (BOOL)autoInsets;	// 0x350af899
- (void)dealloc;	// 0x34f50a81
- (float)fillAngle;	// 0x350039a9
- (float)fillBgAlpha;	// 0x35003cf1
- (id)fillBgColor;	// 0x35003a89
- (float)fillFgAlpha;	// 0x34f4cc3d
- (id)fillFgColor;	// 0x34f4cbb5
- (float)fillFocus;	// 0x35003a19
- (id)fillGradientColors;	// 0x35003af1
- (id)fillType;	// 0x34f4c9e1
- (BOOL)fitShapeToText;	// 0x34f4e171
- (id)imageFillId;	// 0x3500b34d
- (id)imageFillTitle;	// 0x350af6c1
- (id)imageRelId;	// 0x34f4b7c1
- (BOOL)isFillOK;	// 0x34f4caf1
- (BOOL)isFilled;	// 0x34f4ca49
- (BOOL)isImage;	// 0x34f4b795
- (BOOL)isShadowOK;	// 0x34f4f541
- (BOOL)isShadowed;	// 0x34f4f4c9
- (BOOL)isStrokeOK;	// 0x34f4e795
- (BOOL)isStroked;	// 0x34f4e6ed
- (BOOL)isWordArt;	// 0x34f4c469
- (id)limo;	// 0x350af611
- (id)movieRelId;	// 0x34fb51b1
- (id)packagePart;	// 0x34fb5171
- (id)path;	// 0x34f4d991
- (float)shadowAlpha;	// 0x3500337d
- (id)shadowColor;	// 0x35003315
- (CGPoint)shadowOffsets;	// 0x350033ed
- (id)shadowType;	// 0x350af7f1
- (xmlNode *)shape;	// 0x34f4dbbd
- (id)strokeBgColor;	// 0x350af719
- (id)strokeCapStyle;	// 0x34f4f13d
- (id)strokeCompoundType;	// 0x34f4f211
- (id)strokeDashStyle;	// 0x34f4e9e1
- (id)strokeEndArrowLength;	// 0x34f4f04d
- (id)strokeEndArrowType;	// 0x34f4ef7d
- (id)strokeEndArrowWidth;	// 0x34f4efe5
- (float)strokeFgAlpha;	// 0x34f4e56d
- (id)strokeFgColor;	// 0x34f4e4e5
- (id)strokeFillType;	// 0x34f4e801
- (id)strokeJoinStyle;	// 0x34f4ec05
- (float)strokeMiterLimit;	// 0x350af781
- (id)strokeStartArrowLength;	// 0x34f4ed3d
- (id)strokeStartArrowType;	// 0x34f4ec6d
- (id)strokeStartArrowWidth;	// 0x34f4ecd5
- (float)strokeWidth;	// 0x34f4f0b5
- (id)textAltLayoutFlow;	// 0x34f4e061
- (id)textAnchor;	// 0x34f4e1b9
- (id)textBodyRects;	// 0x350af669
- (OAVTextBoxInsets)textInsets;	// 0x34f4de91
- (id)textLayoutFlow;	// 0x34f4e021
- (id)textRotation;	// 0x350af8e5
- (id)textWrapStyle;	// 0x350af859
- (unsigned short)type;	// 0x34f4da0d
@end
