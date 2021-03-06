/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSNumber, NSDate, AVMetadataItemInternal, NSDictionary, NSData, NSLocale, NSString;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy) NSString *commonKey;	// G=0x322f03e1; 
@property(readonly, assign) NSData *dataValue;	// G=0x322efc75; 
@property(readonly, assign) NSDate *dateValue;	// G=0x322f13c5; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x322ef6b5; 
@property(readonly, copy) NSDictionary *extraAttributes;	// G=0x322f0599; 
@property(readonly, copy) id<NSCopying, NSObject> key;	// G=0x322f03a1; 
@property(readonly, copy) NSString *keySpace;	// G=0x322f0421; 
@property(readonly, copy) NSLocale *locale;	// G=0x322f0461; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x322f11bd; 
@property(readonly, assign) NSString *stringValue;	// G=0x322efba9; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x322f04a1; 
@property(readonly, copy) id<NSCopying, NSObject> value;	// G=0x322f0539; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x322f2559
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x322f06a1
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x322f05d9
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x322f091d
- (id)init;	// 0x322f2465
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x322f0ddd
- (id)_figMetadataDictionary;	// 0x322f01d9
- (id)_figMetadataFormat;	// 0x322f02ad
- (id)_figMetadataProperties;	// 0x322f285d
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x322efcf1
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x322f3015
- (id)_keyAsString;	// 0x322f1095
- (void)_makePropertiesReady;	// 0x322efae9
- (void)_makeValueReady;	// 0x322efa39
- (void)_updateCommonKey;	// 0x322f0d85
- (void)cancelLoading;	// 0x322ef71d
// declared property getter: - (id)commonKey;	// 0x322f03e1
- (id)copyWithZone:(NSZone *)zone;	// 0x322efd25
// declared property getter: - (id)dataValue;	// 0x322efc75
// declared property getter: - (id)dateValue;	// 0x322f13c5
- (void)dealloc;	// 0x322f2f2d
- (id)description;	// 0x322f2d2d
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x322ef6b5
// declared property getter: - (id)extraAttributes;	// 0x322f0599
- (void)finalize;	// 0x322f2ed1
- (unsigned)hash;	// 0x322f296d
- (CGImageRef)imageValue;	// 0x322ef6b1
- (BOOL)isEqual:(id)equal;	// 0x322f2ad5
// declared property getter: - (id)key;	// 0x322f03a1
// declared property getter: - (id)keySpace;	// 0x322f0421
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x322ef715
// declared property getter: - (id)locale;	// 0x322f0461
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x322efd51
// declared property getter: - (id)numberValue;	// 0x322f11bd
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x322ef711
// declared property getter: - (id)stringValue;	// 0x322efba9
// declared property getter: - (XXStruct_pwHToB)time;	// 0x322f04a1
// declared property getter: - (id)value;	// 0x322f0539
@end

