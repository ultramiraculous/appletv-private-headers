/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject {
	long long _fileSize;	// 4 = 0x4
	BOOL _hasThumbnail;	// 12 = 0xc
	BOOL _hasMetadata;	// 13 = 0xd
	BOOL _raw;	// 14 = 0xe
	int _fetchingThumbnailLock;	// 16 = 0x10
	BOOL _fetchingThumbnail;	// 20 = 0x14
	int _fetchingMetadataLock;	// 24 = 0x18
	BOOL _fetchingMetadata;	// 28 = 0x1c
	CGImageRef _originalThumbnail;	// 32 = 0x20
	CGImageRef _thumbnail;	// 36 = 0x24
	NSMutableDictionary *_metadata;	// 40 = 0x28
	NSMutableDictionary *_metadata_hidden;	// 44 = 0x2c
	unsigned _orientation;	// 48 = 0x30
	BOOL _hasOverriddenOrientation;	// 52 = 0x34
}
@property(assign) BOOL fetchingMetadata;	// G=0x325f8d79; S=0x325f8d45; 
@property(assign) BOOL fetchingThumbnail;	// G=0x325f8de1; S=0x325f8dad; 
@property(assign) long long fileSize;	// G=0x325f8c99; S=0x325f8c65; @synthesize=_fileSize
@property(assign) BOOL hasMetadata;	// G=0x325f8569; S=0x325f8579; @synthesize=_hasMetadata
@property(assign) BOOL hasOverriddenOrientation;	// G=0x325f8509; S=0x325f8519; @synthesize=_hasOverriddenOrientation
@property(assign) BOOL hasThumbnail;	// G=0x325f8589; S=0x325f8599; @synthesize=_hasThumbnail
@property(retain) NSMutableDictionary *metadata;	// G=0x325f8cf1; S=0x325f8ccd; @synthesize=_metadata
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x325f8d2d; S=0x325f8d09; @synthesize=_metadata_hidden
@property(assign) unsigned orientation;	// G=0x325f8529; S=0x325f8539; @synthesize=_orientation
@property(assign) CGImageRef originalThumbnail;	// G=0x325f84f9; S=0x325f8e15; @dynamic
@property(assign, getter=isRaw) BOOL raw;	// G=0x325f8549; S=0x325f8559; @synthesize=_raw
@property(assign) CGImageRef thumbnail;	// G=0x325f84e9; S=0x325f8e41; @dynamic
- (void)dealloc;	// 0x325f8be9
// declared property getter: - (BOOL)fetchingMetadata;	// 0x325f8d79
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x325f8de1
// declared property getter: - (long long)fileSize;	// 0x325f8c99
- (void)finalize;	// 0x325f8e6d
// declared property getter: - (BOOL)hasMetadata;	// 0x325f8569
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x325f8509
// declared property getter: - (BOOL)hasThumbnail;	// 0x325f8589
// declared property getter: - (BOOL)isRaw;	// 0x325f8549
// declared property getter: - (id)metadata;	// 0x325f8cf1
// declared property getter: - (id)metadata_hidden;	// 0x325f8d2d
// declared property getter: - (unsigned)orientation;	// 0x325f8529
// declared property getter: - (CGImageRef)originalThumbnail;	// 0x325f84f9
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x325f8d45
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x325f8dad
// declared property setter: - (void)setFileSize:(long long)size;	// 0x325f8c65
// declared property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x325f8579
// declared property setter: - (void)setHasOverriddenOrientation:(BOOL)orientation;	// 0x325f8519
// declared property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x325f8599
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x325f8ccd
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x325f8d09
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x325f8539
// declared property setter: - (void)setOriginalThumbnail:(CGImageRef)thumbnail;	// 0x325f8e15
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x325f8559
// declared property setter: - (void)setThumbnail:(CGImageRef)thumbnail;	// 0x325f8e41
// declared property getter: - (CGImageRef)thumbnail;	// 0x325f84e9
@end
