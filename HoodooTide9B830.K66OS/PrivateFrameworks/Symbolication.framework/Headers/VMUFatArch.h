/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@protocol VMUMemory;

@interface VMUFatArch : NSObject {
	unsigned _fileOffset;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned _alignment;	// 12 = 0xc
	id<VMUMemory> _memory;	// 16 = 0x10
}
@property(readonly, assign) unsigned alignment;	// G=0x31bc00b1; converted property
@property(readonly, assign) unsigned fileOffset;	// G=0x31bc0091; converted property
@property(readonly, assign) unsigned size;	// G=0x31bc00a1; converted property
+ (id)fatArchWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x31bc015d
+ (id)fatArchWithMemory:(id)memory memoryView:(id)view;	// 0x31bc01b5
- (id)initWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x31bc00d1
- (id)initWithMemory:(id)memory memoryView:(id)view;	// 0x31bc0275
// converted property getter: - (unsigned)alignment;	// 0x31bc00b1
- (id)architecture;	// 0x31bc0255
- (void)dealloc;	// 0x31bc0201
// converted property getter: - (unsigned)fileOffset;	// 0x31bc0091
- (id)memory;	// 0x31bc00c1
// converted property getter: - (unsigned)size;	// 0x31bc00a1
@end
