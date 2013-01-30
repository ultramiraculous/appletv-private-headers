/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface Logger : XXUnknownSuperclass {
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x4ec071; S=0x4ec081; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x4ec051; S=0x4ec061; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x4ec091; S=0x4ec0a1; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x4ec0b1; S=0x4ec0c1; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x4ebaf1
- (id)init;	// 0x4ebb39
- (void)addTraceArea:(id)area;	// 0x4ebd81
- (void)addTraceAreaWithSet:(id)set;	// 0x4ebdb5
- (void)dealloc;	// 0x4ebbe5
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x4ebf3d
- (void)log:(id)log message:(id)message;	// 0x4ebe45
// declared property getter: - (BOOL)logAll;	// 0x4ec071
// declared property getter: - (BOOL)logEnabled;	// 0x4ec051
- (void)popTraceAreas;	// 0x4ebd0d
- (void)pushTraceAreas;	// 0x4ebc5d
- (void)removeAllTraceAreas;	// 0x4ebe1d
- (void)removeTraceArea:(id)area;	// 0x4ebde9
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x4ec081
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x4ec061
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x4ec0a1
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x4ec0c1
// declared property getter: - (id)traceAreas;	// 0x4ec091
// declared property getter: - (id)traceAreasStack;	// 0x4ec0b1
@end
