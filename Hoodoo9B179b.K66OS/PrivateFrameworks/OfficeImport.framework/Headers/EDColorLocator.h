/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface EDColorLocator : NSObject {
@private
	unsigned mColorOffset;	// 4 = 0x4
	int mColorIndex;	// 8 = 0x8
	NSColorStub *mColor;	// 12 = 0xc
}
@property(retain) id color;	// G=0x3298495d; S=0x32984a6d; converted property
@property(assign) int colorIndex;	// G=0x3298493d; S=0x3298494d; converted property
@property(assign) unsigned offset;	// G=0x3298491d; S=0x3298492d; converted property
- (id)initWith:(id)with index:(int)index offset:(unsigned)offset;	// 0x329849f5
// converted property getter: - (id)color;	// 0x3298495d
// converted property getter: - (int)colorIndex;	// 0x3298493d
- (void)dealloc;	// 0x32984aad
// converted property getter: - (unsigned)offset;	// 0x3298491d
// converted property setter: - (void)setColor:(id)color;	// 0x32984a6d
// converted property setter: - (void)setColorIndex:(int)index;	// 0x3298494d
// converted property setter: - (void)setOffset:(unsigned)offset;	// 0x3298492d
@end
