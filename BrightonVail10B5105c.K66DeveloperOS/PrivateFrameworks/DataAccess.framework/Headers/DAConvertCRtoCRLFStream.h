/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSInputStream.h> // Unknown library

@class NSData;

@interface DAConvertCRtoCRLFStream : NSInputStream {
	NSData *_mimeData;	// 4 = 0x4
	NSData *_preflightData;	// 8 = 0x8
	NSData *_postflightData;	// 12 = 0xc
	unsigned _totalLength;	// 16 = 0x10
	unsigned _readOffset;	// 20 = 0x14
	BOOL _lastByteCopiedWasCR;	// 24 = 0x18
	BOOL _openEventSent;	// 25 = 0x19
	unsigned _streamStatus;	// 28 = 0x1c
	BOOL _intendToStream;	// 32 = 0x20
	id _delegate;	// 36 = 0x24
	CFRunLoopSourceRef _rls;	// 40 = 0x28
	/*function-pointer*/ void *_clientCallback;	// 44 = 0x2c
	XXStruct_4pnlqD _clientContext;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x35e448d9; S=0x35e448e9; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x35e448f9; converted property
- (id)initWithData:(id)data;	// 0x35e44ea1
- (id)initWithMIMEData:(id)mimedata preflightData:(id)data postflightData:(id)data3 intendToStream:(BOOL)stream;	// 0x35e44db5
- (void)_scheduleCallback;	// 0x35e44689
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x35e446a1
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_4pnlqD *)context;	// 0x35e447ad
- (void)_streamEventTrigger;	// 0x35e444b9
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x35e44795
- (void)close;	// 0x35e448a9
- (void)dealloc;	// 0x35e44ec5
// converted property getter: - (id)delegate;	// 0x35e448d9
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x35e44db1
- (BOOL)hasBytesAvailable;	// 0x35e44d89
- (void)open;	// 0x35e4487d
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x35e4490d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x35e44849
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x35e44815
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35e448e9
- (id)streamError;	// 0x35e44909
// converted property getter: - (unsigned)streamStatus;	// 0x35e448f9
@end

