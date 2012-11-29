/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDEncryptedReader.h"

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
	OCPZipPackage *mZipPackage;	// 36 = 0x24
}
@property(retain, nonatomic) OCPZipPackage *zipPackage;	// G=0x34f29805; S=0x34ff19ad; @synthesize=mZipPackage
- (void)dealloc;	// 0x34f5ffe5
- (bool)isBinaryReader;	// 0x34f2958d
- (id)read;	// 0x350c20f5
- (void)restartReaderToUseDecryptedDocument;	// 0x350c20b5
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x34f29211
// declared property setter: - (void)setZipPackage:(id)package;	// 0x34ff19ad
- (BOOL)start;	// 0x34f2920d
- (BOOL)verifyFileFormat;	// 0x350c2059
// declared property getter: - (id)zipPackage;	// 0x34f29805
@end
