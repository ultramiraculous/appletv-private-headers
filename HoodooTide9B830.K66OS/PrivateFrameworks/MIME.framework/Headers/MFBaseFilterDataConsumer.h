/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
	NSMutableArray *_consumers;	// 4 = 0x4
	BOOL _serialAppend;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *consumers;	// G=0x36d542d1; @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// G=0x36d542e1; S=0x36d542f1; @synthesize=_serialAppend
+ (id)filterWithConsumer:(id)consumer;	// 0x36d54651
+ (id)filterWithConsumers:(id)consumers;	// 0x36d54615
- (id)initWithConsumer:(id)consumer;	// 0x36d543b5
- (id)initWithConsumers:(id)consumers;	// 0x36d54375
- (int)appendData:(id)data;	// 0x36d54421
// declared property getter: - (id)consumers;	// 0x36d542d1
- (void)dealloc;	// 0x36d54741
- (void)done;	// 0x36d5478d
// declared property getter: - (BOOL)isSerialAppend;	// 0x36d542e1
// declared property setter: - (void)setSerialAppend:(BOOL)append;	// 0x36d542f1
@end

