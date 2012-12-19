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
- (id)initWithBuffer:(id)buffer;	// 0x4a6001
- (int)getAverageBitRate;	// 0x4a6225
- (long long)getAverageFrameTime;	// 0x4a620d
- (int)getFlags;	// 0x4a619d
- (int)getHeight;	// 0x4a61dd
- (int)getPID;	// 0x4a61ad
- (int)getParX;	// 0x4a61ed
- (int)getParY;	// 0x4a61fd
- (int)getVideoType;	// 0x4a61bd
- (int)getWidth;	// 0x4a61cd
@end
