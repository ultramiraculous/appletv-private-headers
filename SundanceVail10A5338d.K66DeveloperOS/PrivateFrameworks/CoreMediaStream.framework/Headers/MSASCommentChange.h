/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSASComment;

@interface MSASCommentChange : NSObject {
	MSASComment *_comment;	// 4 = 0x4
	int _deletionIndex;	// 8 = 0x8
	int _type;	// 12 = 0xc
}
@property(retain, nonatomic) MSASComment *comment;	// G=0x337639bd; S=0x337639cd; @synthesize=_comment
@property(assign, nonatomic) int deletionIndex;	// G=0x337639f5; S=0x33763a05; @synthesize=_deletionIndex
@property(assign, nonatomic) int type;	// G=0x33763a15; S=0x33763a25; @synthesize=_type
- (void).cxx_destruct;	// 0x33763a35
// declared property getter: - (id)comment;	// 0x337639bd
// declared property getter: - (int)deletionIndex;	// 0x337639f5
- (id)description;	// 0x337638f1
// declared property setter: - (void)setComment:(id)comment;	// 0x337639cd
// declared property setter: - (void)setDeletionIndex:(int)index;	// 0x33763a05
// declared property setter: - (void)setType:(int)type;	// 0x33763a25
// declared property getter: - (int)type;	// 0x33763a15
@end

