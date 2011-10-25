/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMPolyLine : PBCodable {
	BOOL _hasLineWidth;	// 4 = 0x4
	int _lineWidth;	// 8 = 0x8
	BOOL _hasLineColor;	// 12 = 0xc
	int _lineColor;	// 16 = 0x10
	NSData *_line;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasLine;	// G=0x33846da1; 
@property(assign, nonatomic) BOOL hasLineColor;	// G=0x3384710d; S=0x3384711d; @synthesize=_hasLineColor
@property(assign, nonatomic) BOOL hasLineWidth;	// G=0x338470dd; S=0x338470ed; @synthesize=_hasLineWidth
@property(retain, nonatomic) NSData *line;	// G=0x3384713d; S=0x3384714d; @synthesize=_line
@property(assign, nonatomic) int lineColor;	// G=0x3384712d; S=0x33846d7d; @synthesize=_lineColor
@property(assign, nonatomic) int lineWidth;	// G=0x338470fd; S=0x33846d59; @synthesize=_lineWidth
- (void)dealloc;	// 0x33846d15
- (id)description;	// 0x33846db9
- (id)dictionaryRepresentation;	// 0x33846e29
// declared property getter: - (BOOL)hasLine;	// 0x33846da1
// declared property getter: - (BOOL)hasLineColor;	// 0x3384710d
// declared property getter: - (BOOL)hasLineWidth;	// 0x338470dd
// declared property getter: - (id)line;	// 0x3384713d
// declared property getter: - (int)lineColor;	// 0x3384712d
// declared property getter: - (int)lineWidth;	// 0x338470fd
- (BOOL)readFrom:(id)from;	// 0x33846f2d
// declared property setter: - (void)setHasLineColor:(BOOL)color;	// 0x3384711d
// declared property setter: - (void)setHasLineWidth:(BOOL)width;	// 0x338470ed
// declared property setter: - (void)setLine:(id)line;	// 0x3384714d
// declared property setter: - (void)setLineColor:(int)color;	// 0x33846d7d
// declared property setter: - (void)setLineWidth:(int)width;	// 0x33846d59
- (void)writeTo:(id)to;	// 0x33847045
@end

