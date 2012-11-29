/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIView.h> // Unknown library

@class UIPDFAnnotation;

@interface UIPDFAnnotationView : UIView {
	CGColorRef _color[7];	// 84 = 0x54
	UIPDFAnnotation *_annotation;	// 112 = 0x70
}
@property(retain, nonatomic) UIPDFAnnotation *annotation;	// G=0x33330889; S=0x33330899; @synthesize=_annotation
- (id)initWithFrame:(CGRect)frame;	// 0x3333069d
// declared property getter: - (id)annotation;	// 0x33330889
- (CGColorRef)annotationStyleColor;	// 0x3333084d
- (void)dealloc;	// 0x33330801
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x33330899
@end
