/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVJSObject.h"

@class NSLocale;

__attribute__((visibility("hidden")))
@interface ATVJSNSLocale : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	NSLocale *_locale;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x153319; converted property
@property(retain, nonatomic) NSLocale *locale;	// G=0x15333d; S=0x15334d; @synthesize=_locale
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x152e39
+ (id)localeFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x153185
- (id)init;	// 0x1531e1
- (id)initWithLocale:(id)locale context:(OpaqueJSContext *)context;	// 0x1531fd
- (void)_jsFinalize;	// 0x153329
- (void)dealloc;	// 0x1532cd
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x153319
// declared property getter: - (id)locale;	// 0x15333d
// declared property setter: - (void)setLocale:(id)locale;	// 0x15334d
@end

