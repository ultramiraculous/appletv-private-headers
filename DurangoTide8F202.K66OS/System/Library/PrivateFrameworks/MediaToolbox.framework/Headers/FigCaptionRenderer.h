/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <NSObject.h> // Unknown library

@class FigCaptionRendererPrivate;

@interface FigCaptionRenderer : NSObject {
@private
	FigCaptionRendererPrivate *_priv;	// 4 = 0x4
}
@property(assign) id delegate;	// G=0x32068751; S=0x32068939; converted property
+ (CGRect)captionRectForRect:(CGRect)rect;	// 0x320686e1
+ (CGSize)cellSizeForRect:(CGRect)rect;	// 0x32068ce9
- (id)init;	// 0x32068a85
- (void)_addCommandData:(id)data forRow:(unsigned)row;	// 0x3206876d
- (void)dealloc;	// 0x320689b5
// converted property getter: - (id)delegate;	// 0x32068751
- (void)drawRow:(unsigned)row inContext:(CGContextRef)context forRect:(CGRect)rect orientation:(int)orientation;	// 0x32068d55
- (void)drawUnichar:(unsigned short)unichar color:(CGColorRef)color italics:(BOOL)italics underline:(BOOL)underline inRect:(CGRect)rect inContext:(CGContextRef)context orientation:(int)orientation;	// 0x32068bb9
- (void)eraseCommandsForRow:(unsigned)row;	// 0x320687ad
- (void)finalize;	// 0x320689f1
- (BOOL)hasCommandsForRow:(unsigned)row;	// 0x320688a5
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x320687e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32068939
- (void)setFontName:(id)name;	// 0x320688e5
- (void)tearDown;	// 0x32068a2d
@end

