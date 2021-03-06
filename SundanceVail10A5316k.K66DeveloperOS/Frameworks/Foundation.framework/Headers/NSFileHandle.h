/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSSecureCoding.h"


@interface NSFileHandle : NSObject <NSSecureCoding> {
}
@property(retain) id readabilityHandler;	// G=0x31a4d315; S=0x31a4d339; converted property
@property(retain) id writeabilityHandler;	// G=0x31a4d2cd; S=0x31a4d2f1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a26339
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x31a262f1
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x31a4cf85
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x31a4cf3d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x31a4d0a5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x31a26b79
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x31a4d015
+ (id)fileHandleWithNullDevice;	// 0x31a4cd95
+ (id)fileHandleWithStandardError;	// 0x31a4ccf9
+ (id)fileHandleWithStandardInput;	// 0x31a4cbc1
+ (id)fileHandleWithStandardOutput;	// 0x31a4cc61
+ (void)initialize;	// 0x31a261e1
+ (BOOL)supportsSecureCoding;	// 0x31a4ce19
- (id)initWithCoder:(id)coder;	// 0x31a4ce1d
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x31a4cef5
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x31a4cf19
- (id)availableData;	// 0x31a4d135
- (Class)classForCoder;	// 0x31a4cdfd
- (void)closeFile;	// 0x31a4d281
- (void)encodeWithCoder:(id)coder;	// 0x31a4ced1
- (int)fileDescriptor;	// 0x31a4d2a5
- (unsigned long long)offsetInFile;	// 0x31a4d1c5
- (id)readDataOfLength:(unsigned)length;	// 0x31a4d17d
- (id)readDataToEndOfFile;	// 0x31a4d159
// converted property getter: - (id)readabilityHandler;	// 0x31a4d315
- (unsigned long long)seekToEndOfFile;	// 0x31a4d1ed
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x31a4d215
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x31a4d339
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x31a4d2f1
- (void)synchronizeFile;	// 0x31a4d25d
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x31a4d239
- (void)writeData:(id)data;	// 0x31a4d1a1
// converted property getter: - (id)writeabilityHandler;	// 0x31a4d2cd
@end

