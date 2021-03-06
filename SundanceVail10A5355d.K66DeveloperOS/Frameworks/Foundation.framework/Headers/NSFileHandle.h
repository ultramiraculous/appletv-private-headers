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
@property(retain) id readabilityHandler;	// G=0x346a3735; S=0x346a3759; converted property
@property(retain) id writeabilityHandler;	// G=0x346a36ed; S=0x346a3711; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3467c739
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x3467c6f1
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x346a33a5
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x346a335d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x346a34c5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x3467cf79
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x346a3435
+ (id)fileHandleWithNullDevice;	// 0x346a31b5
+ (id)fileHandleWithStandardError;	// 0x346a3119
+ (id)fileHandleWithStandardInput;	// 0x346a2fe1
+ (id)fileHandleWithStandardOutput;	// 0x346a3081
+ (void)initialize;	// 0x3467c5e1
+ (BOOL)supportsSecureCoding;	// 0x346a3239
- (id)initWithCoder:(id)coder;	// 0x346a323d
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x346a3315
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x346a3339
- (id)availableData;	// 0x346a3555
- (Class)classForCoder;	// 0x346a321d
- (void)closeFile;	// 0x346a36a1
- (void)encodeWithCoder:(id)coder;	// 0x346a32f1
- (int)fileDescriptor;	// 0x346a36c5
- (unsigned long long)offsetInFile;	// 0x346a35e5
- (id)readDataOfLength:(unsigned)length;	// 0x346a359d
- (id)readDataToEndOfFile;	// 0x346a3579
// converted property getter: - (id)readabilityHandler;	// 0x346a3735
- (unsigned long long)seekToEndOfFile;	// 0x346a360d
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x346a3635
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x346a3759
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x346a3711
- (void)synchronizeFile;	// 0x346a367d
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x346a3659
- (void)writeData:(id)data;	// 0x346a35c1
// converted property getter: - (id)writeabilityHandler;	// 0x346a36ed
@end

