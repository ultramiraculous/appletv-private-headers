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
- (id)initForDeserializerStream:(id)deserializerStream;	// 0x320fff0d
- (void)dealloc;	// 0x320fff49
- (id)deserializeData:(id)data;	// 0x32100065
- (id)deserializeList:(id)list;	// 0x32100261
- (id)deserializeListItemIn:(id)anIn at:(unsigned)at length:(unsigned)length;	// 0x3210036d
- (id)deserializeNewData;	// 0x32100015
- (id)deserializeNewKeyString;	// 0x3210012d
- (id)deserializeNewList;	// 0x32100211
- (id)deserializeNewObject;	// 0x320fffa5
- (id)deserializeNewPList;	// 0x3210037d
- (id)deserializeNewString;	// 0x321000dd
- (id)deserializePList:(id)list;	// 0x321003cd
- (id)deserializePListKeyIn:(id)anIn;	// 0x32100661
- (id)deserializePListValueIn:(id)anIn key:(id)key length:(unsigned)length;	// 0x32100671
- (id)deserializeString:(id)string;	// 0x3210017d
- (id)deserializerStream;	// 0x320fff95
@end

