/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OADOle : NSObject {
@private
	BOOL mIconic;	// 4 = 0x4
	NSString *mCLSID;	// 8 = 0x8
	NSString *mAnsiUserType;	// 12 = 0xc
	NSString *mAnsiClipboardFormatName;	// 16 = 0x10
	unsigned mWinClipboardFormat;	// 20 = 0x14
	NSString *mMacClipboardFormat;	// 24 = 0x18
	NSString *mAnsiProgID;	// 28 = 0x1c
	NSString *mUnicodeUserType;	// 32 = 0x20
	NSString *mUnicodeClipboardFormatName;	// 36 = 0x24
	NSString *mUnicodeProgID;	// 40 = 0x28
	id mObject;	// 44 = 0x2c
}
@property(retain) id CLSID;	// G=0x3123dc09; S=0x3123db8d; converted property
@property(retain) id ansiClipboardFormatName;	// G=0x313879fd; S=0x31299599; converted property
@property(retain) id ansiProgID;	// G=0x31387a2d; S=0x312995d9; converted property
@property(retain) id ansiUserType;	// G=0x313879ed; S=0x31299559; converted property
@property(assign) BOOL iconic;	// G=0x313879dd; S=0x312997e5; converted property
@property(retain) id macClipboardFormat;	// G=0x31387a1d; S=0x312da941; converted property
@property(retain) id object;	// G=0x31387a6d; S=0x312997a5; converted property
@property(retain) id unicodeClipboardFormatName;	// G=0x31387a4d; S=0x31299725; converted property
@property(retain) id unicodeProgID;	// G=0x31387a5d; S=0x31299765; converted property
@property(retain) id unicodeUserType;	// G=0x31387a3d; S=0x312996e5; converted property
@property(assign) unsigned long winClipboardFormat;	// G=0x31387a0d; S=0x312f4fd5; converted property
+ (BOOL)isCLSIDSupported:(id)supported;	// 0x31387a7d
+ (BOOL)isProgIDSupported:(id)supported;	// 0x3122db4d
- (id)init;	// 0x3123d2c9
// converted property getter: - (id)CLSID;	// 0x3123dc09
// converted property getter: - (id)ansiClipboardFormatName;	// 0x313879fd
// converted property getter: - (id)ansiProgID;	// 0x31387a2d
// converted property getter: - (id)ansiUserType;	// 0x313879ed
- (void)dealloc;	// 0x3123dca5
// converted property getter: - (BOOL)iconic;	// 0x313879dd
// converted property getter: - (id)macClipboardFormat;	// 0x31387a1d
// converted property getter: - (id)object;	// 0x31387a6d
// converted property setter: - (void)setAnsiClipboardFormatName:(id)name;	// 0x31299599
// converted property setter: - (void)setAnsiProgID:(id)anId;	// 0x312995d9
// converted property setter: - (void)setAnsiUserType:(id)type;	// 0x31299559
// converted property setter: - (void)setCLSID:(id)clsid;	// 0x3123db8d
// converted property setter: - (void)setIconic:(BOOL)iconic;	// 0x312997e5
// converted property setter: - (void)setMacClipboardFormat:(id)format;	// 0x312da941
// converted property setter: - (void)setObject:(id)object;	// 0x312997a5
// converted property setter: - (void)setUnicodeClipboardFormatName:(id)name;	// 0x31299725
// converted property setter: - (void)setUnicodeProgID:(id)anId;	// 0x31299765
// converted property setter: - (void)setUnicodeUserType:(id)type;	// 0x312996e5
// converted property setter: - (void)setWinClipboardFormat:(unsigned long)format;	// 0x312f4fd5
// converted property getter: - (id)unicodeClipboardFormatName;	// 0x31387a4d
// converted property getter: - (id)unicodeProgID;	// 0x31387a5d
// converted property getter: - (id)unicodeUserType;	// 0x31387a3d
// converted property getter: - (unsigned long)winClipboardFormat;	// 0x31387a0d
@end

