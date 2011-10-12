/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableData;

@interface PTPStorageInfoDataset : NSObject {
	unsigned short _storageType;	// 4 = 0x4
	unsigned short _filesystemType;	// 6 = 0x6
	unsigned short _accessCapability;	// 8 = 0x8
	unsigned long long _maxCapacity;	// 12 = 0xc
	unsigned long long _freeSpaceInBytes;	// 20 = 0x14
	unsigned _freeSpaceInImages;	// 28 = 0x1c
	NSString *_storageDescription;	// 32 = 0x20
	NSString *_volumeLabel;	// 36 = 0x24
	NSMutableData *_content;	// 40 = 0x28
	BOOL _dirty;	// 44 = 0x2c
	BOOL _readOnlyObject;	// 45 = 0x2d
}
@property(assign) unsigned short accessCapability;	// G=0x32251c7d; S=0x32251c8d; converted property
@property(retain) NSMutableData *content;	// G=0x32251ff1; S=0x32252315; converted property
@property(assign) unsigned short filesystemType;	// G=0x32251c4d; S=0x32251c5d; converted property
@property(assign) unsigned long long freeSpaceInBytes;	// G=0x32251ced; S=0x32251d05; converted property
@property(assign) unsigned long freeSpaceInImages;	// G=0x32251d2d; S=0x32251d3d; converted property
@property(assign) unsigned long long maxCapacity;	// G=0x32251cad; S=0x32251cc5; converted property
@property(retain) NSString *storageDescription;	// G=0x32251d5d; S=0x32251e65; converted property
@property(assign) unsigned short storageType;	// G=0x32251c1d; S=0x32251c2d; converted property
@property(retain) NSString *volumeLabel;	// G=0x32251d6d; S=0x32251e0d; converted property
- (id)init;	// 0x32251d7d
- (id)initWithData:(id)data;	// 0x3225226d
- (id)initWithMutableData:(id)mutableData;	// 0x322521e9
// converted property getter: - (unsigned short)accessCapability;	// 0x32251c7d
// converted property getter: - (id)content;	// 0x32251ff1
- (void)dealloc;	// 0x32252175
- (id)description;	// 0x32251ebd
// converted property getter: - (unsigned short)filesystemType;	// 0x32251c4d
// converted property getter: - (unsigned long long)freeSpaceInBytes;	// 0x32251ced
// converted property getter: - (unsigned long)freeSpaceInImages;	// 0x32251d2d
// converted property getter: - (unsigned long long)maxCapacity;	// 0x32251cad
// converted property setter: - (void)setAccessCapability:(unsigned short)capability;	// 0x32251c8d
// converted property setter: - (void)setContent:(id)content;	// 0x32252315
// converted property setter: - (void)setFilesystemType:(unsigned short)type;	// 0x32251c5d
// converted property setter: - (void)setFreeSpaceInBytes:(unsigned long long)bytes;	// 0x32251d05
// converted property setter: - (void)setFreeSpaceInImages:(unsigned long)images;	// 0x32251d3d
// converted property setter: - (void)setMaxCapacity:(unsigned long long)capacity;	// 0x32251cc5
// converted property setter: - (void)setStorageDescription:(id)description;	// 0x32251e65
// converted property setter: - (void)setStorageType:(unsigned short)type;	// 0x32251c2d
// converted property setter: - (void)setVolumeLabel:(id)label;	// 0x32251e0d
// converted property getter: - (id)storageDescription;	// 0x32251d5d
// converted property getter: - (unsigned short)storageType;	// 0x32251c1d
- (void)updateContent;	// 0x32252019
// converted property getter: - (id)volumeLabel;	// 0x32251d6d
@end

