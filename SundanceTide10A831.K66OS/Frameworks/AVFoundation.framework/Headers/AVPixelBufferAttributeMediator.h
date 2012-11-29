/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableArray;

@interface AVPixelBufferAttributeMediator : NSObject {
	NSMutableArray *_layers;	// 4 = 0x4
	CFArrayRef _otherStakeHoldersOrdered;	// 8 = 0x8
	CFDictionaryRef _otherStakeHoldersToAttributesMap;	// 12 = 0xc
	BOOL layersAreSuppressed;	// 16 = 0x10
}
- (id)init;	// 0x3426716d
- (void)dealloc;	// 0x34267295
- (void)finalize;	// 0x34267239
- (id)mediatedPixelBufferAttributes;	// 0x34267511
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)key;	// 0x34267401
- (void)setLayersAreSuppressed:(BOOL)suppressed;	// 0x34267501
- (void)setRequestedPixelBufferAttributes:(id)attributes forKey:(id)key;	// 0x3426730d
@end
