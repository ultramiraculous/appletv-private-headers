/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "BackBoardServices-Structs.h"


@interface BKSCFBundle : NSObject {
	CFBundleRef _cfBundle;	// 4 = 0x4
}
@property(readonly, assign) CFBundleRef cfBundle;	// G=0x36b5c091; converted property
- (id)initWithCFBundle:(CFBundleRef)cfbundle;	// 0x36b5be71
- (id)initWithPath:(id)path;	// 0x36b5bde1
- (id)bundleIdentifier;	// 0x36b5bfa1
- (id)bundlePath;	// 0x36b5bfb5
// converted property getter: - (CFBundleRef)cfBundle;	// 0x36b5c091
- (void)dealloc;	// 0x36b5beb9
- (id)executablePath;	// 0x36b5befd
- (id)infoDictionary;	// 0x36b5c069
- (id)localizedInfoDictionary;	// 0x36b5c07d
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x36b5c035
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x36b5bff1
@end
