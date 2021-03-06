/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSAffineTransform, CMDrawableMapper;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject {
@private
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x32cc5f91; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x32c86d7d; S=0x32b16f85; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32b16e95
- (void)_addTransform:(id)transform;	// 0x32b17545
- (void)_applyTransform:(id)transform;	// 0x32b81245
- (CGContextRef)_cgContext;	// 0x32cc5f81
- (void)_closeContext;	// 0x32b81565
- (void)_createCGContext;	// 0x32b810b1
- (void)_playbackActions;	// 0x32b812a5
- (void)_restoreLastTransform;	// 0x32b80df5
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x32b7df21
- (void)addDebugPath:(CGPathRef)path;	// 0x32cc6105
- (void)addPath:(CGPathRef)path;	// 0x32b1a301
- (void)addTransform:(id)transform;	// 0x32b174d5
- (id)createPDF;	// 0x32b80fd5
- (float)currentScaleFactor;	// 0x32cc60c1
- (CGAffineTransform)currentTransform;	// 0x32b18275
- (void)dealloc;	// 0x32b819a1
// converted property getter: - (CGRect)frame;	// 0x32cc5f91
// converted property getter: - (id)mapper;	// 0x32c86d7d
- (CGRect)pdfFrame;	// 0x32b81215
- (void)restoreLastTransform;	// 0x32b80d85
- (void)setFillColor:(CGColorRef)color;	// 0x32b1958d
- (void)setFillImage:(CGImageRef)image;	// 0x32c86d8d
- (void)setLineDash:(id)dash;	// 0x32c1a3a5
- (void)setLineWidth:(float)width;	// 0x32b9f92d
// converted property setter: - (void)setMapper:(id)mapper;	// 0x32b16f85
- (void)setStrokeColor:(CGColorRef)color;	// 0x32b19529
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x32cb3c31
- (CGRect)transformRectToPage:(CGRect)page;	// 0x32b7dec5
@end

