/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
	NSData *_internal;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSData *_parent;	// 12 = 0xc
	BOOL _subdata;	// 16 = 0x10
}
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x30c38a69
- (id)init;	// 0x30c39b29
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x30c398a1
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x30c3987d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x30c397d9
- (id)initWithContentsOfFile:(id)file;	// 0x30c39379
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x30c3949d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x30c39631
- (id)initWithContentsOfURL:(id)url;	// 0x30c396c9
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x30c396e9
- (id)initWithData:(id)data;	// 0x30c391a1
- (id)initWithImmutableData:(id)immutableData;	// 0x30c3918d
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x30c391b5
- (id)_initWithFile:(id)file;	// 0x30c39a95
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x30c38ddd
- (const void *)bytes;	// 0x30c38ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x30c3914d
- (id)data;	// 0x30c38da5
- (void)dealloc;	// 0x30c39035
- (unsigned)length;	// 0x30c39015
- (BOOL)mf_immutable;	// 0x30c38a79
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30c39115
- (id)subdataWithRange:(NSRange)range;	// 0x30c38f65
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x30c38d75
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x30c38c3d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x30c38d45
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x30c38bad
@end

