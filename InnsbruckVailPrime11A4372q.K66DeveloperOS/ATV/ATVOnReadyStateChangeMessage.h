/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVOnReadyStateChangeMessage : XXUnknownSuperclass {
	unsigned _readyState;	// 4 = 0x4
	unsigned _statusCode;	// 8 = 0x8
	NSString *_statusText;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned readyState;	// G=0x15c131; @synthesize=_readyState
@property(readonly, assign, nonatomic) unsigned statusCode;	// G=0x15c141; @synthesize=_statusCode
@property(copy, nonatomic) NSString *statusText;	// G=0x15c151; S=0x15c165; @synthesize=_statusText
- (id)initWithReadyState:(unsigned)readyState statusCode:(unsigned)code statusText:(id)text;	// 0x15c071
- (void)dealloc;	// 0x15c0e5
// declared property getter: - (unsigned)readyState;	// 0x15c131
// declared property setter: - (void)setStatusText:(id)text;	// 0x15c165
// declared property getter: - (unsigned)statusCode;	// 0x15c141
// declared property getter: - (id)statusText;	// 0x15c151
@end

