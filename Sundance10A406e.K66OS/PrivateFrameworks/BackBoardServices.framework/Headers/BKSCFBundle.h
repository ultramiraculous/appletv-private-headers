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
@property(readonly, assign) CFBundleRef cfBundle;	// G=0x36419039; converted property
- (id)initWithCFBundle:(CFBundleRef)cfbundle;	// 0x36418e19
- (id)initWithPath:(id)path;	// 0x36418d89
- (id)bundleIdentifier;	// 0x36418f49
- (id)bundlePath;	// 0x36418f5d
// converted property getter: - (CFBundleRef)cfBundle;	// 0x36419039
- (void)dealloc;	// 0x36418e61
- (id)executablePath;	// 0x36418ea5
- (id)infoDictionary;	// 0x36419011
- (id)localizedInfoDictionary;	// 0x36419025
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x36418fdd
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x36418f99
@end

