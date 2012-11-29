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
@property(retain) id attributedString;	// G=0x362253c1; S=0x362253e1; converted property
@property(retain) id plainString;	// G=0x362266bd; S=0x362266f5; converted property
@property(retain) MCText *text;	// G=0x36226109; S=0x362268a1; converted property
+ (id)textWithAttributedString:(id)attributedString;	// 0x36224fc1
- (id)init;	// 0x3622503d
- (id)initWithAttributedString:(id)attributedString;	// 0x36224ffd
- (id)initWithCoder:(id)coder;	// 0x362251c1
- (id)action;	// 0x3622679d
// converted property getter: - (id)attributedString;	// 0x362253c1
- (void)checkForMaxFontSize;	// 0x36226e7d
- (void)checkForPlacesLabel;	// 0x36226991
- (void)copyStruct:(id)aStruct;	// 0x3622681d
- (id)copyWithZone:(NSZone *)zone;	// 0x362250b5
- (void)dealloc;	// 0x3622534d
- (id)defaultString;	// 0x36226181
- (id)description;	// 0x362252d5
- (double)displayDuration;	// 0x36225e51
- (double)displayStartTime;	// 0x36225c69
- (double)displayTime;	// 0x36225a79
- (void)dump;	// 0x36226119
- (void)encodeWithCoder:(id)coder;	// 0x36225119
- (id)fullDebugLog;	// 0x36226141
- (int)index;	// 0x36225a09
- (BOOL)isOriginal;	// 0x362262b1
- (float)maxFontSize;	// 0x36226219
- (id)nearestPlug;	// 0x36226879
- (id)parentEffect;	// 0x362256d5
// converted property getter: - (id)plainString;	// 0x362266bd
// converted property setter: - (void)setAttributedString:(id)string;	// 0x362253e1
- (void)setParent:(id)parent;	// 0x36226921
// converted property setter: - (void)setPlainString:(id)string;	// 0x362266f5
// converted property setter: - (void)setText:(id)text;	// 0x362268a1
- (id)subtitleSlide;	// 0x362256e5
// converted property getter: - (id)text;	// 0x36226109
- (float)textAreaAspectRatio;	// 0x36225f11
@end
