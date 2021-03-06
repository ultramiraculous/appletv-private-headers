/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x324c4801
+ (id)decodePassphraseHint:(id)hint;	// 0x324c4d7d
+ (id)encodePassphraseHint:(id)hint;	// 0x324c4d69
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x324c4735
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x324c46c5
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x324c4a85
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x324c4739
+ (unsigned)ivLengthForKey:(id)key;	// 0x324c4711
+ (id)newBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x324c4ac9
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)decryptingZippedBundle key:(id)key zipArchive:(id)archive isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x324c4c11
+ (id)sha1HashFromStorage:(id)storage;	// 0x324c4f91
+ (id)sha256HashFromData:(id)data;	// 0x324c4df9
+ (id)sha256HashFromStorage:(id)storage;	// 0x324c4e91
+ (id)sha256HashFromString:(id)string;	// 0x324c4f5d
@end

