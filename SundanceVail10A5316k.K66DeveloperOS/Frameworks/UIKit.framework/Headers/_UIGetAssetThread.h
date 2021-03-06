/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSThread.h> // Unknown library

@class ALAssetsLibrary, NSCondition, NSURL, ALAsset;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread {
@private
	NSURL *_url;	// 52 = 0x34
	ALAssetsLibrary *_library;	// 56 = 0x38
	NSCondition *_condition;	// 60 = 0x3c
	ALAsset *_asset;	// 64 = 0x40
}
@property(retain) ALAsset *asset;	// G=0x303d817d; S=0x303d8191; @synthesize=_asset
@property(retain) NSCondition *condition;	// G=0x303d81a1; S=0x303d81b5; @synthesize=_condition
- (id)initWithURL:(id)url assetsLibrary:(id)library;	// 0x303d7ec9
// declared property getter: - (id)asset;	// 0x303d817d
// declared property getter: - (id)condition;	// 0x303d81a1
- (void)dealloc;	// 0x303d7f69
- (void)main;	// 0x303d7ff5
// declared property setter: - (void)setAsset:(id)asset;	// 0x303d8191
// declared property setter: - (void)setCondition:(id)condition;	// 0x303d81b5
@end

