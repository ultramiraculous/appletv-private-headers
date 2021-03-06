/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEODownloadMetadata : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_etag;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *etag;	// G=0x33952105; S=0x33952115; @synthesize=_etag
@property(readonly, assign, nonatomic) BOOL hasEtag;	// G=0x33951b95; 
@property(assign, nonatomic) double timestamp;	// G=0x339520d9; S=0x339520f1; @synthesize=_timestamp
- (void)copyTo:(id)to;	// 0x33951f15
- (void)dealloc;	// 0x33951b51
- (id)description;	// 0x33951bad
- (id)dictionaryRepresentation;	// 0x33951c1d
// declared property getter: - (id)etag;	// 0x33952105
// declared property getter: - (BOOL)hasEtag;	// 0x33951b95
- (unsigned)hash;	// 0x33952021
- (BOOL)isEqual:(id)equal;	// 0x33951f89
- (BOOL)readFrom:(id)from;	// 0x33951ea1
// declared property setter: - (void)setEtag:(id)etag;	// 0x33952115
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x339520f1
// declared property getter: - (double)timestamp;	// 0x339520d9
- (void)writeTo:(id)to;	// 0x33951ead
@end

