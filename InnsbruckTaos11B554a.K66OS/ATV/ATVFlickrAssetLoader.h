/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVImageLoader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface ATVFlickrAssetLoader : XXUnknownSuperclass <ATVImageLoader> {
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(retain, nonatomic) NSOperationQueue *queue;	// G=0x4f1ef5; S=0x4f1f05; @synthesize=_queue
+ (id)loadFlickrURL:(id)url;	// 0x4f1741
- (id)init;	// 0x4f1e75
- (void).cxx_destruct;	// 0x4f1f2d
- (void)cancelLoad:(id)load;	// 0x4f1de9
- (id)imageKeyForObject:(id)object;	// 0x4f196d
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;	// 0x4f1981
// declared property getter: - (id)queue;	// 0x4f1ef5
// declared property setter: - (void)setQueue:(id)queue;	// 0x4f1f05
@end

