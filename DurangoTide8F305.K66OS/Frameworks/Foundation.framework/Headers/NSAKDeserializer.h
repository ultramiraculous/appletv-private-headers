/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSAKDeserializer : NSObject {
	id ds;	// 4 = 0x4
}
- (id)initForDeserializerStream:(id)deserializerStream;	// 0x32819499
- (void)dealloc;	// 0x3281974d
- (id)deserializeData:(id)data;	// 0x3281a8d5
- (id)deserializeList:(id)list;	// 0x3281a58d
- (id)deserializeListItemIn:(id)anIn at:(unsigned)at length:(unsigned)length;	// 0x32819585
- (id)deserializeNewData;	// 0x32819695
- (id)deserializeNewKeyString;	// 0x328195ed
- (id)deserializeNewList;	// 0x32819599
- (id)deserializeNewObject;	// 0x328196e9
- (id)deserializeNewPList;	// 0x32819531
- (id)deserializeNewString;	// 0x32819641
- (id)deserializePList:(id)list;	// 0x3281a941
- (id)deserializePListKeyIn:(id)anIn;	// 0x3281951d
- (id)deserializePListValueIn:(id)anIn key:(id)key length:(unsigned)length;	// 0x32819509
- (id)deserializeString:(id)string;	// 0x32819ca5
- (id)deserializerStream;	// 0x32819489
@end

