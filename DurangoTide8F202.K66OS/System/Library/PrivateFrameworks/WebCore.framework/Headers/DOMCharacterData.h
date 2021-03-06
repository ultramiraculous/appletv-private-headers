/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(copy) NSString *data;	// G=0x33d9ac2d; S=0x33f6fad1; 
@property(readonly, assign) unsigned length;	// G=0x33f6fabd; 
- (void)appendData:(id)data;	// 0x33f6fea5
// declared property getter: - (id)data;	// 0x33d9ac2d
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x33f7028d
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x33f70251
- (void)insertData:(unsigned)data :(id)arg2;	// 0x33f70115
- (void)insertData:(unsigned)data data:(id)data2;	// 0x33f6ffd9
// declared property getter: - (unsigned)length;	// 0x33f6fabd
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x33f70409
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x33f702c9
// declared property setter: - (void)setData:(id)data;	// 0x33f6fad1
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x33f6fd55
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x33f6fc05
@end

