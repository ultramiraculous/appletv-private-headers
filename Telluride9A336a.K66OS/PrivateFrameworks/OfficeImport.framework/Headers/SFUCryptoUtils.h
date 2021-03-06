/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x34e5b4c1
+ (id)decodePassphraseHint:(id)hint;	// 0x34e5ad29
+ (id)encodePassphraseHint:(id)hint;	// 0x34e5ad15
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x34e5af11
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x34e5aa29
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x34e5ab6d
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x34e5aa91
+ (unsigned)ivLengthForKey:(id)key;	// 0x34e5aa6d
+ (id)retainedBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x34e5abb9
+ (id)sha256HashFromData:(id)data;	// 0x34e5ade5
+ (id)sha256HashFromStorage:(id)storage;	// 0x34e5ae65
+ (id)sha256HashFromString:(id)string;	// 0x34e5adb1
@end

