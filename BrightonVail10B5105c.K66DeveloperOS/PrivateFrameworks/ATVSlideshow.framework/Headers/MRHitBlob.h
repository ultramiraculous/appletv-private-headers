/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRLayer, NSString, MRLayerEffect;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : NSObject {
	MRLayer *_outerLayer;	// 4 = 0x4
	MRLayerEffect *_effectLayer;	// 8 = 0x8
	NSString *_innerPath;	// 12 = 0xc
	NSString *_elementID;	// 16 = 0x10
	id _clientObject;	// 20 = 0x14
	id<MRSlidePositionSupport> _proxyForSlide;	// 24 = 0x18
	unsigned char _currentLayoutIndex;	// 28 = 0x1c
}
@property(readonly, assign) float aspectRatio;	// G=0x32571fa9; 
@property(retain) id clientObject;	// G=0x325721b5; S=0x325721c9; @synthesize=_clientObject
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x32572205; S=0x32572215; @synthesize=_currentLayoutIndex
@property(retain) MRLayerEffect *effectLayer;	// G=0x32572149; S=0x3257215d; @synthesize=_effectLayer
@property(copy) NSString *elementID;	// G=0x32572191; S=0x325721a5; @synthesize=_elementID
@property(copy) NSString *innerPath;	// G=0x3257216d; S=0x32572181; @synthesize=_innerPath
@property(readonly, assign) CGSize innerResolution;	// G=0x32572019; 
@property(readonly, assign) NSString *mediaType;	// G=0x32572049; 
@property(retain) MRLayer *outerLayer;	// G=0x32572125; S=0x32572139; @synthesize=_outerLayer
@property(assign) id<MRSlidePositionSupport> proxyForSlide;	// G=0x325721d9; S=0x325721ed; @synthesize=_proxyForSlide
// declared property getter: - (float)aspectRatio;	// 0x32571fa9
// declared property getter: - (id)clientObject;	// 0x325721b5
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x32572205
// declared property getter: - (id)effectLayer;	// 0x32572149
// declared property getter: - (id)elementID;	// 0x32572191
// declared property getter: - (id)innerPath;	// 0x3257216d
// declared property getter: - (CGSize)innerResolution;	// 0x32572019
- (BOOL)isEqualToHitBlob:(id)hitBlob;	// 0x325720ad
// declared property getter: - (id)mediaType;	// 0x32572049
// declared property getter: - (id)outerLayer;	// 0x32572125
// declared property getter: - (id)proxyForSlide;	// 0x325721d9
// declared property setter: - (void)setClientObject:(id)object;	// 0x325721c9
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x32572215
// declared property setter: - (void)setEffectLayer:(id)layer;	// 0x3257215d
// declared property setter: - (void)setElementID:(id)anId;	// 0x325721a5
// declared property setter: - (void)setInnerPath:(id)path;	// 0x32572181
// declared property setter: - (void)setOuterLayer:(id)layer;	// 0x32572139
// declared property setter: - (void)setProxyForSlide:(id)slide;	// 0x325721ed
@end
