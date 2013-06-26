/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextPosition;

__attribute__((visibility("hidden")))
@interface UITextInputArrowKeyHistory : NSObject {
	UITextPosition *startPosition;	// 4 = 0x4
	int amount;	// 8 = 0x8
	int anchor;	// 12 = 0xc
	UITextPosition *start;	// 16 = 0x10
	UITextPosition *end;	// 20 = 0x14
	UITextPosition *cursor;	// 24 = 0x18
	BOOL affinityDownstream;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL affinityDownstream;	// G=0x32dee561; S=0x32dee571; @synthesize
@property(assign, nonatomic) int amount;	// G=0x32dee581; S=0x32dee591; @synthesize
@property(assign, nonatomic) int anchor;	// G=0x32dee4e1; S=0x32dee4f1; @synthesize
@property(retain, nonatomic) UITextPosition *cursor;	// G=0x32dee501; S=0x32dee511; @synthesize
@property(retain, nonatomic) UITextPosition *end;	// G=0x32dee541; S=0x32dee551; @synthesize
@property(retain, nonatomic) UITextPosition *start;	// G=0x32dee521; S=0x32dee531; @synthesize
@property(retain, nonatomic) UITextPosition *startPosition;	// G=0x32dee4c1; S=0x32dee4d1; @synthesize
// declared property getter: - (BOOL)affinityDownstream;	// 0x32dee561
// declared property getter: - (int)amount;	// 0x32dee581
// declared property getter: - (int)anchor;	// 0x32dee4e1
// declared property getter: - (id)cursor;	// 0x32dee501
- (void)dealloc;	// 0x32dee441
// declared property getter: - (id)end;	// 0x32dee541
// declared property setter: - (void)setAffinityDownstream:(BOOL)downstream;	// 0x32dee571
// declared property setter: - (void)setAmount:(int)amount;	// 0x32dee591
// declared property setter: - (void)setAnchor:(int)anchor;	// 0x32dee4f1
// declared property setter: - (void)setCursor:(id)cursor;	// 0x32dee511
// declared property setter: - (void)setEnd:(id)end;	// 0x32dee551
// declared property setter: - (void)setStart:(id)start;	// 0x32dee531
// declared property setter: - (void)setStartPosition:(id)position;	// 0x32dee4d1
// declared property getter: - (id)start;	// 0x32dee521
// declared property getter: - (id)startPosition;	// 0x32dee4c1
@end
