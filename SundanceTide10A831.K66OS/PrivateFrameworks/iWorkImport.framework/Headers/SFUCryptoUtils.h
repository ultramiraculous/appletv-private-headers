/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x35d6a801
+ (id)decodePassphraseHint:(id)hint;	// 0x35d6ad7d
+ (id)encodePassphraseHint:(id)hint;	// 0x35d6ad69
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x35d6a735
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x35d6a6c5
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x35d6aa85
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x35d6a739
+ (unsigned)ivLengthForKey:(id)key;	// 0x35d6a711
+ (id)newBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x35d6aac9
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)decryptingZippedBundle key:(id)key zipArchive:(id)archive isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x35d6ac11
+ (id)sha1HashFromStorage:(id)storage;	// 0x35d6af91
+ (id)sha256HashFromData:(id)data;	// 0x35d6adf9
+ (id)sha256HashFromStorage:(id)storage;	// 0x35d6ae91
+ (id)sha256HashFromString:(id)string;	// 0x35d6af5d
@end
