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
@property(assign) id delegate;	// G=0x3079e8f1; S=0x3079e901; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x3079e911; converted property
- (id)initWithData:(id)data;	// 0x3079eeb9
- (id)initWithMIMEData:(id)mimedata preflightData:(id)data postflightData:(id)data3 intendToStream:(BOOL)stream;	// 0x3079edcd
- (void)_scheduleCallback;	// 0x3079e6a1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3079e6b9
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_4pnlqD *)context;	// 0x3079e7c5
- (void)_streamEventTrigger;	// 0x3079e4d1
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3079e7ad
- (void)close;	// 0x3079e8c1
- (void)dealloc;	// 0x3079eedd
// converted property getter: - (id)delegate;	// 0x3079e8f1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x3079edc9
- (BOOL)hasBytesAvailable;	// 0x3079eda1
- (void)open;	// 0x3079e895
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x3079e925
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3079e861
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3079e82d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3079e901
- (id)streamError;	// 0x3079e921
// converted property getter: - (unsigned)streamStatus;	// 0x3079e911
@end
