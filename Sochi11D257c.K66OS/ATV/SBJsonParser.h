/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBJsonParser : XXUnknownSuperclass {
	NSString *error;	// 4 = 0x4
	unsigned depth;	// 8 = 0x8
	unsigned maxDepth;	// 12 = 0xc
}
@property(copy) NSString *error;	// G=0x5a3011; S=0x5a3025; @synthesize
@property(assign) unsigned maxDepth;	// G=0x5a2fe5; S=0x5a2ff9; @synthesize
- (id)init;	// 0x5a2d05
- (void)dealloc;	// 0x5a2d4d
// declared property getter: - (id)error;	// 0x5a3011
// declared property getter: - (unsigned)maxDepth;	// 0x5a2fe5
- (id)objectWithData:(id)data;	// 0x5a2d99
- (id)objectWithString:(id)string;	// 0x5a2f1d
- (id)objectWithString:(id)string error:(id *)error;	// 0x5a2f51
// declared property setter: - (void)setError:(id)error;	// 0x5a3025
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x5a2ff9
@end

