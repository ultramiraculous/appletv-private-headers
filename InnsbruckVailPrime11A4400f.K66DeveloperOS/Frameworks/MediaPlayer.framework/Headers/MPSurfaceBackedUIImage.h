/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIImage.h>
#import "MediaPlayer-Structs.h"

@class MPPipelineJPEGDecoder;

@interface MPSurfaceBackedUIImage : UIImage {
	MPPipelineJPEGDecoder *decoder;	// 36 = 0x24
}
- (id)initWithIOSurface:(IOSurfaceRef)iosurface decoder:(id)decoder;	// 0x2e33eb25
- (void).cxx_destruct;	// 0x2e33ebed
- (void)dealloc;	// 0x2e33eb89
@end
