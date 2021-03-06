/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMStreetViewViewpoint : PBCodable {
	BOOL _hasScene;	// 4 = 0x4
	int _scene;	// 8 = 0x8
	BOOL _hasPanningCount;	// 12 = 0xc
	int _panningCount;	// 16 = 0x10
	BOOL _hasZoomingCount;	// 20 = 0x14
	int _zoomingCount;	// 24 = 0x18
	BOOL _hasNavigationCount;	// 28 = 0x1c
	int _navigationCount;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL hasNavigationCount;	// G=0x31fc111d; S=0x31fc112d; @synthesize=_hasNavigationCount
@property(assign, nonatomic) BOOL hasPanningCount;	// G=0x31fc10dd; S=0x31fc10ed; @synthesize=_hasPanningCount
@property(assign, nonatomic) BOOL hasScene;	// G=0x31fc10bd; S=0x31fc10cd; @synthesize=_hasScene
@property(assign, nonatomic) BOOL hasZoomingCount;	// G=0x31fc10fd; S=0x31fc110d; @synthesize=_hasZoomingCount
@property(assign, nonatomic) int navigationCount;	// G=0x31fc0c7d; S=0x31fc0ca1; @synthesize=_navigationCount
@property(assign, nonatomic) int panningCount;	// G=0x31fc0bed; S=0x31fc0c11; @synthesize=_panningCount
@property(assign, nonatomic) int scene;	// G=0x31fc0ba5; S=0x31fc0bc9; @synthesize=_scene
@property(assign, nonatomic) int zoomingCount;	// G=0x31fc0c35; S=0x31fc0c59; @synthesize=_zoomingCount
- (void)dealloc;	// 0x31fc0b79
- (id)description;	// 0x31fc0cc5
- (id)dictionaryRepresentation;	// 0x31fc0d35
// declared property getter: - (BOOL)hasNavigationCount;	// 0x31fc111d
// declared property getter: - (BOOL)hasPanningCount;	// 0x31fc10dd
// declared property getter: - (BOOL)hasScene;	// 0x31fc10bd
// declared property getter: - (BOOL)hasZoomingCount;	// 0x31fc10fd
// declared property getter: - (int)navigationCount;	// 0x31fc0c7d
// declared property getter: - (int)panningCount;	// 0x31fc0bed
- (BOOL)readFrom:(id)from;	// 0x31fc0ebd
// declared property getter: - (int)scene;	// 0x31fc0ba5
// declared property setter: - (void)setHasNavigationCount:(BOOL)count;	// 0x31fc112d
// declared property setter: - (void)setHasPanningCount:(BOOL)count;	// 0x31fc10ed
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x31fc10cd
// declared property setter: - (void)setHasZoomingCount:(BOOL)count;	// 0x31fc110d
// declared property setter: - (void)setNavigationCount:(int)count;	// 0x31fc0ca1
// declared property setter: - (void)setPanningCount:(int)count;	// 0x31fc0c11
// declared property setter: - (void)setScene:(int)scene;	// 0x31fc0bc9
// declared property setter: - (void)setZoomingCount:(int)count;	// 0x31fc0c59
- (void)writeTo:(id)to;	// 0x31fc0fe5
// declared property getter: - (int)zoomingCount;	// 0x31fc0c35
@end

