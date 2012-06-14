/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRTypesetter : XXUnknownSuperclass {
	NSAttributedString *_resolvedString;	// 4 = 0x4
	CTTypesetterRef _setter;	// 8 = 0x8
	NSMutableArray *_lines;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
	CGSize _shadowOffset;	// 24 = 0x18
	CGColorRef _shadowColor;	// 32 = 0x20
	float _shadowBlurAmount;	// 36 = 0x24
	float _flushFactor;	// 40 = 0x28
	BOOL _renderingAttributesFetched;	// 44 = 0x2c
}
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x374039
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x37384d
- (id)_boxLines:(BOOL *)lines;	// 0x374271
- (void)_justifyLines:(id)lines;	// 0x374435
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x3744d1
- (CTLineRef)_truncationToken;	// 0x374569
- (void)_updateRenderingAttributes;	// 0x37408d
- (void)dealloc;	// 0x373b21
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x373ce5
- (id)lineAtIndex:(long)index;	// 0x373f41
- (long)numLines;	// 0x373f21
- (CGSize)typographicBounds;	// 0x373bb1
@end

