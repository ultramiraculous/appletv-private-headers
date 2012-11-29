/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBRequest.h> // Unknown library


@interface GEOPlaceSearchFeedbackRequest : PBRequest {
	XXStruct_t9EeIA _sessionGUID;	// 4 = 0x4
	long long _businessID;	// 20 = 0x14
	double _timestamp;	// 28 = 0x1c
	int _feedbackType;	// 36 = 0x24
	int _numberOfResults;	// 40 = 0x28
	int _positionInResults;	// 44 = 0x2c
	int _sequenceNumber;	// 48 = 0x30
	struct {
		unsigned arrivalStepID : 1;
		unsigned departureStepID : 1;
		unsigned distance : 1;
		unsigned drivingSide : 1;
		unsigned expectedTime : 1;
		unsigned routeType : 1;
		unsigned transportType : 1;
	} _has;	// 52 = 0x34
}
@property(assign, nonatomic) long long businessID;	// G=0x379ac635; S=0x379ab45d; @synthesize=_businessID
@property(assign, nonatomic) int feedbackType;	// G=0x379ac64d; S=0x379ab4c5; @synthesize=_feedbackType
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x379ab4b1; S=0x379ab491; 
@property(assign, nonatomic) BOOL hasFeedbackType;	// G=0x379ab50d; S=0x379ab4ed; 
@property(assign, nonatomic) BOOL hasNumberOfResults;	// G=0x379ab569; S=0x379ab549; 
@property(assign, nonatomic) BOOL hasPositionInResults;	// G=0x379ab5c5; S=0x379ab5a5; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x379ab621; S=0x379ab601; 
@property(assign, nonatomic) BOOL hasSessionGUID;	// G=0x379ab449; S=0x379ab42d; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x379ab3d9; S=0x379ab3b9; 
@property(assign, nonatomic) int numberOfResults;	// G=0x379ac65d; S=0x379ab521; @synthesize=_numberOfResults
@property(assign, nonatomic) int positionInResults;	// G=0x379ac66d; S=0x379ab57d; @synthesize=_positionInResults
@property(assign, nonatomic) int sequenceNumber;	// G=0x379ac67d; S=0x379ab5d9; @synthesize=_sequenceNumber
@property(assign, nonatomic) XXStruct_t9EeIA sessionGUID;	// G=0x379ac611; S=0x379ab3ed; @synthesize=_sessionGUID
@property(assign, nonatomic) double timestamp;	// G=0x379ac5f9; S=0x379ab385; @synthesize=_timestamp
// declared property getter: - (long long)businessID;	// 0x379ac635
- (void)copyTo:(id)to;	// 0x379ac051
- (void)dealloc;	// 0x379ab359
- (id)description;	// 0x379ab635
- (id)dictionaryRepresentation;	// 0x379ab6a5
// declared property getter: - (int)feedbackType;	// 0x379ac64d
// declared property getter: - (BOOL)hasBusinessID;	// 0x379ab4b1
// declared property getter: - (BOOL)hasFeedbackType;	// 0x379ab50d
// declared property getter: - (BOOL)hasNumberOfResults;	// 0x379ab569
// declared property getter: - (BOOL)hasPositionInResults;	// 0x379ab5c5
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x379ab621
// declared property getter: - (BOOL)hasSessionGUID;	// 0x379ab449
// declared property getter: - (BOOL)hasTimestamp;	// 0x379ab3d9
- (unsigned)hash;	// 0x379ac431
- (BOOL)isEqual:(id)equal;	// 0x379ac239
// declared property getter: - (int)numberOfResults;	// 0x379ac65d
// declared property getter: - (int)positionInResults;	// 0x379ac66d
- (BOOL)readFrom:(id)from;	// 0x379abe49
- (unsigned)requestTypeCode;	// 0x379ac02d
- (Class)responseClass;	// 0x379ac035
// declared property getter: - (int)sequenceNumber;	// 0x379ac67d
// declared property getter: - (XXStruct_t9EeIA)sessionGUID;	// 0x379ac611
// declared property setter: - (void)setBusinessID:(long long)anId;	// 0x379ab45d
// declared property setter: - (void)setFeedbackType:(int)type;	// 0x379ab4c5
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x379ab491
// declared property setter: - (void)setHasFeedbackType:(BOOL)type;	// 0x379ab4ed
// declared property setter: - (void)setHasNumberOfResults:(BOOL)results;	// 0x379ab549
// declared property setter: - (void)setHasPositionInResults:(BOOL)results;	// 0x379ab5a5
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x379ab601
// declared property setter: - (void)setHasSessionGUID:(BOOL)guid;	// 0x379ab42d
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x379ab3b9
// declared property setter: - (void)setNumberOfResults:(int)results;	// 0x379ab521
// declared property setter: - (void)setPositionInResults:(int)results;	// 0x379ab57d
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x379ab5d9
// declared property setter: - (void)setSessionGUID:(XXStruct_t9EeIA)guid;	// 0x379ab3ed
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x379ab385
// declared property getter: - (double)timestamp;	// 0x379ac5f9
- (void)writeTo:(id)to;	// 0x379abe55
@end
