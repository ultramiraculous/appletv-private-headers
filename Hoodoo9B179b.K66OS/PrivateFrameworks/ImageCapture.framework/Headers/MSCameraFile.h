/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"
#import "ImageCapture-Structs.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
@private
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x358c30cd; S=0x358c30e1; 
@property(copy) NSString *exifCreationDateTime;	// G=0x358c2fb5; S=0x358c559d; 
@property(copy) NSString *exifModificationDateTime;	// G=0x358c2fc9; S=0x358c5559; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x358c2f49; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x358c2f61; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x358c2f35; 
@property(readonly, assign) long long fsSize;	// G=0x358c2f79; 
@property(assign) int imgHeight;	// G=0x358c30a5; S=0x358c30b9; 
@property(assign) int imgWidth;	// G=0x358c307d; S=0x358c3091; 
@property(assign) int thmHeight;	// G=0x358c3055; S=0x358c3069; 
@property(assign) int thmOffset;	// G=0x358c3005; S=0x358c3019; 
@property(assign) int thmSize;	// G=0x358c2fdd; S=0x358c2ff1; 
@property(assign) int thmWidth;	// G=0x358c302d; S=0x358c3041; 
@property(assign) unsigned type;	// G=0x358c2f8d; S=0x358c2fa1; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x358c30f5; S=0x358c3109; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x358c3fb5
// declared property getter: - (int)bitsPerPixel;	// 0x358c30cd
- (void)dealloc;	// 0x358c5645
// declared property getter: - (id)exifCreationDateTime;	// 0x358c2fb5
// declared property getter: - (id)exifModificationDateTime;	// 0x358c2fc9
- (void)finalize;	// 0x358c55e1
// declared property getter: - (timespec)fsCreationTime;	// 0x358c2f49
// declared property getter: - (timespec)fsModificationTime;	// 0x358c2f61
// declared property getter: - (unsigned long long)fsSN;	// 0x358c2f35
// declared property getter: - (long long)fsSize;	// 0x358c2f79
// declared property getter: - (int)imgHeight;	// 0x358c30a5
// declared property getter: - (int)imgWidth;	// 0x358c307d
- (id)metadataDict;	// 0x358c4bd9
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x358c30e1
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x358c559d
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x358c5559
// declared property setter: - (void)setImgHeight:(int)height;	// 0x358c30b9
// declared property setter: - (void)setImgWidth:(int)width;	// 0x358c3091
// declared property setter: - (void)setThmHeight:(int)height;	// 0x358c3069
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x358c3019
// declared property setter: - (void)setThmSize:(int)size;	// 0x358c2ff1
// declared property setter: - (void)setThmWidth:(int)width;	// 0x358c3041
// declared property setter: - (void)setType:(unsigned)type;	// 0x358c2fa1
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x358c3109
// declared property getter: - (int)thmHeight;	// 0x358c3055
// declared property getter: - (int)thmOffset;	// 0x358c3005
// declared property getter: - (int)thmSize;	// 0x358c2fdd
// declared property getter: - (int)thmWidth;	// 0x358c302d
- (id)thumbData;	// 0x358c4d25
// declared property getter: - (unsigned)type;	// 0x358c2f8d
- (void)updateBasicMetadata;	// 0x358c403d
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x358c30f5
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x358c53f1
@end
