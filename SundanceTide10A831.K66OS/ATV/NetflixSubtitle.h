/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface NetflixSubtitle : XXUnknownSuperclass {
	float startTime_;	// 4 = 0x4
	float endTime_;	// 8 = 0x8
	NSString *text_;	// 12 = 0xc
}
@property(assign, nonatomic) float endTime;	// G=0x4ec785; S=0x4ec795; @synthesize=endTime_
@property(assign, nonatomic) float startTime;	// G=0x4ec765; S=0x4ec775; @synthesize=startTime_
@property(copy, nonatomic) NSString *text;	// G=0x4ec7a5; S=0x4ec7b9; @synthesize=text_
- (id)initWithText:(id)text startTime:(float)time endTime:(float)time3;	// 0x4ec5b5
- (void)dealloc;	// 0x4ec659
- (id)description;	// 0x4ec6a5
// declared property getter: - (float)endTime;	// 0x4ec785
// declared property setter: - (void)setEndTime:(float)time;	// 0x4ec795
// declared property setter: - (void)setStartTime:(float)time;	// 0x4ec775
// declared property setter: - (void)setText:(id)text;	// 0x4ec7b9
// declared property getter: - (float)startTime;	// 0x4ec765
// declared property getter: - (id)text;	// 0x4ec7a5
@end

