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
- (id)initWithBuffer:(id)buffer;	// 0x560cd1
- (int)getAverageBitRate;	// 0x560ef5
- (long long)getAverageFrameTime;	// 0x560edd
- (int)getFlags;	// 0x560e6d
- (int)getHeight;	// 0x560ead
- (int)getPID;	// 0x560e7d
- (int)getParX;	// 0x560ebd
- (int)getParY;	// 0x560ecd
- (int)getVideoType;	// 0x560e8d
- (int)getWidth;	// 0x560e9d
@end

