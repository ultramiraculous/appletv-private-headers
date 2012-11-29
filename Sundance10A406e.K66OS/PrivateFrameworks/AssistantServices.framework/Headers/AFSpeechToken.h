/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFSpeechToken : NSObject {
	NSString *_text;	// 4 = 0x4
	int _confidence;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _endTime;	// 20 = 0x14
	BOOL _removeSpaceBefore;	// 28 = 0x1c
	BOOL _removeSpaceAfter;	// 29 = 0x1d
}
@property(assign) int confidenceScore;	// G=0x30225835; S=0x30225849; @synthesize=_confidence
@property(assign) double endTime;	// G=0x302258c9; S=0x302258fd; @synthesize=_endTime
@property(assign) BOOL removeSpaceAfter;	// G=0x30225961; S=0x30225979; @synthesize=_removeSpaceAfter
@property(assign) BOOL removeSpaceBefore;	// G=0x30225931; S=0x30225949; @synthesize=_removeSpaceBefore
@property(assign) double startTime;	// G=0x30225861; S=0x30225895; @synthesize=_startTime
@property(copy, nonatomic) NSString *text;	// G=0x30225811; S=0x30225825; @synthesize=_text
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x3022564d
- (void).cxx_destruct;	// 0x30225991
// declared property getter: - (int)confidenceScore;	// 0x30225835
- (id)description;	// 0x30225375
- (id)dkPlistRepresentation;	// 0x30225471
// declared property getter: - (double)endTime;	// 0x302258c9
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x30225961
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x30225931
// declared property setter: - (void)setConfidenceScore:(int)score;	// 0x30225849
// declared property setter: - (void)setEndTime:(double)time;	// 0x302258fd
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x30225979
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x30225949
// declared property setter: - (void)setStartTime:(double)time;	// 0x30225895
// declared property setter: - (void)setText:(id)text;	// 0x30225825
// declared property getter: - (double)startTime;	// 0x30225861
// declared property getter: - (id)text;	// 0x30225811
@end
