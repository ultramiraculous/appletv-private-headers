/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSMutableDictionary;

@interface ICCameraFile : ICCameraItem {
@private
	void *_fileProperties;	// 8 = 0x8
}
@property(assign) BOOL fetchingMetadata;	// G=0x30c07741; S=0x30c07765; 
@property(assign) BOOL fetchingThumbnail;	// G=0x30c076f9; S=0x30c0771d; 
@property(assign) long long fileSize;	// G=0x30c07591; S=0x30c075b1; 
@property(assign) BOOL hasMetadata;	// G=0x30c076b1; S=0x30c076d5; converted property
@property(readonly, assign) BOOL hasOverriddenOrientation;	// G=0x30c07645; 
@property(assign) BOOL hasThumbnail;	// G=0x30c07669; S=0x30c0768d; converted property
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x30c077c9; S=0x30c077e9; 
@property(assign) unsigned orientation;	// G=0x30c07601; S=0x30c07621; 
@property(assign, getter=isRaw) BOOL raw;	// G=0x30c07bad; S=0x30c075dd; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x30c07ed1
- (void)dealloc;	// 0x30c08e45
- (id)description;	// 0x30c08cad
// declared property getter: - (BOOL)fetchingMetadata;	// 0x30c07741
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x30c076f9
// declared property getter: - (long long)fileSize;	// 0x30c07591
- (void)finalize;	// 0x30c08df1
- (void)flushMetadataCache;	// 0x30c07b3d
- (void)flushThumbnailCache;	// 0x30c07acd
- (void)handleCommandCompletionNotification:(id)notification;	// 0x30c07fa5
// converted property getter: - (BOOL)hasMetadata;	// 0x30c076b1
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x30c07645
// converted property getter: - (BOOL)hasThumbnail;	// 0x30c07669
// declared property getter: - (BOOL)isRaw;	// 0x30c07bad
- (id)metadata;	// 0x30c077a9
// declared property getter: - (id)metadata_hidden;	// 0x30c077c9
// declared property getter: - (unsigned)orientation;	// 0x30c07601
- (void)overrideOrientation:(unsigned)orientation;	// 0x30c08b61
- (BOOL)raw;	// 0x30c07bad
- (void)requestMetadata;	// 0x30c0796d
- (void)requestThumbnail;	// 0x30c0780d
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x30c07765
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x30c0771d
// declared property setter: - (void)setFileSize:(long long)size;	// 0x30c075b1
// converted property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x30c076d5
// converted property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x30c0768d
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x30c077e9
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x30c07621
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x30c075dd
- (CGImageRef)thumbnail;	// 0x30c07789
@end

