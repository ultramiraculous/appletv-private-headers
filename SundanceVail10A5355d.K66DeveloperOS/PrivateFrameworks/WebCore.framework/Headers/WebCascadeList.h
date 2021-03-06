/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSArray.h> // Unknown library


@interface WebCascadeList : NSArray {
	const Font *_font;	// 4 = 0x4
	int _character;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16> _fontDescriptors;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x30c7eea9; converted property
- (id)initWithFont:(const Font *)font character:(int)character;	// 0x30c7ee25
- (id).cxx_construct;	// 0x30c7f08d
- (void).cxx_destruct;	// 0x30c7f079
// converted property getter: - (unsigned)count;	// 0x30c7eea9
- (id)objectAtIndex:(unsigned)index;	// 0x30c7eeb9
@end

