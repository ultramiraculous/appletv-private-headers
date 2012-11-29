/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebBasePluginPackage.h"

@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x307ef21d
- (id)bundle;	// 0x307f32c9
- (void)dealloc;	// 0x30845455
- (BOOL)load;	// 0x307f316d
- (Class)viewFactory;	// 0x307f3219
@end
