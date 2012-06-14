/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol NSCoding, NSObject;

@interface MSObjectWrapper : NSObject {
@private
	long long _size;	// 4 = 0x4
	long long _uniqueID;	// 12 = 0xc
	id<NSObject, NSCoding> _object;	// 20 = 0x14
	int _errorCount;	// 24 = 0x18
}
@property(assign, nonatomic) int errorCount;	// G=0x30e6bcf1; S=0x30e6bd01; @synthesize=_errorCount
@property(readonly, assign) id<NSCoding> object;	// G=0x30e6bce1; @synthesize=_object
@property(assign, nonatomic) long long size;	// G=0x30e6bc89; S=0x30e6bca1; @synthesize=_size
@property(assign, nonatomic) long long uniqueID;	// G=0x30e6bcb5; S=0x30e6bccd; @synthesize=_uniqueID
+ (int)indexOfObject:(id)object inWrapperArray:(id)wrapperArray;	// 0x30e6ba29
+ (id)objectsFromWrappers:(id)wrappers;	// 0x30e6baa1
+ (id)objectsFromWrappers:(id)wrappers equalToObject:(id)object;	// 0x30e6bb81
+ (id)wrapperWithObject:(id)object size:(long long)size;	// 0x30e6b91d
- (id)initWithObject:(id)object size:(long long)size;	// 0x30e6b965
- (void)dealloc;	// 0x30e6b9dd
// declared property getter: - (int)errorCount;	// 0x30e6bcf1
// declared property getter: - (id)object;	// 0x30e6bce1
// declared property setter: - (void)setErrorCount:(int)count;	// 0x30e6bd01
// declared property setter: - (void)setSize:(long long)size;	// 0x30e6bca1
// declared property setter: - (void)setUniqueID:(long long)anId;	// 0x30e6bccd
// declared property getter: - (long long)size;	// 0x30e6bc89
// declared property getter: - (long long)uniqueID;	// 0x30e6bcb5
@end
