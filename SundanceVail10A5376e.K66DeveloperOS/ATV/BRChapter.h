/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRChapter : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _endTime;	// 24 = 0x18
	NSDate *_startDate;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *description;	// G=0x361b05; S=0x361b15; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x361bbd; S=0x361bcd; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x361b71; S=0x361b89; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x361b25; S=0x361b35; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x361ae5; S=0x361af5; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x361b9d; S=0x361bad; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x361b45; S=0x361b5d; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x3616d9
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x361689
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x361805
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x361721
- (BOOL)containsDate:(id)date;	// 0x361a51
- (BOOL)containsTime:(double)time;	// 0x361969
- (void)dealloc;	// 0x3618d1
// declared property getter: - (id)description;	// 0x361b05
// declared property getter: - (id)endDate;	// 0x361bbd
// declared property getter: - (double)endTime;	// 0x361b71
// declared property getter: - (id)identifier;	// 0x361b25
- (id)imageProxy;	// 0x361ae1
- (void)invalidate;	// 0x361965
// declared property getter: - (id)name;	// 0x361ae5
// declared property setter: - (void)setDescription:(id)description;	// 0x361b15
// declared property setter: - (void)setEndDate:(id)date;	// 0x361bcd
// declared property setter: - (void)setEndTime:(double)time;	// 0x361b89
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x361b35
// declared property setter: - (void)setName:(id)name;	// 0x361af5
// declared property setter: - (void)setStartDate:(id)date;	// 0x361bad
// declared property setter: - (void)setStartTime:(double)time;	// 0x361b5d
// declared property getter: - (id)startDate;	// 0x361b9d
// declared property getter: - (double)startTime;	// 0x361b45
@end

