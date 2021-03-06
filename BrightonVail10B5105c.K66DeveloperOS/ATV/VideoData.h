/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VideoData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameTime;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x4a02e1
- (int)getAverageBitRate;	// 0x4a0505
- (long long)getAverageFrameTime;	// 0x4a04ed
- (int)getFlags;	// 0x4a047d
- (int)getHeight;	// 0x4a04bd
- (int)getPID;	// 0x4a048d
- (int)getParX;	// 0x4a04cd
- (int)getParY;	// 0x4a04dd
- (int)getVideoType;	// 0x4a049d
- (int)getWidth;	// 0x4a04ad
@end

