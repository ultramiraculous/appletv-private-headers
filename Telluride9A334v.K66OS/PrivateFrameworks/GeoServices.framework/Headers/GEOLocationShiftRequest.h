/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class GEOPixelPoint;

@interface GEOLocationShiftRequest : PBRequest {
	GEOPixelPoint *_pixel;	// 4 = 0x4
}
@property(retain, nonatomic) GEOPixelPoint *pixel;	// G=0x32c86179; S=0x32c86189; @synthesize=_pixel
- (void)dealloc;	// 0x32c85e35
- (id)description;	// 0x32c85e79
- (id)dictionaryRepresentation;	// 0x32c85ee9
// declared property getter: - (id)pixel;	// 0x32c86179
- (BOOL)readFrom:(id)from;	// 0x32c85f51
- (unsigned)requestTypeCode;	// 0x32c86159
- (Class)responseClass;	// 0x32c8615d
// declared property setter: - (void)setPixel:(id)pixel;	// 0x32c86189
- (void)writeTo:(id)to;	// 0x32c860c5
@end
