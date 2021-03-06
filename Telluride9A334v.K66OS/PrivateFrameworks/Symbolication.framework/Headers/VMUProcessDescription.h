/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSCalendarDate, NSMutableArray, NSString, NSArray, NSDictionary;

@interface VMUProcessDescription : NSObject {
	unsigned _task;	// 4 = 0x4
	int _pid;	// 8 = 0x8
	CSTypeRef _symbolicator;	// 12 = 0xc
	NSString *_processName;	// 20 = 0x14
	BOOL _processNameNeedsCorrection;	// 24 = 0x18
	NSString *_executablePath;	// 28 = 0x1c
	BOOL _executablePathNeedsCorrection;	// 32 = 0x20
	unsigned long long _executableLoadAddress;	// 36 = 0x24
	int _cpuType;	// 44 = 0x2c
	BOOL _isNative;	// 48 = 0x30
	BOOL _is64Bit;	// 49 = 0x31
	NSDictionary *_lsApplicationInformation;	// 52 = 0x34
	NSMutableArray *_binaryImages;	// 56 = 0x38
	NSArray *_sortedBinaryImages;	// 60 = 0x3c
	NSDictionary *_binaryImageHints;	// 64 = 0x40
	NSArray *_unreadableBinaryImagePaths;	// 68 = 0x44
	BOOL _binaryImagePostProcessingComplete;	// 72 = 0x48
	NSDictionary *_buildVersionDictionary;	// 76 = 0x4c
	NSDictionary *_osVersionDictionary;	// 80 = 0x50
	NSString *_parentProcessName;	// 84 = 0x54
	NSString *_parentExecutablePath;	// 88 = 0x58
	int _ppid;	// 92 = 0x5c
	NSCalendarDate *_date;	// 96 = 0x60
	NSString *_internalError;	// 100 = 0x64
}
@property(readonly, retain) NSMutableArray *binaryImages;	// G=0x35bf9b19; converted property
@property(readonly, assign) int cpuType;	// G=0x35bf7ced; converted property
@property(readonly, retain) NSCalendarDate *date;	// G=0x35bf7cbd; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x35bf7d1d; converted property
@property(readonly, retain) NSString *parentProcessName;	// G=0x35bf7d0d; converted property
@property(readonly, assign) int pid;	// G=0x35bf7cdd; converted property
@property(readonly, retain) NSString *processName;	// G=0x35bf7cfd; converted property
@property(readonly, assign) unsigned task;	// G=0x35bf7ccd; converted property
- (id)initWithPid:(int)pid orTask:(unsigned)task;	// 0x35bf8949
- (id)_binaryImagesDescriptionForRanges:(id)ranges;	// 0x35bf95e1
- (id)_buildInfoDescription;	// 0x35bf8195
- (id)_buildVersionDictionary;	// 0x35bf7d45
- (id)_bundleLock;	// 0x35bfa149
- (id)_cpuTypeDescription;	// 0x35bf8099
- (void)_extractBinaryImageInfoFromSymbolOwner:(CSTypeRef)symbolOwner;	// 0x35bfa175
- (double)_extractDyldInfoFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x35bfaadd
- (id)_extractInfoPlistFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x35bfa9b9
- (id)_osVersionDictionary;	// 0x35bf91e9
- (id)_rangesOfBinaryImages:(id)binaryImages forBacktraces:(id)backtraces;	// 0x35bf9265
- (id)_readDataFromMemory:(id)memory atAddress:(unsigned long long)address size:(unsigned long)size;	// 0x35bf7d6d
- (id)_sanitizeVersion:(id)version;	// 0x35bf7e21
- (id)_systemVersionDescription;	// 0x35bf826d
- (id)binaryImageDictionaryForAddress:(unsigned long long)address;	// 0x35bf7fb9
// converted property getter: - (id)binaryImages;	// 0x35bf9b19
- (id)binaryImagesDescription;	// 0x35bf8181
- (id)binaryImagesDescriptionForBacktraces:(id)backtraces;	// 0x35bf8139
- (id)bundleIdentifier;	// 0x35bf7f1d
// converted property getter: - (int)cpuType;	// 0x35bf7ced
// converted property getter: - (id)date;	// 0x35bf7cbd
- (id)dateAndVersionDescription;	// 0x35bf85e5
- (void)dealloc;	// 0x35bf909d
- (id)description;	// 0x35bf866d
- (id)displayName;	// 0x35bf7e11
// converted property getter: - (id)executablePath;	// 0x35bf7d1d
- (BOOL)isAppleApplication;	// 0x35bf7f4d
- (BOOL)isTranslated;	// 0x35bf7d2d
// converted property getter: - (id)parentProcessName;	// 0x35bf7d0d
// converted property getter: - (int)pid;	// 0x35bf7cdd
- (id)processDescriptionHeader;	// 0x35bf832d
- (id)processIdentifier;	// 0x35bf7de1
// converted property getter: - (id)processName;	// 0x35bf7cfd
- (id)processVersion;	// 0x35bf7e8d
- (id)processVersionDictionary;	// 0x35bf8739
// converted property getter: - (unsigned)task;	// 0x35bf7ccd
@end

