/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMActivityManagerInternal : NSObject {
	CLConnectionClient *fLocationdConnection;	// 4 = 0x4
	id fActivityHandler;	// 8 = 0x8
	dispatch_source_s *fTimer;	// 12 = 0xc
}
- (id)init;	// 0x367a60cd
- (void)dealloc;	// 0x367a6119
@end

