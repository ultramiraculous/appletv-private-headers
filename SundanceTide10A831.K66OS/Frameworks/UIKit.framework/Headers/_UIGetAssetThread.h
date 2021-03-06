/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSThread.h> // Unknown library

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread {
	NSURL *_url;	// 52 = 0x34
	ALAssetsLibrary *_library;	// 56 = 0x38
	NSCondition *_condition;	// 60 = 0x3c
	ALAsset *_asset;	// 64 = 0x40
}
@property(retain) ALAsset *asset;	// G=0x31f4afbd; S=0x31f4afd1; @synthesize=_asset
@property(retain) NSCondition *condition;	// G=0x31f4afe1; S=0x31f4aff5; @synthesize=_condition
- (id)initWithURL:(id)url assetsLibrary:(id)library;	// 0x31f4ad09
// declared property getter: - (id)asset;	// 0x31f4afbd
// declared property getter: - (id)condition;	// 0x31f4afe1
- (void)dealloc;	// 0x31f4ada9
- (void)main;	// 0x31f4ae35
// declared property setter: - (void)setAsset:(id)asset;	// 0x31f4afd1
// declared property setter: - (void)setCondition:(id)condition;	// 0x31f4aff5
@end

