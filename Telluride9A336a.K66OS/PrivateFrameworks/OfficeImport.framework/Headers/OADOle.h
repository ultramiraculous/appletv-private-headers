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
@property(retain) id CLSID;	// G=0x34cd7c09; S=0x34cd7b8d; converted property
@property(retain) id ansiClipboardFormatName;	// G=0x34e219fd; S=0x34d33599; converted property
@property(retain) id ansiProgID;	// G=0x34e21a2d; S=0x34d335d9; converted property
@property(retain) id ansiUserType;	// G=0x34e219ed; S=0x34d33559; converted property
@property(assign) BOOL iconic;	// G=0x34e219dd; S=0x34d337e5; converted property
@property(retain) id macClipboardFormat;	// G=0x34e21a1d; S=0x34d74941; converted property
@property(retain) id object;	// G=0x34e21a6d; S=0x34d337a5; converted property
@property(retain) id unicodeClipboardFormatName;	// G=0x34e21a4d; S=0x34d33725; converted property
@property(retain) id unicodeProgID;	// G=0x34e21a5d; S=0x34d33765; converted property
@property(retain) id unicodeUserType;	// G=0x34e21a3d; S=0x34d336e5; converted property
@property(assign) unsigned long winClipboardFormat;	// G=0x34e21a0d; S=0x34d8efd5; converted property
+ (BOOL)isCLSIDSupported:(id)supported;	// 0x34e21a7d
+ (BOOL)isProgIDSupported:(id)supported;	// 0x34cc7b4d
- (id)init;	// 0x34cd72c9
// converted property getter: - (id)CLSID;	// 0x34cd7c09
// converted property getter: - (id)ansiClipboardFormatName;	// 0x34e219fd
// converted property getter: - (id)ansiProgID;	// 0x34e21a2d
// converted property getter: - (id)ansiUserType;	// 0x34e219ed
- (void)dealloc;	// 0x34cd7ca5
// converted property getter: - (BOOL)iconic;	// 0x34e219dd
// converted property getter: - (id)macClipboardFormat;	// 0x34e21a1d
// converted property getter: - (id)object;	// 0x34e21a6d
// converted property setter: - (void)setAnsiClipboardFormatName:(id)name;	// 0x34d33599
// converted property setter: - (void)setAnsiProgID:(id)anId;	// 0x34d335d9
// converted property setter: - (void)setAnsiUserType:(id)type;	// 0x34d33559
// converted property setter: - (void)setCLSID:(id)clsid;	// 0x34cd7b8d
// converted property setter: - (void)setIconic:(BOOL)iconic;	// 0x34d337e5
// converted property setter: - (void)setMacClipboardFormat:(id)format;	// 0x34d74941
// converted property setter: - (void)setObject:(id)object;	// 0x34d337a5
// converted property setter: - (void)setUnicodeClipboardFormatName:(id)name;	// 0x34d33725
// converted property setter: - (void)setUnicodeProgID:(id)anId;	// 0x34d33765
// converted property setter: - (void)setUnicodeUserType:(id)type;	// 0x34d336e5
// converted property setter: - (void)setWinClipboardFormat:(unsigned long)format;	// 0x34d8efd5
// converted property getter: - (id)unicodeClipboardFormatName;	// 0x34e21a4d
// converted property getter: - (id)unicodeProgID;	// 0x34e21a5d
// converted property getter: - (id)unicodeUserType;	// 0x34e21a3d
// converted property getter: - (unsigned long)winClipboardFormat;	// 0x34e21a0d
@end

