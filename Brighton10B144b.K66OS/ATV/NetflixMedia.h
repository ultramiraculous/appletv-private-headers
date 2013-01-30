/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NetflixNrdObjectCallback;

@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *nccpErrorListener_;	// 4 = 0x4
	NetflixNrdObjectCallback *nccpMediaListener_;	// 8 = 0x8
	NetflixNrdObjectCallback *nccpMediaExceptionListener_;	// 12 = 0xc
}
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpErrorListener;	// G=0x4f96ed; S=0x4f96fd; @synthesize=nccpErrorListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaExceptionListener;	// G=0x4f972d; S=0x4f973d; @synthesize=nccpMediaExceptionListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaListener;	// G=0x4f970d; S=0x4f971d; @synthesize=nccpMediaListener_
+ (id)sharedInstance;	// 0x4f8a41
- (id)init;	// 0x4f8b2d
- (void)addEventListener:(id)listener name:(id)name;	// 0x4f8f75
- (void)close;	// 0x4f960d
- (void)dealloc;	// 0x4f8c85
- (BOOL)handleEvent:(id)event;	// 0x4f8dad
- (void)handleMediaError:(id)error;	// 0x4f967d
- (void)handleMediaException:(id)exception;	// 0x4f96b5
- (void)handleNccpError:(id)error;	// 0x4f9645
// declared property getter: - (id)nccpErrorListener;	// 0x4f96ed
// declared property getter: - (id)nccpMediaExceptionListener;	// 0x4f972d
// declared property getter: - (id)nccpMediaListener;	// 0x4f970d
- (void)open:(unsigned)open trackId:(unsigned)anId params:(id)params playbackType:(unsigned)type;	// 0x4f9005
- (void)pause:(int)pause;	// 0x4f937d
- (void)play:(int)play;	// 0x4f9285
- (void)play:(int)play audioTrack:(int)track;	// 0x4f9299
- (void)removeEventListener:(id)listener name:(id)name;	// 0x4f8fbd
- (void)reposition:(int)reposition;	// 0x4f94c5
// declared property setter: - (void)setNccpErrorListener:(id)listener;	// 0x4f96fd
// declared property setter: - (void)setNccpMediaExceptionListener:(id)listener;	// 0x4f973d
// declared property setter: - (void)setNccpMediaListener:(id)listener;	// 0x4f971d
- (void)stop:(int)stop;	// 0x4f9569
- (void)unpause:(int)unpause;	// 0x4f9421
@end
