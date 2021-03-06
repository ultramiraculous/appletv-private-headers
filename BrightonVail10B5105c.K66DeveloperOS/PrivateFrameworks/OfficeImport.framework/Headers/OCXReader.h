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
@property(retain, nonatomic) OCPZipPackage *zipPackage;	// G=0x37975805; S=0x37a3d9ad; @synthesize=mZipPackage
- (void)dealloc;	// 0x379abfe5
- (bool)isBinaryReader;	// 0x3797558d
- (id)read;	// 0x37b0e0f5
- (void)restartReaderToUseDecryptedDocument;	// 0x37b0e0b5
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x37975211
// declared property setter: - (void)setZipPackage:(id)package;	// 0x37a3d9ad
- (BOOL)start;	// 0x3797520d
- (BOOL)verifyFileFormat;	// 0x37b0e059
// declared property getter: - (id)zipPackage;	// 0x37975805
@end

