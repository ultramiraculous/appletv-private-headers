/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFile.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
@private
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x328b1285; S=0x328b1299; 
@property(copy) NSString *exifCreationDateTime;	// G=0x328b10ed; S=0x328b1101; 
@property(copy) NSString *exifModificationDateTime;	// G=0x328b1141; S=0x328b1155; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x328b1081; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x328b1099; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x328b106d; 
@property(readonly, assign) long long fsSize;	// G=0x328b10b1; 
@property(assign) int imgHeight;	// G=0x328b125d; S=0x328b1271; 
@property(assign) int imgWidth;	// G=0x328b1235; S=0x328b1249; 
@property(assign) int thmHeight;	// G=0x328b120d; S=0x328b1221; 
@property(assign) int thmOffset;	// G=0x328b11bd; S=0x328b11d1; 
@property(assign) int thmSize;	// G=0x328b1195; S=0x328b11a9; 
@property(assign) int thmWidth;	// G=0x328b11e5; S=0x328b11f9; 
@property(assign) unsigned type;	// G=0x328b10c5; S=0x328b10d9; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x328b12ad; S=0x328b12c1; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x328b0f21
// declared property getter: - (int)bitsPerPixel;	// 0x328b1285
- (void)dealloc;	// 0x328b0fa5
// declared property getter: - (id)exifCreationDateTime;	// 0x328b10ed
// declared property getter: - (id)exifModificationDateTime;	// 0x328b1141
- (void)finalize;	// 0x328b1009
// declared property getter: - (timespec)fsCreationTime;	// 0x328b1081
// declared property getter: - (timespec)fsModificationTime;	// 0x328b1099
// declared property getter: - (unsigned long long)fsSN;	// 0x328b106d
// declared property getter: - (long long)fsSize;	// 0x328b10b1
// declared property getter: - (int)imgHeight;	// 0x328b125d
// declared property getter: - (int)imgWidth;	// 0x328b1235
- (id)metadataDict;	// 0x328b1fdd
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x328b1299
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x328b1101
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x328b1155
// declared property setter: - (void)setImgHeight:(int)height;	// 0x328b1271
// declared property setter: - (void)setImgWidth:(int)width;	// 0x328b1249
// declared property setter: - (void)setThmHeight:(int)height;	// 0x328b1221
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x328b11d1
// declared property setter: - (void)setThmSize:(int)size;	// 0x328b11a9
// declared property setter: - (void)setThmWidth:(int)width;	// 0x328b11f9
// declared property setter: - (void)setType:(unsigned)type;	// 0x328b10d9
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x328b12c1
// declared property getter: - (int)thmHeight;	// 0x328b120d
// declared property getter: - (int)thmOffset;	// 0x328b11bd
// declared property getter: - (int)thmSize;	// 0x328b1195
// declared property getter: - (int)thmWidth;	// 0x328b11e5
- (id)thumbData;	// 0x328b143d
// declared property getter: - (unsigned)type;	// 0x328b10c5
- (void)updateBasicMetadata;	// 0x328b24f1
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x328b12ad
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x328b12d5
@end

