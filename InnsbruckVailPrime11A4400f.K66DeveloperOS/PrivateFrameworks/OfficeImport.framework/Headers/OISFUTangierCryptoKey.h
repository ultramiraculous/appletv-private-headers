/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OISFUCryptoKey.h"


@interface OISFUTangierCryptoKey : OISFUCryptoKey {
	char *mKey;	// 8 = 0x8
	unsigned long mKeyLength;	// 12 = 0xc
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x3195b4fd
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x3195b521
- (void)dealloc;	// 0x3195b5c5
- (const char *)keyData;	// 0x3195b60d
- (unsigned long)keyLength;	// 0x3195b61d
@end

