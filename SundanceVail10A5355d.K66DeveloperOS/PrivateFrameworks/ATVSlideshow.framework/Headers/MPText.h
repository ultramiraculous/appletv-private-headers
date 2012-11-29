/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MPTextInternal, MCText;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSCoding, NSCopying> {
	MCText *_text;	// 4 = 0x4
	MPTextInternal *_internal;	// 8 = 0x8
	NSObject<MPEffectSupport> *_parent;	// 12 = 0xc
}
@property(retain) id attributedString;	// G=0x320a3a89; S=0x320a3aa9; converted property
@property(retain) id plainString;	// G=0x320a4d85; S=0x320a4dbd; converted property
@property(retain) MCText *text;	// G=0x320a47d1; S=0x320a4f69; converted property
+ (id)textWithAttributedString:(id)attributedString;	// 0x320a3689
- (id)init;	// 0x320a3705
- (id)initWithAttributedString:(id)attributedString;	// 0x320a36c5
- (id)initWithCoder:(id)coder;	// 0x320a3889
- (id)action;	// 0x320a4e65
// converted property getter: - (id)attributedString;	// 0x320a3a89
- (void)checkForMaxFontSize;	// 0x320a5545
- (void)checkForPlacesLabel;	// 0x320a5059
- (void)copyStruct:(id)aStruct;	// 0x320a4ee5
- (id)copyWithZone:(NSZone *)zone;	// 0x320a377d
- (void)dealloc;	// 0x320a3a15
- (id)defaultString;	// 0x320a4849
- (id)description;	// 0x320a399d
- (double)displayDuration;	// 0x320a4519
- (double)displayStartTime;	// 0x320a4331
- (double)displayTime;	// 0x320a4141
- (void)dump;	// 0x320a47e1
- (void)encodeWithCoder:(id)coder;	// 0x320a37e1
- (id)fullDebugLog;	// 0x320a4809
- (int)index;	// 0x320a40d1
- (BOOL)isOriginal;	// 0x320a4979
- (float)maxFontSize;	// 0x320a48e1
- (id)nearestPlug;	// 0x320a4f41
- (id)parentEffect;	// 0x320a3d9d
// converted property getter: - (id)plainString;	// 0x320a4d85
// converted property setter: - (void)setAttributedString:(id)string;	// 0x320a3aa9
- (void)setParent:(id)parent;	// 0x320a4fe9
// converted property setter: - (void)setPlainString:(id)string;	// 0x320a4dbd
// converted property setter: - (void)setText:(id)text;	// 0x320a4f69
- (id)subtitleSlide;	// 0x320a3dad
// converted property getter: - (id)text;	// 0x320a47d1
- (float)textAreaAspectRatio;	// 0x320a45d9
@end
