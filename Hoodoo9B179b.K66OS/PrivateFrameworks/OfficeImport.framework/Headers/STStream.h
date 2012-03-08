/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


__attribute__((visibility("hidden")))
@interface STStream : STSStgObject {
@private
	Stream *m_pCStream;	// 4 = 0x4
}
- (id)initWithCStream:(Stream *)cstream;	// 0x329f82ad
- (void)close;	// 0x329f8cf5
- (void)dealloc;	// 0x329f8d15
- (id)getInfo;	// 0x329f8c15
- (unsigned long)getPos;	// 0x329f8ba1
- (id)readBytes:(unsigned long)bytes;	// 0x329f8a89
- (unsigned char)readLEboolean;	// 0x329f8999
- (unsigned char)readLEbyte;	// 0x329f89f1
- (BOOL)readLEchar;	// 0x329f8a3d
- (double)readLEdouble;	// 0x329f87ed
- (unsigned long)readLEdword;	// 0x329f8881
- (float)readLEfloat;	// 0x329f883d
- (long)readLElong;	// 0x329f88c5
- (short)readLEshort;	// 0x329f8951
- (unsigned short)readLEunichar;	// 0x329f87a9
- (unsigned short)readLEword;	// 0x329f8909
- (id)readLEwstring:(unsigned long)ewstring;	// 0x329f8695
- (void)releaseCStream;	// 0x329f8299
- (void)seek:(long)seek fromOrigin:(int)origin;	// 0x329f8bc5
- (void)setClass:(SSRW_GUID)aClass;	// 0x329f8b4d
- (void)writeBytes:(id)bytes;	// 0x329f8625
- (void)writeLEboolean:(unsigned char)eboolean;	// 0x329f854d
- (void)writeLEbyte:(unsigned char)ebyte;	// 0x329f85dd
- (void)writeLEchar:(BOOL)echar;	// 0x329f8595
- (void)writeLEdouble:(double)edouble;	// 0x329f83e5
- (void)writeLEdword:(unsigned long)edword;	// 0x329f845d
- (void)writeLEfloat:(float)efloat;	// 0x329f8421
- (void)writeLElong:(long)elong;	// 0x329f8499
- (void)writeLEshort:(short)eshort;	// 0x329f8511
- (void)writeLEunichar:(unsigned short)eunichar;	// 0x329f83d1
- (void)writeLEword:(unsigned short)eword;	// 0x329f84d5
- (void)writeLEwstring:(id)ewstring;	// 0x329f8361
- (void)writeLEwstringNoTerminator:(id)terminator;	// 0x329f82f1
@end
