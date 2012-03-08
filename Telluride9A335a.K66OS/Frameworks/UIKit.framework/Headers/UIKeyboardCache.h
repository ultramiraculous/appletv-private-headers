/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject {
@private
	CPBitmapStore *_store;	// 4 = 0x4
	NSSet *_layouts;	// 8 = 0x8
	BOOL _isCommitting;	// 12 = 0xc
}
+ (BOOL)enabled;	// 0x33a7530d
+ (id)sharedInstance;	// 0x33a0ab39
- (id)init;	// 0x33a0ab81
- (CGImageRef)cachedImageForKey:(id)key;	// 0x33a752b5
- (void)commitTransaction;	// 0x33a0ad59
- (void)dealloc;	// 0x33ce70e1
- (void)displayView:(id)view imageWidth:(float)width withKey:(id)key fromLayout:(id)layout;	// 0x33a75169
- (void)displayView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x33a75101
- (CGImageRef)renderBlock:(id)block forView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x33ce71a5
- (id)uniqueLayoutsFromInputModes:(id)inputModes;	// 0x33ce726d
- (void)updateCacheForInputModes:(id)inputModes;	// 0x33ce7339
@end
