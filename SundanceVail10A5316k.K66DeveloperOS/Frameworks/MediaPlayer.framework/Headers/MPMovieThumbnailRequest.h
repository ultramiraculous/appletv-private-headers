/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {
@private
	NSArray *_times;	// 4 = 0x4
	int _timeOption;	// 8 = 0x8
}
@property(assign, nonatomic) int timeOption;	// G=0x34813b95; S=0x34813ba5; @synthesize=_timeOption
@property(retain, nonatomic) NSArray *times;	// G=0x34813b75; S=0x34813b85; @synthesize=_times
- (void)dealloc;	// 0x34813b29
// declared property setter: - (void)setTimeOption:(int)option;	// 0x34813ba5
// declared property setter: - (void)setTimes:(id)times;	// 0x34813b85
// declared property getter: - (int)timeOption;	// 0x34813b95
// declared property getter: - (id)times;	// 0x34813b75
@end

