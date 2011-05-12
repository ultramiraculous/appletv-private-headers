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
@property(copy) NSString *data;	// G=0x3148fc2d; S=0x31664ad1; 
@property(readonly, assign) unsigned length;	// G=0x31664abd; 
- (void)appendData:(id)data;	// 0x31664ea5
// declared property getter: - (id)data;	// 0x3148fc2d
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x3166528d
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x31665251
- (void)insertData:(unsigned)data :(id)arg2;	// 0x31665115
- (void)insertData:(unsigned)data data:(id)data2;	// 0x31664fd9
// declared property getter: - (unsigned)length;	// 0x31664abd
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x31665409
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x316652c9
// declared property setter: - (void)setData:(id)data;	// 0x31664ad1
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x31664d55
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x31664c05
@end
