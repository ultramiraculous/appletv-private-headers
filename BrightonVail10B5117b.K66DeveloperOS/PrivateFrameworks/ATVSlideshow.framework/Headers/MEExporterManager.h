/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MELoader, NSCondition, NSMutableArray;

@interface MEExporterManager : NSObject {
	MELoader *_loader;	// 4 = 0x4
	NSMutableArray *_exportQueue;	// 8 = 0x8
	NSCondition *_exportWaitCondition;	// 12 = 0xc
}
@property(readonly, assign) MELoader *loader;	// G=0x334619b9; @synthesize=_loader
+ (void)releaseSharedManager;	// 0x334616a1
+ (id)sharedManager;	// 0x33461591
- (id)init;	// 0x3346144d
- (void)_exportCanceled:(id)canceled;	// 0x334618c9
- (void)_exportComplete:(id)complete;	// 0x3346194d
- (void)_queueAndWait:(id)wait;	// 0x334617f9
- (void)dealloc;	// 0x33461501
- (id)exporterWithDocument:(id)document;	// 0x334617ad
- (void)loadAllPlugins;	// 0x3346176d
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x3346178d
// declared property getter: - (id)loader;	// 0x334619b9
@end

