/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library

@class NSString, NSDate;

@interface NSPageData : NSData {
	NSData *data;	// 4 = 0x4
	NSDate *_originalFileModDate;	// 8 = 0x8
	NSString *_originalFilePath;	// 12 = 0xc
}
@property(readonly, retain) NSData *data;	// G=0x34e32ed5; converted property
+ (int)_umask;	// 0x34e325e1
+ (void)initialize;	// 0x34e32599
- (id)init;	// 0x34e32631
- (id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;	// 0x34e32dd5
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x34e326c9
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x34e32679
- (id)initWithContentsOfFile:(id)file;	// 0x34e327c9
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x34e3287d
- (id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;	// 0x34e32891
- (id)initWithData:(id)data;	// 0x34e32719
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x34e32ea9
- (id)_mappedFile;	// 0x34e32971
- (void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;	// 0x34e32765
- (const void *)bytes;	// 0x34e32611
// converted property getter: - (id)data;	// 0x34e32ed5
- (void)dealloc;	// 0x34e32981
- (id)deserializer;	// 0x34e32e25
- (unsigned)length;	// 0x34e325f1
- (unsigned)writeFd:(int)fd;	// 0x34e32f0d
- (unsigned)writeFile:(id)file;	// 0x34e32f65
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x34e329f9
@end
