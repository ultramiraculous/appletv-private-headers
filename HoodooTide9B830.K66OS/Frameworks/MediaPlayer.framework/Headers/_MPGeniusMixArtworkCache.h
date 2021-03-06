/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSData;

@interface _MPGeniusMixArtworkCache : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x346acae1; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x346acc65; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x346acd0d; 
@property(readonly, assign, nonatomic) unsigned long long entityArtworkCacheHash;	// G=0x346acdd1; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x346ac811
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size entityArtworkCacheHash:(unsigned long long)hash artworkData:(void *)data length:(unsigned)length;	// 0x346ac71d
- (id)init;	// 0x346ac659
// declared property getter: - (CGImageRef)artworkImage;	// 0x346acae1
// declared property getter: - (unsigned)coverCount;	// 0x346acc65
// declared property getter: - (CGSize)coverSize;	// 0x346acd0d
- (void)dealloc;	// 0x346ac6b9
// declared property getter: - (unsigned long long)entityArtworkCacheHash;	// 0x346acdd1
- (BOOL)writeToFile:(id)file;	// 0x346ace7d
@end

