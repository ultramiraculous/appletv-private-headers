/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString;

@interface CATextLayer : CALayer {
@private
	CATextLayerPrivateRef _state;	// 48 = 0x30
}
@property(copy) NSString *alignmentMode;	// G=0x34f63b49; S=0x34f63b41; 
@property(assign) BOOL allowsFontSubpixelQuantization;	// G=0x34f6484d; S=0x34f64859; 
@property(assign) void *font;	// G=0x34f63b91; S=0x34f63b89; 
@property(assign) float fontSize;	// G=0x34f63ba1; S=0x34f63b99; 
@property(assign) CGColorRef foregroundColor;	// G=0x34f63b81; S=0x34f63b79; 
@property(copy) id string;	// G=0x34f63bb1; S=0x34f63ba9; 
@property(copy) NSString *truncationMode;	// G=0x34f63b59; S=0x34f63b51; 
@property(copy) id truncationString;	// G=0x34f6483d; S=0x34f64845; 
@property(assign, getter=isWrapped) BOOL wrapped;	// G=0x34f63b69; S=0x34f63b61; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x34f63925
+ (id)defaultValueForKey:(id)key;	// 0x34f639a1
+ (BOOL)needsDisplayForKey:(id)key;	// 0x34f6397d
- (id)init;	// 0x34f638f9
- (id)initWithLayer:(id)layer;	// 0x34f646b9
- (void)_applyLinesToFunction:(/*function-pointer*/ void *)function info:(void *)info;	// 0x34f63d0d
- (id)_createStringDict;	// 0x34f643d1
- (CTLineRef)_createTruncationToken;	// 0x34f6426d
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x34f63ced
- (CGSize)_preferredSize;	// 0x34f64071
- (void)_prepareContext:(CGContextRef)context;	// 0x34f63bb9
- (CTTypesetterRef)_retainTypesetter;	// 0x34f64315
// declared property getter: - (id)alignmentMode;	// 0x34f63b49
// declared property getter: - (BOOL)allowsFontSubpixelQuantization;	// 0x34f6484d
- (void)dealloc;	// 0x34f64675
- (void)didChangeValueForKey:(id)key;	// 0x34f64549
- (void)drawInContext:(CGContextRef)context;	// 0x34f63bf1
// declared property getter: - (void *)font;	// 0x34f63b91
// declared property getter: - (float)fontSize;	// 0x34f63ba1
// declared property getter: - (CGColorRef)foregroundColor;	// 0x34f63b81
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x34f647ad
// declared property getter: - (BOOL)isWrapped;	// 0x34f63b69
// declared property setter: - (void)setAlignmentMode:(id)mode;	// 0x34f63b41
// declared property setter: - (void)setAllowsFontSubpixelQuantization:(BOOL)quantization;	// 0x34f64859
// declared property setter: - (void)setFont:(void *)font;	// 0x34f63b89
// declared property setter: - (void)setFontSize:(float)size;	// 0x34f63b99
// declared property setter: - (void)setForegroundColor:(CGColorRef)color;	// 0x34f63b79
// declared property setter: - (void)setString:(id)string;	// 0x34f63ba9
// declared property setter: - (void)setTruncationMode:(id)mode;	// 0x34f63b51
// declared property setter: - (void)setTruncationString:(id)string;	// 0x34f64845
// declared property setter: - (void)setWrapped:(BOOL)wrapped;	// 0x34f63b61
// declared property getter: - (id)string;	// 0x34f63bb1
// declared property getter: - (id)truncationMode;	// 0x34f63b59
// declared property getter: - (id)truncationString;	// 0x34f6483d
- (BOOL)wrapped;	// 0x34f64825
@end

