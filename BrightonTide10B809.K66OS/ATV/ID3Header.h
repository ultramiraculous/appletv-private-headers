/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ID3Header : XXUnknownSuperclass {
	int dataOffset;	// 4 = 0x4
	int headerSize;	// 8 = 0x8
}
@property(assign, nonatomic) int dataOffset;	// G=0x4b5fa1; S=0x4b5fb1; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x4b5f81; S=0x4b5f91; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x4b5ee5
- (id)initWithData:(id)data;	// 0x4b5e51
- (void)buildWithByteData:(char *)byteData withLength:(int)length success:(BOOL *)success;	// 0x4b5c15
// declared property getter: - (int)dataOffset;	// 0x4b5fa1
- (void)dealloc;	// 0x4b5f55
// declared property getter: - (int)headerSize;	// 0x4b5f81
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x4b5fb1
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x4b5f91
@end

