/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface LBSGAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x3159857d; S=0x3159858d; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x31598549; S=0x31598559; @synthesize=_formattedAddressLines
- (void)addComponent:(id)component;	// 0x31598065
- (void)addFormattedAddressLine:(id)line;	// 0x31597fc1
- (id)componentAtIndex:(unsigned)index;	// 0x315980e9
// declared property getter: - (id)components;	// 0x3159857d
- (unsigned)componentsCount;	// 0x315980c9
- (void)dealloc;	// 0x31597f69
- (id)description;	// 0x31598109
- (id)dictionaryRepresentation;	// 0x31598179
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x31598045
// declared property getter: - (id)formattedAddressLines;	// 0x31598549
- (unsigned)formattedAddressLinesCount;	// 0x31598025
- (BOOL)readFrom:(id)from;	// 0x315981f9
// declared property setter: - (void)setComponents:(id)components;	// 0x3159858d
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x31598559
- (void)writeTo:(id)to;	// 0x31598399
@end

