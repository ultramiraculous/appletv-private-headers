/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageCacheRequest.h"
#import "MediaPlayer-Structs.h"

@class MPAVItem;

@interface MPAVItemImageCacheRequest : MPImageCacheRequest {
	MPAVItem *_item;	// 60 = 0x3c
	XXStruct_pwHToB _imageTime;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) MPAVItem *AVItem;	// G=0x3502e219; @synthesize=_item
@property(readonly, assign, nonatomic) XXStruct_pwHToB imageTime;	// G=0x3502e229; @synthesize=_imageTime
- (id)init;	// 0x3502dd91
- (id)initWithAVItem:(id)avitem imageTime:(XXStruct_pwHToB)time;	// 0x3502dde9
// declared property getter: - (id)AVItem;	// 0x3502e219
- (id)copyRawImageReturningError:(id *)error;	// 0x3502df5d
- (void)dealloc;	// 0x3502df11
// declared property getter: - (XXStruct_pwHToB)imageTime;	// 0x3502e229
@end
