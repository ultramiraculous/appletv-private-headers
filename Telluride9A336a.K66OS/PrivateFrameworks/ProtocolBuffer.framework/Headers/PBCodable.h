/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBCodable : NSObject {
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x3218867d; @dynamic
- (id)init;	// 0x32188579
- (id)initWithData:(id)data;	// 0x321885a5
// declared property getter: - (id)data;	// 0x3218867d
- (id)dictionaryRepresentation;	// 0x32188741
- (BOOL)readFrom:(id)from;	// 0x32188711
- (void)writeTo:(id)to;	// 0x3218872d
@end

