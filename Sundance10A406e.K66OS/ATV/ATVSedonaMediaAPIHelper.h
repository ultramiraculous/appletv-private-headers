/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMediaAPIHelper : BRSingleton {
	id _openFinishedHandler;	// 4 = 0x4
	int _state;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x23c901
+ (id)singleton;	// 0x23c8f1
- (id)init;	// 0x23c911
- (void)_mediaCloseFinished:(id)finished;	// 0x23cc51
- (void)_mediaOpenFinished:(id)finished;	// 0x23cb35
- (void)mediaClose;	// 0x23cadd
- (void)mediaOpenURL:(id)url params:(id)params openFinishedHandler:(id)handler;	// 0x23ca25
@end

