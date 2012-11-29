/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library

@class GQDFilteredImage, GQDColor;

@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {
	int mTechnique;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
	GQDFilteredImage *mFilteredImage;	// 12 = 0xc
}
@property(retain) id color;	// G=0x358181cd; S=0x3581827d; converted property
+ (const StateSpec *)stateForReading;	// 0x3581814d
// converted property getter: - (id)color;	// 0x358181cd
- (void)dealloc;	// 0x35818159
- (id)imageBinary;	// 0x358181dd
- (void)invalidateFilteredImage;	// 0x35818251
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x358181fd
// converted property setter: - (void)setColor:(id)color;	// 0x3581827d
- (int)technique;	// 0x358181bd
@end
