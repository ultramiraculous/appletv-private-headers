/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject {
	unsigned short _type;	// 4 = 0x4
	int _role;	// 8 = 0x8
	int _connectionStatus;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	BOOL _timedOut;	// 20 = 0x14
	BOOL _responseReceived;	// 21 = 0x15
	PTPOperationResponsePacket *_response;	// 24 = 0x18
	opaque_pthread_t *_callbackThread;	// 28 = 0x1c
	opaque_pthread_mutex_t _callbackThreadMutex;	// 32 = 0x20
	opaque_pthread_cond_t _callbackThreadCondition;	// 76 = 0x4c
	BOOL _callbackThreadConditionSignaled;	// 104 = 0x68
	CFRunLoopRef _callbackThreadRunLoop;	// 108 = 0x6c
	CFRunLoopSourceRef _callbackDummyMachPortRLSrc;	// 112 = 0x70
	unsigned char _headerBuffer[12];	// 116 = 0x74
	BOOL _headerBufferFound;	// 128 = 0x80
	BOOL _delegateNeedsResponse;	// 129 = 0x81
	BOOL _busy;	// 130 = 0x82
	unsigned long _canceledTransactionID;	// 132 = 0x84
	PTPWrappedBytes *_dataForTransaction;	// 136 = 0x88
	unsigned long long _excessReceivedDataSize;	// 140 = 0x8c
	unsigned long _totalBytesFilled;	// 148 = 0x94
}
@property(readonly, assign) CFRunLoopRef callbackThreadRunLoop;	// G=0x343f78ed; converted property
@property(readonly, assign) int connectionStatus;	// G=0x343f7b81; converted property
@property(readonly, assign) unsigned long long excessReceivedDataSize;	// G=0x343f7dd1; converted property
@property(retain) PTPOperationResponsePacket *response;	// G=0x343f7aad; S=0x343f7abd; converted property
@property(assign) BOOL responseReceived;	// G=0x343f7b09; S=0x343f7b19; converted property
@property(readonly, assign) int role;	// G=0x343f7d2d; converted property
@property(assign) BOOL timedOut;	// G=0x343f7d41; S=0x343f7d51; converted property
@property(readonly, assign) unsigned short type;	// G=0x343f7b71; converted property
- (id)init;	// 0x343f76a5
- (void)abortPendingIO;	// 0x343f7dbd
- (void *)callbackThreadFunction;	// 0x343f7779
// converted property getter: - (CFRunLoopRef)callbackThreadRunLoop;	// 0x343f78ed
- (void)cancelTransaction:(id)transaction;	// 0x343f7dc1
- (void)cleanupCallbackThread;	// 0x343f7765
- (BOOL)connected;	// 0x343f7d3d
// converted property getter: - (int)connectionStatus;	// 0x343f7b81
- (void)dealloc;	// 0x343f7739
- (void)deviceReset;	// 0x343f7dcd
- (unsigned short)deviceStatus;	// 0x343f7dc5
- (void)endCallbackThread;	// 0x343f7c6d
// converted property getter: - (unsigned long long)excessReceivedDataSize;	// 0x343f7dd1
- (int)lockCallbackThreadMutex;	// 0x343f78fd
// converted property getter: - (id)response;	// 0x343f7aad
// converted property getter: - (BOOL)responseReceived;	// 0x343f7b09
// converted property getter: - (int)role;	// 0x343f7d2d
- (void)sendData:(id)data;	// 0x343f7db1
- (BOOL)sendEvent:(id)event;	// 0x343f7db9
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x343f7da9
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x343f7dad
- (BOOL)sendResponse:(id)response;	// 0x343f7db5
- (void)setDelegate:(id)delegate;	// 0x343f7af9
// converted property setter: - (void)setResponse:(id)response;	// 0x343f7abd
// converted property setter: - (void)setResponseReceived:(BOOL)received;	// 0x343f7b19
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x343f7d51
- (int)signalCallbackThreadCondition;	// 0x343f79cd
- (BOOL)startCallbackThread;	// 0x343f7b91
- (BOOL)startInitiator;	// 0x343f7d05
- (BOOL)startResponder;	// 0x343f7ced
- (void)stop;	// 0x343f7d1d
// converted property getter: - (BOOL)timedOut;	// 0x343f7d41
// converted property getter: - (unsigned short)type;	// 0x343f7b71
- (int)unlockCallbackThreadMutex;	// 0x343f7965
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)timeout;	// 0x343f79f9
@end

