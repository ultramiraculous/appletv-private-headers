/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBJsonUTF8Stream;

@interface SBJsonTokeniser : XXUnknownSuperclass {
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x4ab31d; S=0x4ab331; @synthesize=_error
- (id)init;	// 0x4aa739
- (void)appendData:(id)data;	// 0x4aa7e9
- (void)dealloc;	// 0x4aa79d
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x4aa8b1
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x4aa925
// declared property getter: - (id)error;	// 0x4ab31d
- (int)getNumberToken:(id *)token;	// 0x4aaccd
- (int)getStringToken:(id *)token;	// 0x4aa9b9
- (int)getToken:(id *)token;	// 0x4ab0e5
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x4aa809
// declared property setter: - (void)setError:(id)error;	// 0x4ab331
@end
