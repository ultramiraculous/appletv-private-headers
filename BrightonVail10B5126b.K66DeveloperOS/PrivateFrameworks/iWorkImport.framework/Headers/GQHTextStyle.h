/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHTextStyle : NSObject {
}
+ (GSFontRef)createFontFromName:(CFStringRef)name size:(float)size;	// 0x368e3cb1
+ (BOOL)getDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x368e46bd
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x368e3f39
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state isSpan:(BOOL)span;	// 0x368e3f5d
+ (const char *)name;	// 0x368e46b1
+ (CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)fontName;	// 0x368e3d89
+ (BOOL)platformGetDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x368e3ead
+ (void)reduceFontSizeForSuperscriptedText:(id)superscriptedText style:(id)style state:(id)state;	// 0x368e46e1
@end

