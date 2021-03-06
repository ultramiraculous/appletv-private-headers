/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSData, NSString, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
	NSString *bundleResourceName;	// 4 = 0x4
	NSString *bundleDirectoryName;	// 8 = 0x8
	NSBundle *bundle;	// 12 = 0xc
	NSString *identifierForStringsFile;	// 16 = 0x10
	NSData *archiveData;	// 20 = 0x14
	UINibDecoder *nibDecoder;	// 24 = 0x18
	BOOL instantiatingForSimulator;	// 28 = 0x1c
	BOOL captureImplicitLoadingContextOnDecode;	// 29 = 0x1d
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x30e62d5d; S=0x30e62d71; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x30e62d19; S=0x30e62d29; @synthesize
@property(copy, nonatomic) NSString *bundleDirectoryName;	// G=0x30e62cf5; S=0x30e62d09; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x30e62cd1; S=0x30e62ce5; @synthesize
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x30e62dc1; S=0x30e62dd9; @synthesize
@property(copy, nonatomic) NSString *identifierForStringsFile;	// G=0x30e62d39; S=0x30e62d4d; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x30e62da1; S=0x30e62db1; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x30e62d81; S=0x30e62d91; @synthesize
// declared property getter: - (id)archiveData;	// 0x30e62d5d
// declared property getter: - (id)bundle;	// 0x30e62d19
// declared property getter: - (id)bundleDirectoryName;	// 0x30e62cf5
// declared property getter: - (id)bundleResourceName;	// 0x30e62cd1
// declared property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x30e62dc1
- (void)dealloc;	// 0x30e62c31
// declared property getter: - (id)identifierForStringsFile;	// 0x30e62d39
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x30e62da1
// declared property getter: - (id)nibDecoder;	// 0x30e62d81
// declared property setter: - (void)setArchiveData:(id)data;	// 0x30e62d71
// declared property setter: - (void)setBundle:(id)bundle;	// 0x30e62d29
// declared property setter: - (void)setBundleDirectoryName:(id)name;	// 0x30e62d09
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x30e62ce5
// declared property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x30e62dd9
// declared property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x30e62d4d
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x30e62db1
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x30e62d91
@end

