/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPMediaChapter : NSObject {
	int _chapterType;	// 4 = 0x4
	unsigned _indexInChaptersWithAnyType;	// 8 = 0x8
	unsigned _indexInChaptersWithSameType;	// 12 = 0xc
	double _playbackDuration;	// 16 = 0x10
	double _playbackTime;	// 24 = 0x18
	id _value;	// 32 = 0x20
	id _valueLoader;	// 36 = 0x24
}
@property(assign, nonatomic) int chapterType;	// G=0x31de70e1; S=0x31de70f1; @synthesize=_chapterType
@property(assign, nonatomic) unsigned indexInChaptersWithAnyType;	// G=0x31de70a1; S=0x31de70b1; @synthesize=_indexInChaptersWithAnyType
@property(assign, nonatomic) unsigned indexInChaptersWithSameType;	// G=0x31de70c1; S=0x31de70d1; @synthesize=_indexInChaptersWithSameType
@property(assign, nonatomic) double playbackDuration;	// G=0x31de7101; S=0x31de7119; @synthesize=_playbackDuration
@property(assign, nonatomic) double playbackTime;	// G=0x31de712d; S=0x31de7145; @synthesize=_playbackTime
@property(retain, nonatomic) id value;	// G=0x31de700d; S=0x31de7159; @synthesize=_value
@property(copy, nonatomic) id valueLoader;	// G=0x31de7169; S=0x31de717d; @synthesize=_valueLoader
- (id)initWithCoder:(id)coder;	// 0x31de6e45
- (int)_sortByChapterIndex:(id)index;	// 0x31de4495
// declared property getter: - (int)chapterType;	// 0x31de70e1
- (void)dealloc;	// 0x31de6b71
- (id)description;	// 0x31de6bd5
- (double)duration;	// 0x31de7089
- (void)encodeWithCoder:(id)coder;	// 0x31de6cc9
// declared property getter: - (unsigned)indexInChaptersWithAnyType;	// 0x31de70a1
// declared property getter: - (unsigned)indexInChaptersWithSameType;	// 0x31de70c1
// declared property getter: - (double)playbackDuration;	// 0x31de7101
// declared property getter: - (double)playbackTime;	// 0x31de712d
// declared property setter: - (void)setChapterType:(int)type;	// 0x31de70f1
// declared property setter: - (void)setIndexInChaptersWithAnyType:(unsigned)anyType;	// 0x31de70b1
// declared property setter: - (void)setIndexInChaptersWithSameType:(unsigned)sameType;	// 0x31de70d1
// declared property setter: - (void)setPlaybackDuration:(double)duration;	// 0x31de7119
// declared property setter: - (void)setPlaybackTime:(double)time;	// 0x31de7145
// declared property setter: - (void)setValue:(id)value;	// 0x31de7159
// declared property setter: - (void)setValueLoader:(id)loader;	// 0x31de717d
- (id)title;	// 0x31de7035
// declared property getter: - (id)value;	// 0x31de700d
// declared property getter: - (id)valueLoader;	// 0x31de7169
@end
