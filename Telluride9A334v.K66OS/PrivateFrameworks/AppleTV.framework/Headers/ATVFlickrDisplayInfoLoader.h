/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDisplayInfoLoader.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVFlickrDisplayInfoLoader : NSObject <BRDisplayInfoLoader> {
@private
	id _object;	// 4 = 0x4
}
@property(retain) id object;	// G=0x330d8345; S=0x330d8355; converted property
+ (id)displayInfoLoaderWithForObject:(id)object;	// 0x330d829d
- (void)cancelLoadDisplayInfo;	// 0x330d8471
- (void)dealloc;	// 0x330d82f9
- (id)defaultImage;	// 0x330d854d
- (void)loadDisplayInfo;	// 0x330d8395
// converted property getter: - (id)object;	// 0x330d8345
// converted property setter: - (void)setObject:(id)object;	// 0x330d8355
@end
