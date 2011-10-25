/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
	unsigned char _lastEncoded;	// 9 = 0x9
	unsigned _required;	// 12 = 0xc
	BOOL _forTextPart;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL forTextPart;	// G=0x3509da4d; S=0x3509da5d; @synthesize=_forTextPart
- (int)appendData:(id)data;	// 0x3509e1a1
- (void)done;	// 0x3509e0d9
// declared property getter: - (BOOL)forTextPart;	// 0x3509da4d
// declared property setter: - (void)setForTextPart:(BOOL)textPart;	// 0x3509da5d
@end

