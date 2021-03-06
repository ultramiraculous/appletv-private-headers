/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "MIME-Structs.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
	NSData *_internal;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSData *_parent;	// 12 = 0xc
	BOOL _subdata;	// 16 = 0x10
}
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x31b061f5
- (id)init;	// 0x31b06205
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x31b062a9
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x31b06751
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x31b06775
- (id)initWithContentsOfFile:(id)file;	// 0x31b06b0d
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x31b069a1
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x31b06919
- (id)initWithContentsOfURL:(id)url;	// 0x31b068f9
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31b06811
- (id)initWithData:(id)data;	// 0x31b06da5
- (id)initWithImmutableData:(id)immutableData;	// 0x31b06db9
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x31b06c25
- (id)_initWithFile:(id)file;	// 0x31b06219
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x31b06fe5
- (const void *)bytes;	// 0x31b06f4d
- (id)copyWithZone:(NSZone *)zone;	// 0x31b06dcd
- (id)data;	// 0x31b07161
- (void)dealloc;	// 0x31b06e49
- (unsigned)length;	// 0x31b06f2d
- (BOOL)mf_immutable;	// 0x31b07375
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31b06e11
- (id)subdataWithRange:(NSRange)range;	// 0x31b06f6d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x31b07199
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x31b071f1
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x31b071c5
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31b072e9
@end

