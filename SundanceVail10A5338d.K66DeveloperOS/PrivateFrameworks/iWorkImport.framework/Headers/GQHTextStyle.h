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
+ (GSFontRef)createFontFromName:(CFStringRef)name size:(float)size;	// 0x350a95a9
+ (BOOL)getDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x350a9fb5
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x350a9831
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state isSpan:(BOOL)span;	// 0x350a9855
+ (const char *)name;	// 0x350a9fa9
+ (CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)fontName;	// 0x350a9681
+ (BOOL)platformGetDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x350a97a5
+ (void)reduceFontSizeForSuperscriptedText:(id)superscriptedText style:(id)style state:(id)state;	// 0x350a9fd9
@end
