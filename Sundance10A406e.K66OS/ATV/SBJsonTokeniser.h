/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBJsonUTF8Stream, NSString;

@interface SBJsonTokeniser : XXUnknownSuperclass {
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x493d7d; S=0x493d91; @synthesize=_error
- (id)init;	// 0x493199
- (void)appendData:(id)data;	// 0x493249
- (void)dealloc;	// 0x4931fd
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x493311
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x493385
// declared property getter: - (id)error;	// 0x493d7d
- (int)getNumberToken:(id *)token;	// 0x49372d
- (int)getStringToken:(id *)token;	// 0x493419
- (int)getToken:(id *)token;	// 0x493b45
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x493269
// declared property setter: - (void)setError:(id)error;	// 0x493d91
@end

