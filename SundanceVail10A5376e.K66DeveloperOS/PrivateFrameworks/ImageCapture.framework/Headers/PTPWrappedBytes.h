/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPWrappedBytes : NSObject {
	unsigned long long _offset;	// 4 = 0x4
	unsigned long long _capacity;	// 12 = 0xc
	BOOL _allocatedBytes;	// 20 = 0x14
	char *_bytes;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	BOOL _useByteBuffer;	// 32 = 0x20
	unsigned long long _excessDataLength;	// 36 = 0x24
	double _progressNotificationTime;	// 44 = 0x2c
	/*function-pointer*/ void *_progressNotifier;	// 52 = 0x34
	void *_progressNotifierContext;	// 56 = 0x38
	int _lastNotifiedProgress;	// 60 = 0x3c
}
@property(readonly, assign) unsigned long long excessDataLength;	// G=0x30d986b9; converted property
@property(assign) unsigned long long length64;	// G=0x30d980dd; S=0x30d980f5; converted property
@property(readonly, assign) unsigned long long offset;	// G=0x30d9817d; converted property
+ (id)wrappedBytesWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x30d97d85
+ (id)wrappedBytesWithCapacity64:(unsigned long long)capacity64;	// 0x30d97d39
- (id)init;	// 0x30d97e6d
- (id)initWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x30d97e81
- (id)initWithCapacity64:(unsigned long long)capacity64;	// 0x30d97dd9
- (id)initWithFileDescriptor:(int)fileDescriptor capacity64:(unsigned long long)a64;	// 0x30d97f09
- (unsigned long long)appendBytes:(const void *)bytes length64:(unsigned long long)a64;	// 0x30d98429
- (unsigned long long)appendData:(id)data;	// 0x30d98195
- (const void *)bytes;	// 0x30d98145
- (unsigned long long)capacity64;	// 0x30d98049
- (void)dealloc;	// 0x30d97fd5
- (id)description;	// 0x30d98749
// converted property getter: - (unsigned long long)excessDataLength;	// 0x30d986b9
// converted property getter: - (unsigned long long)length64;	// 0x30d980dd
- (void *)mutableBytes;	// 0x30d98155
// converted property getter: - (unsigned long long)offset;	// 0x30d9817d
- (double)percentFull;	// 0x30d986d1
- (unsigned long long)setCapacity64:(unsigned long long)a64;	// 0x30d98061
// converted property setter: - (void)setLength64:(unsigned long long)a64;	// 0x30d980f5
- (void)setProgressNotifierCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x30d97f8d
- (BOOL)wasInitWithFD;	// 0x30d98165
@end

