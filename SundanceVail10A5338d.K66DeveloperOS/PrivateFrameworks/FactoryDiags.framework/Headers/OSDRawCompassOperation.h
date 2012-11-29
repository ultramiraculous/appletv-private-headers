/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSOperation.h> // Unknown library

@class OSDCompassData;

@interface OSDRawCompassOperation : NSOperation {
	id _target;	// 12 = 0xc
	SEL _callback;	// 16 = 0x10
	OSDCompassData *_compassData;	// 20 = 0x14
}
- (id)initWithCompassData:(id)compassData target:(id)target callback:(SEL)callback;	// 0x32a1bb51
- (void)dealloc;	// 0x32a1bbdd
- (void)main;	// 0x32a1bc41
@end
