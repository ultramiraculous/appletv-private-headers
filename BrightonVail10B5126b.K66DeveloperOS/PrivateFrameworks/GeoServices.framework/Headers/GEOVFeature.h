/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOVCharacteristics, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVFeature : PBCodable {
	XXStruct_WmZAAA _extrusionHeights;	// 4 = 0x4
	XXStruct_WmZAAA _labelOffsets;	// 16 = 0x10
	XXStruct_WmZAAA _shieldLabelOffsets;	// 28 = 0x1c
	XXStruct_WmZAAA _shieldLabelTypes;	// 40 = 0x28
	unsigned long long _businessID;	// 52 = 0x34
	long long _uID;	// 60 = 0x3c
	unsigned _centerlineCount;	// 68 = 0x44
	unsigned _centerlineStart;	// 72 = 0x48
	GEOVCharacteristics *_characteristics;	// 76 = 0x4c
	float _endLaneWidth;	// 80 = 0x50
	float _endOffset;	// 84 = 0x54
	float _endRoadOffset;	// 88 = 0x58
	unsigned _entryPointMask;	// 92 = 0x5c
	int _formOfWay;	// 96 = 0x60
	float _minzoomRank;	// 100 = 0x64
	NSData *_oBSOLETECenterlines;	// 104 = 0x68
	NSData *_oBSOLETEShieldLabelPositions;	// 108 = 0x6c
	NSData *_oBSOLETEVertexLabelPositions;	// 112 = 0x70
	int _placeType;	// 116 = 0x74
	NSData *_pointLabelPosition;	// 120 = 0x78
	int _roadClass;	// 124 = 0x7c
	int _sectionCount;	// 128 = 0x80
	int _sectionStart;	// 132 = 0x84
	int _speedLimit;	// 136 = 0x88
	float _startLaneWidth;	// 140 = 0x8c
	float _startOffset;	// 144 = 0x90
	float _startRoadOffset;	// 148 = 0x94
	NSMutableArray *_styleAttributes;	// 152 = 0x98
	unsigned _styleGroup;	// 156 = 0x9c
	int _travelDirection;	// 160 = 0xa0
	int _type;	// 164 = 0xa4
	BOOL _polyIsConvex;	// 168 = 0xa8
	struct {
		unsigned businessID : 1;
		unsigned uID : 1;
		unsigned centerlineCount : 1;
		unsigned centerlineStart : 1;
		unsigned endLaneWidth : 1;
		unsigned endOffset : 1;
		unsigned endRoadOffset : 1;
		unsigned entryPointMask : 1;
		unsigned formOfWay : 1;
		unsigned minzoomRank : 1;
		unsigned placeType : 1;
		unsigned roadClass : 1;
		unsigned sectionCount : 1;
		unsigned sectionStart : 1;
		unsigned speedLimit : 1;
		unsigned startLaneWidth : 1;
		unsigned startOffset : 1;
		unsigned startRoadOffset : 1;
		unsigned styleGroup : 1;
		unsigned travelDirection : 1;
		unsigned type : 1;
		unsigned polyIsConvex : 1;
	} _has;	// 169 = 0xa9
}
@property(assign, nonatomic) unsigned long long businessID;	// G=0x33f5bf69; S=0x33fe77dd; @synthesize=_businessID
@property(assign, nonatomic) unsigned centerlineCount;	// G=0x33feab89; S=0x33fe7e2d; @synthesize=_centerlineCount
@property(assign, nonatomic) unsigned centerlineStart;	// G=0x33feab99; S=0x33fe7e8d; @synthesize=_centerlineStart
@property(retain, nonatomic) GEOVCharacteristics *characteristics;	// G=0x33feab49; S=0x33f5cc31; @synthesize=_characteristics
@property(assign, nonatomic) float endLaneWidth;	// G=0x33feabc9; S=0x33fe7fd1; @synthesize=_endLaneWidth
@property(assign, nonatomic) float endOffset;	// G=0x33feab69; S=0x33fe7d65; @synthesize=_endOffset
@property(assign, nonatomic) float endRoadOffset;	// G=0x33feabe9; S=0x33fe8091; @synthesize=_endRoadOffset
@property(assign, nonatomic) unsigned entryPointMask;	// G=0x33feabf9; S=0x33fe80f1; @synthesize=_entryPointMask
@property(readonly, assign, nonatomic) int *extrusionHeights;	// G=0x33fe7bf9; 
@property(readonly, assign, nonatomic) unsigned extrusionHeightsCount;	// G=0x33fe7be5; 
@property(assign, nonatomic) int formOfWay;	// G=0x33feaae9; S=0x33fe7959; @synthesize=_formOfWay
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x33f5bf55; S=0x33fe7811; 
@property(assign, nonatomic) BOOL hasCenterlineCount;	// G=0x33fe7e79; S=0x33fe7e55; 
@property(assign, nonatomic) BOOL hasCenterlineStart;	// G=0x33fe7ed9; S=0x33fe7eb5; 
@property(readonly, assign, nonatomic) BOOL hasCharacteristics;	// G=0x33fe7ced; 
@property(assign, nonatomic) BOOL hasEndLaneWidth;	// G=0x33fe801d; S=0x33fe7ff9; 
@property(assign, nonatomic) BOOL hasEndOffset;	// G=0x33fe7db1; S=0x33fe7d8d; 
@property(assign, nonatomic) BOOL hasEndRoadOffset;	// G=0x33fe80dd; S=0x33fe80b9; 
@property(assign, nonatomic) BOOL hasEntryPointMask;	// G=0x33fe813d; S=0x33fe8119; 
@property(assign, nonatomic) BOOL hasFormOfWay;	// G=0x33fe79a5; S=0x33fe7981; 
@property(assign, nonatomic) BOOL hasMinzoomRank;	// G=0x33f5bf81; S=0x33fe7ded; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETECenterlines;	// G=0x33fe7e15; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEShieldLabelPositions;	// G=0x33fe7b0d; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEVertexLabelPositions;	// G=0x33fe7af5; 
@property(assign, nonatomic) BOOL hasPlaceType;	// G=0x33fe7885; S=0x33fe7861; 
@property(readonly, assign, nonatomic) BOOL hasPointLabelPosition;	// G=0x33fe7add; 
@property(assign, nonatomic) BOOL hasPolyIsConvex;	// G=0x33fe78e1; S=0x33fe78c1; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x33fe7945; S=0x33fe7921; 
@property(assign, nonatomic) BOOL hasSectionCount;	// G=0x33fe7ac9; S=0x33fe7aa5; 
@property(assign, nonatomic) BOOL hasSectionStart;	// G=0x33fe7a69; S=0x33fe7a45; 
@property(assign, nonatomic) BOOL hasSpeedLimit;	// G=0x33fe7bd1; S=0x33fe7bad; 
@property(assign, nonatomic) BOOL hasStartLaneWidth;	// G=0x33fe7fbd; S=0x33fe7fa1; 
@property(assign, nonatomic) BOOL hasStartOffset;	// G=0x33fe7d4d; S=0x33fe7d2d; 
@property(assign, nonatomic) BOOL hasStartRoadOffset;	// G=0x33fe8079; S=0x33fe8059; 
@property(assign, nonatomic) BOOL hasStyleGroup;	// G=0x33fe7b6d; S=0x33fe7b4d; 
@property(assign, nonatomic) BOOL hasTravelDirection;	// G=0x33fe7a05; S=0x33fe79e5; 
@property(assign, nonatomic) BOOL hasType;	// G=0x33f5bfa9; S=0x33fe7f59; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x33fe77c9; S=0x33fe77a5; 
@property(readonly, assign, nonatomic) int *labelOffsets;	// G=0x33f5bec5; 
@property(readonly, assign, nonatomic) unsigned labelOffsetsCount;	// G=0x33f5b9f1; 
@property(assign, nonatomic) float minzoomRank;	// G=0x33f5bf99; S=0x33fe7dc5; @synthesize=_minzoomRank
@property(retain, nonatomic) NSData *oBSOLETECenterlines;	// G=0x33feab79; S=0x33f5cc41; @synthesize=_oBSOLETECenterlines
@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions;	// G=0x33feab29; S=0x33f5cc21; @synthesize=_oBSOLETEShieldLabelPositions
@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions;	// G=0x33feab19; S=0x33f5cc11; @synthesize=_oBSOLETEVertexLabelPositions
@property(assign, nonatomic) int placeType;	// G=0x33feaab9; S=0x33fe7839; @synthesize=_placeType
@property(retain, nonatomic) NSData *pointLabelPosition;	// G=0x33feab09; S=0x33f5cc01; @synthesize=_pointLabelPosition
@property(assign, nonatomic) BOOL polyIsConvex;	// G=0x33feaac9; S=0x33fe7899; @synthesize=_polyIsConvex
@property(assign, nonatomic) int roadClass;	// G=0x33feaad9; S=0x33fe78f9; @synthesize=_roadClass
@property(assign, nonatomic) int sectionCount;	// G=0x33f5c269; S=0x33fe7a7d; @synthesize=_sectionCount
@property(assign, nonatomic) int sectionStart;	// G=0x33f5c279; S=0x33fe7a1d; @synthesize=_sectionStart
@property(readonly, assign, nonatomic) int *shieldLabelOffsets;	// G=0x33fe7575; 
@property(readonly, assign, nonatomic) unsigned shieldLabelOffsetsCount;	// G=0x33f5ba09; 
@property(readonly, assign, nonatomic) int *shieldLabelTypes;	// G=0x33fe767d; 
@property(readonly, assign, nonatomic) unsigned shieldLabelTypesCount;	// G=0x33fe7669; 
@property(assign, nonatomic) int speedLimit;	// G=0x33feab39; S=0x33fe7b85; @synthesize=_speedLimit
@property(assign, nonatomic) float startLaneWidth;	// G=0x33feabb9; S=0x33fe7f79; @synthesize=_startLaneWidth
@property(assign, nonatomic) float startOffset;	// G=0x33feab59; S=0x33fe7d05; @synthesize=_startOffset
@property(assign, nonatomic) float startRoadOffset;	// G=0x33feabd9; S=0x33fe8031; @synthesize=_startRoadOffset
@property(retain, nonatomic) NSMutableArray *styleAttributes;	// G=0x33f5c1d9; S=0x33f5cc51; @synthesize=_styleAttributes
@property(assign, nonatomic) unsigned styleGroup;	// G=0x33f5bf29; S=0x33fe7b25; @synthesize=_styleGroup
@property(assign, nonatomic) int travelDirection;	// G=0x33feaaf9; S=0x33fe79bd; @synthesize=_travelDirection
@property(assign, nonatomic) int type;	// G=0x33feaba9; S=0x33fe7f31; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x33f5bf39; S=0x33fe7771; @synthesize=_uID
- (void)addExtrusionHeight:(int)height;	// 0x33fe7c1d
- (void)addLabelOffset:(int)offset;	// 0x33fe74a1
- (void)addShieldLabelOffset:(int)offset;	// 0x33fe7599
- (void)addShieldLabelType:(int)type;	// 0x33fe76a1
- (void)addStyleAttributes:(id)attributes;	// 0x33f5b6e5
// declared property getter: - (unsigned long long)businessID;	// 0x33f5bf69
// declared property getter: - (unsigned)centerlineCount;	// 0x33feab89
// declared property getter: - (unsigned)centerlineStart;	// 0x33feab99
// declared property getter: - (id)characteristics;	// 0x33feab49
- (void)clearExtrusionHeights;	// 0x33fe7c09
- (void)clearLabelOffsets;	// 0x33fe748d
- (void)clearShieldLabelOffsets;	// 0x33fe7585
- (void)clearShieldLabelTypes;	// 0x33fe768d
- (void)clearStyleAttributes;	// 0x33fe7eed
- (void)copyTo:(id)to;	// 0x33fe92d5
- (void)dealloc;	// 0x33f5cb11
- (id)description;	// 0x33fe8151
- (id)dictionaryRepresentation;	// 0x33fe81c1
// declared property getter: - (float)endLaneWidth;	// 0x33feabc9
// declared property getter: - (float)endOffset;	// 0x33feab69
// declared property getter: - (float)endRoadOffset;	// 0x33feabe9
// declared property getter: - (unsigned)entryPointMask;	// 0x33feabf9
- (int)extrusionHeightAtIndex:(unsigned)index;	// 0x33fe7c31
// declared property getter: - (int *)extrusionHeights;	// 0x33fe7bf9
// declared property getter: - (unsigned)extrusionHeightsCount;	// 0x33fe7be5
// declared property getter: - (int)formOfWay;	// 0x33feaae9
// declared property getter: - (BOOL)hasBusinessID;	// 0x33f5bf55
// declared property getter: - (BOOL)hasCenterlineCount;	// 0x33fe7e79
// declared property getter: - (BOOL)hasCenterlineStart;	// 0x33fe7ed9
// declared property getter: - (BOOL)hasCharacteristics;	// 0x33fe7ced
// declared property getter: - (BOOL)hasEndLaneWidth;	// 0x33fe801d
// declared property getter: - (BOOL)hasEndOffset;	// 0x33fe7db1
// declared property getter: - (BOOL)hasEndRoadOffset;	// 0x33fe80dd
// declared property getter: - (BOOL)hasEntryPointMask;	// 0x33fe813d
// declared property getter: - (BOOL)hasFormOfWay;	// 0x33fe79a5
// declared property getter: - (BOOL)hasMinzoomRank;	// 0x33f5bf81
// declared property getter: - (BOOL)hasOBSOLETECenterlines;	// 0x33fe7e15
// declared property getter: - (BOOL)hasOBSOLETEShieldLabelPositions;	// 0x33fe7b0d
// declared property getter: - (BOOL)hasOBSOLETEVertexLabelPositions;	// 0x33fe7af5
// declared property getter: - (BOOL)hasPlaceType;	// 0x33fe7885
// declared property getter: - (BOOL)hasPointLabelPosition;	// 0x33fe7add
// declared property getter: - (BOOL)hasPolyIsConvex;	// 0x33fe78e1
// declared property getter: - (BOOL)hasRoadClass;	// 0x33fe7945
// declared property getter: - (BOOL)hasSectionCount;	// 0x33fe7ac9
// declared property getter: - (BOOL)hasSectionStart;	// 0x33fe7a69
// declared property getter: - (BOOL)hasSpeedLimit;	// 0x33fe7bd1
// declared property getter: - (BOOL)hasStartLaneWidth;	// 0x33fe7fbd
// declared property getter: - (BOOL)hasStartOffset;	// 0x33fe7d4d
// declared property getter: - (BOOL)hasStartRoadOffset;	// 0x33fe8079
// declared property getter: - (BOOL)hasStyleGroup;	// 0x33fe7b6d
// declared property getter: - (BOOL)hasTravelDirection;	// 0x33fe7a05
// declared property getter: - (BOOL)hasType;	// 0x33f5bfa9
// declared property getter: - (BOOL)hasUID;	// 0x33fe77c9
- (unsigned)hash;	// 0x33fea2e1
- (BOOL)isEqual:(id)equal;	// 0x33fe9b99
- (int)labelOffsetAtIndex:(unsigned)index;	// 0x33fe74b5
// declared property getter: - (int *)labelOffsets;	// 0x33f5bec5
// declared property getter: - (unsigned)labelOffsetsCount;	// 0x33f5b9f1
// declared property getter: - (float)minzoomRank;	// 0x33f5bf99
// declared property getter: - (id)oBSOLETECenterlines;	// 0x33feab79
// declared property getter: - (id)oBSOLETEShieldLabelPositions;	// 0x33feab29
// declared property getter: - (id)oBSOLETEVertexLabelPositions;	// 0x33feab19
// declared property getter: - (int)placeType;	// 0x33feaab9
// declared property getter: - (id)pointLabelPosition;	// 0x33feab09
// declared property getter: - (BOOL)polyIsConvex;	// 0x33feaac9
- (BOOL)readFrom:(id)from;	// 0x33fe8b0d
// declared property getter: - (int)roadClass;	// 0x33feaad9
// declared property getter: - (int)sectionCount;	// 0x33f5c269
// declared property getter: - (int)sectionStart;	// 0x33f5c279
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x33fe77dd
// declared property setter: - (void)setCenterlineCount:(unsigned)count;	// 0x33fe7e2d
// declared property setter: - (void)setCenterlineStart:(unsigned)start;	// 0x33fe7e8d
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x33f5cc31
// declared property setter: - (void)setEndLaneWidth:(float)width;	// 0x33fe7fd1
// declared property setter: - (void)setEndOffset:(float)offset;	// 0x33fe7d65
// declared property setter: - (void)setEndRoadOffset:(float)offset;	// 0x33fe8091
// declared property setter: - (void)setEntryPointMask:(unsigned)mask;	// 0x33fe80f1
- (void)setExtrusionHeights:(int *)heights count:(unsigned)count;	// 0x33fe7cd5
// declared property setter: - (void)setFormOfWay:(int)way;	// 0x33fe7959
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x33fe7811
// declared property setter: - (void)setHasCenterlineCount:(BOOL)count;	// 0x33fe7e55
// declared property setter: - (void)setHasCenterlineStart:(BOOL)start;	// 0x33fe7eb5
// declared property setter: - (void)setHasEndLaneWidth:(BOOL)width;	// 0x33fe7ff9
// declared property setter: - (void)setHasEndOffset:(BOOL)offset;	// 0x33fe7d8d
// declared property setter: - (void)setHasEndRoadOffset:(BOOL)offset;	// 0x33fe80b9
// declared property setter: - (void)setHasEntryPointMask:(BOOL)mask;	// 0x33fe8119
// declared property setter: - (void)setHasFormOfWay:(BOOL)way;	// 0x33fe7981
// declared property setter: - (void)setHasMinzoomRank:(BOOL)rank;	// 0x33fe7ded
// declared property setter: - (void)setHasPlaceType:(BOOL)type;	// 0x33fe7861
// declared property setter: - (void)setHasPolyIsConvex:(BOOL)convex;	// 0x33fe78c1
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x33fe7921
// declared property setter: - (void)setHasSectionCount:(BOOL)count;	// 0x33fe7aa5
// declared property setter: - (void)setHasSectionStart:(BOOL)start;	// 0x33fe7a45
// declared property setter: - (void)setHasSpeedLimit:(BOOL)limit;	// 0x33fe7bad
// declared property setter: - (void)setHasStartLaneWidth:(BOOL)width;	// 0x33fe7fa1
// declared property setter: - (void)setHasStartOffset:(BOOL)offset;	// 0x33fe7d2d
// declared property setter: - (void)setHasStartRoadOffset:(BOOL)offset;	// 0x33fe8059
// declared property setter: - (void)setHasStyleGroup:(BOOL)group;	// 0x33fe7b4d
// declared property setter: - (void)setHasTravelDirection:(BOOL)direction;	// 0x33fe79e5
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x33fe7f59
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x33fe77a5
- (void)setLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x33fe7559
// declared property setter: - (void)setMinzoomRank:(float)rank;	// 0x33fe7dc5
// declared property setter: - (void)setOBSOLETECenterlines:(id)centerlines;	// 0x33f5cc41
// declared property setter: - (void)setOBSOLETEShieldLabelPositions:(id)positions;	// 0x33f5cc21
// declared property setter: - (void)setOBSOLETEVertexLabelPositions:(id)positions;	// 0x33f5cc11
// declared property setter: - (void)setPlaceType:(int)type;	// 0x33fe7839
// declared property setter: - (void)setPointLabelPosition:(id)position;	// 0x33f5cc01
// declared property setter: - (void)setPolyIsConvex:(BOOL)convex;	// 0x33fe7899
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x33fe78f9
// declared property setter: - (void)setSectionCount:(int)count;	// 0x33fe7a7d
// declared property setter: - (void)setSectionStart:(int)start;	// 0x33fe7a1d
- (void)setShieldLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x33fe7651
- (void)setShieldLabelTypes:(int *)types count:(unsigned)count;	// 0x33fe7759
// declared property setter: - (void)setSpeedLimit:(int)limit;	// 0x33fe7b85
// declared property setter: - (void)setStartLaneWidth:(float)width;	// 0x33fe7f79
// declared property setter: - (void)setStartOffset:(float)offset;	// 0x33fe7d05
// declared property setter: - (void)setStartRoadOffset:(float)offset;	// 0x33fe8031
// declared property setter: - (void)setStyleAttributes:(id)attributes;	// 0x33f5cc51
// declared property setter: - (void)setStyleGroup:(unsigned)group;	// 0x33fe7b25
// declared property setter: - (void)setTravelDirection:(int)direction;	// 0x33fe79bd
// declared property setter: - (void)setType:(int)type;	// 0x33fe7f31
// declared property setter: - (void)setUID:(long long)uid;	// 0x33fe7771
- (int)shieldLabelOffsetAtIndex:(unsigned)index;	// 0x33fe75ad
// declared property getter: - (int *)shieldLabelOffsets;	// 0x33fe7575
// declared property getter: - (unsigned)shieldLabelOffsetsCount;	// 0x33f5ba09
- (int)shieldLabelTypeAtIndex:(unsigned)index;	// 0x33fe76b5
// declared property getter: - (int *)shieldLabelTypes;	// 0x33fe767d
// declared property getter: - (unsigned)shieldLabelTypesCount;	// 0x33fe7669
// declared property getter: - (int)speedLimit;	// 0x33feab39
// declared property getter: - (float)startLaneWidth;	// 0x33feabb9
// declared property getter: - (float)startOffset;	// 0x33feab59
// declared property getter: - (float)startRoadOffset;	// 0x33feabd9
// declared property getter: - (id)styleAttributes;	// 0x33f5c1d9
- (id)styleAttributesAtIndex:(unsigned)index;	// 0x33fe7f11
- (unsigned)styleAttributesCount;	// 0x33f5c161
// declared property getter: - (unsigned)styleGroup;	// 0x33f5bf29
// declared property getter: - (int)travelDirection;	// 0x33feaaf9
// declared property getter: - (int)type;	// 0x33feaba9
// declared property getter: - (long long)uID;	// 0x33f5bf39
- (void)writeTo:(id)to;	// 0x33fe8b19
@end

