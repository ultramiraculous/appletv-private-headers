/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHStyle : NSObject {
@private
	CFDictionaryRef mStyles;	// 4 = 0x4
	CFStringRef mCssClassAttribute;	// 8 = 0x8
	CFStringRef mCachedCssStyleName;	// 12 = 0xc
}
+ (void)appendParentClass:(CFStringRef *)aClass style:(id)style classType:(Class)type state:(id)state;	// 0x304af799
+ (void)createBaseStyleClassString:(id)string classString:(CFStringRef *)string2 classType:(Class)type state:(id)state;	// 0x304af721
+ (void)createBaseStyleClassesString:(CFArrayRef)string classString:(CFStringRef *)string2 classTypes:(CFArrayRef)types state:(id)state;	// 0x304af6a9
+ (void)setSingleStyleAttribute:(CFStringRef)attribute intValue:(int)value node:(id)node;	// 0x304af991
+ (void)setSingleStyleAttribute:(CFStringRef)attribute pxValue:(int)value node:(id)node;	// 0x304af941
+ (void)setSingleStyleAttribute:(CFStringRef)attribute value:(CFStringRef)value node:(id)node;	// 0x304af9e1
- (id)init;	// 0x304af625
- (void)addAttribute:(CFStringRef)attribute intValue:(int)value;	// 0x304aff9d
- (void)addAttribute:(CFStringRef)attribute ptValue:(int)value;	// 0x304afe9d
- (void)addAttribute:(CFStringRef)attribute pxValue:(int)value;	// 0x304aff1d
- (void)addAttribute:(CFStringRef)attribute trblValue:(id)value;	// 0x304afe85
- (void)addAttribute:(CFStringRef)attribute value:(CFStringRef)value;	// 0x304b001d
- (void)addClass:(CFStringRef)aClass;	// 0x304afb71
- (CFStringRef)createNamedStyle:(CFStringRef)style;	// 0x304afcc9
- (void)dealloc;	// 0x304b0035
- (BOOL)getAttribute:(CFStringRef)attribute intValue:(int *)value;	// 0x304afe11
- (BOOL)getAttribute:(CFStringRef)attribute trblValue:(id *)value;	// 0x304afd49
- (BOOL)getAttribute:(CFStringRef)attribute value:(const CFStringRef *)value;	// 0x304afdad
- (void)setStyleOnCurrentNode:(id)node;	// 0x304afba1
- (void)setStyleOnCurrentNode:(id)node mappingBaseStyleClass:(id)aClass baseClassType:(Class)type;	// 0x304afaf1
- (void)setStyleOnCurrentNode:(id)node mappingBaseStyleClasses:(CFArrayRef)classes baseClassTypes:(CFArrayRef)types;	// 0x304afa35
- (void)setupCssClassAttribute:(id)attribute;	// 0x304afc01
@end

