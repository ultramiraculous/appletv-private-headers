/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFormField : WDRun {
@private
	unsigned mPosition;	// 8 = 0x8
	BOOL mLinkAbsolute;	// 12 = 0xc
	BOOL mLinkSpecifyingNamedLocation;	// 13 = 0xd
	NSString *mNamedLocation;	// 16 = 0x10
	NSString *mURI;	// 20 = 0x14
	NSString *mMacName;	// 24 = 0x18
	NSString *mDosName;	// 28 = 0x1c
}
@property(retain) id URI;	// G=0x30e6f009; S=0x30e6f0e9; converted property
@property(retain) id dosName;	// G=0x30e6f029; S=0x30e6f069; converted property
@property(assign) BOOL linkAbsolute;	// G=0x30e6efb9; S=0x30e6efc9; converted property
@property(assign) BOOL linkSpecifyingNamedLocation;	// G=0x30e6efd9; S=0x30e6efe9; converted property
@property(retain) id macName;	// G=0x30e6f019; S=0x30e6f0a9; converted property
@property(retain) id namedLocation;	// G=0x30e6eff9; S=0x30e6f129; converted property
@property(assign) unsigned long position;	// G=0x30e6ef99; S=0x30e6efa9; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x30e6f03d
// converted property getter: - (id)URI;	// 0x30e6f009
- (void)dealloc;	// 0x30e6f169
// converted property getter: - (id)dosName;	// 0x30e6f029
// converted property getter: - (BOOL)linkAbsolute;	// 0x30e6efb9
// converted property getter: - (BOOL)linkSpecifyingNamedLocation;	// 0x30e6efd9
// converted property getter: - (id)macName;	// 0x30e6f019
// converted property getter: - (id)namedLocation;	// 0x30e6eff9
// converted property getter: - (unsigned long)position;	// 0x30e6ef99
- (int)runType;	// 0x30e6f039
// converted property setter: - (void)setDosName:(id)name;	// 0x30e6f069
// converted property setter: - (void)setLinkAbsolute:(BOOL)absolute;	// 0x30e6efc9
// converted property setter: - (void)setLinkSpecifyingNamedLocation:(BOOL)location;	// 0x30e6efe9
// converted property setter: - (void)setMacName:(id)name;	// 0x30e6f0a9
// converted property setter: - (void)setNamedLocation:(id)location;	// 0x30e6f129
// converted property setter: - (void)setPosition:(unsigned long)position;	// 0x30e6efa9
// converted property setter: - (void)setURI:(id)uri;	// 0x30e6f0e9
@end
