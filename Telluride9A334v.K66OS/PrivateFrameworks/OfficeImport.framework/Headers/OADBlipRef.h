/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, OADBlip, NSString;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying> {
@private
	int mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x35576379; S=0x35634495; converted property
@property(assign) long index;	// G=0x355a7a6d; S=0x3577dd91; converted property
@property(retain) id name;	// G=0x356763ad; S=0x3577dead; converted property
+ (int)blipTypeForExtension:(id)extension;	// 0x35675fc9
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x3577e069
- (id)init;	// 0x3567ac29
- (id)initWithIndex:(long)index name:(id)name;	// 0x355a3691
- (void)addEffect:(id)effect;	// 0x355a7f3d
// converted property getter: - (id)blip;	// 0x35576379
- (id)copyWithZone:(NSZone *)zone;	// 0x356ca325
- (void)dealloc;	// 0x3556def9
- (id)effectAtIndex:(unsigned)index;	// 0x356ca6a1
- (unsigned)effectCount;	// 0x356ca681
- (id)effects;	// 0x3577ddcd
- (unsigned)hash;	// 0x3577e1bd
// converted property getter: - (long)index;	// 0x355a7a6d
- (BOOL)isEqual:(id)equal;	// 0x3577e0f5
- (BOOL)isNull;	// 0x3577dda1
// converted property getter: - (id)name;	// 0x356763ad
- (void)removeEffectAtIndex:(unsigned)index;	// 0x3577def1
// converted property setter: - (void)setBlip:(id)blip;	// 0x35634495
- (void)setFilename:(id)filename data:(id)data;	// 0x3577df15
- (void)setFilenameAndDelayedContext:(id)context context:(id)context2 targetSize:(long)size;	// 0x3577e2d5
// converted property setter: - (void)setIndex:(long)index;	// 0x3577dd91
// converted property setter: - (void)setName:(id)name;	// 0x3577dead
- (void)setPath:(id)path;	// 0x3577e281
@end

