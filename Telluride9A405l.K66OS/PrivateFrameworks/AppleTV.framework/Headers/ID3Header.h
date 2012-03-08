/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ID3Header : NSObject {
@private
	int dataOffset;	// 4 = 0x4
	int headerSize;	// 8 = 0x8
}
@property(assign, nonatomic) int dataOffset;	// G=0x3607a23c; S=0x3607a250; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x3607a264; S=0x3607a278; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x3607a59c
- (id)initWithData:(id)data;	// 0x3607a4b4
- (void)buildWithByteData:(char *)byteData withLength:(int)length;	// 0x3607a28c
// declared property getter: - (int)dataOffset;	// 0x3607a23c
- (void)dealloc;	// 0x3607a55c
// declared property getter: - (int)headerSize;	// 0x3607a264
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x3607a250
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x3607a278
@end
