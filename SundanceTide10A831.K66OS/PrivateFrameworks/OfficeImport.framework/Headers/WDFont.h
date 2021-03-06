/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class NSString;

@interface WDFont : NSObject <NSCopying> {
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(assign) int characterSet;	// G=0x36c777e9; S=0x36a9eefd; converted property
@property(assign) int fontFamily;	// G=0x36c777d9; S=0x36a9eeed; converted property
@property(retain) id name;	// G=0x36ac8a3d; S=0x36c7778d; converted property
@property(assign) int pitch;	// G=0x36c777f9; S=0x36a9eedd; converted property
@property(retain) id secondName;	// G=0x36c777c9; S=0x36ae42a5; converted property
- (id)init;	// 0x36c77809
- (id)initWithName:(id)name;	// 0x36a9ee29
// converted property getter: - (int)characterSet;	// 0x36c777e9
- (id)copyWithZone:(NSZone *)zone;	// 0x36c778c9
- (void)dealloc;	// 0x36acf735
// converted property getter: - (int)fontFamily;	// 0x36c777d9
- (unsigned)hash;	// 0x36c77975
- (BOOL)isEqual:(id)equal;	// 0x36c779e9
// converted property getter: - (id)name;	// 0x36ac8a3d
// converted property getter: - (int)pitch;	// 0x36c777f9
// converted property getter: - (id)secondName;	// 0x36c777c9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x36a9eefd
// converted property setter: - (void)setFontFamily:(int)family;	// 0x36a9eeed
// converted property setter: - (void)setName:(id)name;	// 0x36c7778d
// converted property setter: - (void)setPitch:(int)pitch;	// 0x36a9eedd
// converted property setter: - (void)setSecondName:(id)name;	// 0x36ae42a5
@end

