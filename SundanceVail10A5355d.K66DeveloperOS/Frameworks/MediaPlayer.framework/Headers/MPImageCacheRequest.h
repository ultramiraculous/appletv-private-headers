/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSOperation.h> // Unknown library

@class MPImageModifier, UIColor, UIImage, MPImageCache;
@protocol MPImageRequestDelegate, NSObject, NSCopying;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	int _contentMode;	// 20 = 0x14
	BOOL _decodeOnFetch;	// 24 = 0x18
	id<MPImageRequestDelegate> _delegate;	// 28 = 0x1c
	UIColor *_fillColor;	// 32 = 0x20
	CGSize _finalSize;	// 36 = 0x24
	MPImageModifier *_modifier;	// 44 = 0x2c
	id<NSObject, NSCopying> _uniqueKey;	// 48 = 0x30
	long long _tag;	// 52 = 0x34
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x337681c9; S=0x337681d9; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x337673c5; 
@property(copy, nonatomic) id completionHandler;	// G=0x337681e9; S=0x337681fd; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x33768299; S=0x337682a9; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x337682b9; S=0x337682c9; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x3376820d; S=0x3376821d; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x3376822d; S=0x3376823d; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x3376824d; S=0x33768265; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x33768279; S=0x33768289; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x337673c9; 
@property(assign, nonatomic) long long tag;	// G=0x337682d9; S=0x337682f1; @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// G=0x33768305; S=0x33768315; @synthesize=_uniqueKey
- (id)init;	// 0x33766f91
- (BOOL)_canUseInputImageAsFinalOutput:(id)output;	// 0x337670e9
- (void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x337675e1
- (id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;	// 0x337679f1
- (void)_sendErrorToDelegate:(id)delegate;	// 0x33767cb1
- (void)_sendImageToDelegate:(id)delegate;	// 0x33767f21
// declared property getter: - (id)cache;	// 0x337681c9
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x337673c5
- (void)cancel;	// 0x33767465
// declared property getter: - (id)completionHandler;	// 0x337681e9
// declared property getter: - (int)contentMode;	// 0x33768299
- (id)copyImageFromImage:(id)image;	// 0x33767301
- (id)copyRawImageReturningError:(id *)error;	// 0x337673b9
- (void)dealloc;	// 0x33767059
// declared property getter: - (BOOL)decodeOnFetch;	// 0x337682b9
// declared property getter: - (id)delegate;	// 0x3376820d
- (id)description;	// 0x33766fe9
// declared property getter: - (id)fillColor;	// 0x3376822d
// declared property getter: - (CGSize)finalSize;	// 0x3376824d
- (unsigned)hash;	// 0x337673cd
- (BOOL)isEqual:(id)equal;	// 0x337673ed
- (void)main;	// 0x337674a9
// declared property getter: - (id)modifier;	// 0x33768279
// declared property getter: - (id)placeholderImage;	// 0x337673c9
// declared property setter: - (void)setCache:(id)cache;	// 0x337681d9
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x337681fd
// declared property setter: - (void)setContentMode:(int)mode;	// 0x337682a9
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x337682c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3376821d
// declared property setter: - (void)setFillColor:(id)color;	// 0x3376823d
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x33768265
// declared property setter: - (void)setModifier:(id)modifier;	// 0x33768289
// declared property setter: - (void)setTag:(long long)tag;	// 0x337682f1
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x33768315
// declared property getter: - (long long)tag;	// 0x337682d9
// declared property getter: - (id)uniqueKey;	// 0x33768305
@end
