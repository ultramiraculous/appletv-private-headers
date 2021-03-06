/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString, NSDictionary, AVMetadataItemInternal, NSLocale, NSDate, NSData, NSNumber;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign) NSString *commonKey;	// G=0x3264e015; 
@property(readonly, assign) NSData *dataValue;	// G=0x3264c775; 
@property(readonly, assign) NSDate *dateValue;	// G=0x3264c69d; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x3264e165; 
@property(readonly, assign) NSDictionary *extraAttributes;	// G=0x3264e23d; 
@property(readonly, assign) id<NSCopying, NSObject> key;	// G=0x3264dfd5; 
@property(readonly, assign) NSString *keySpace;	// G=0x3264e055; 
@property(readonly, assign) NSLocale *locale;	// G=0x3264e095; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x3264c565; 
@property(readonly, assign) NSString *stringValue;	// G=0x3264c4a5; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x3264e0d5; 
@property(readonly, assign) id<NSCopying, NSObject> value;	// G=0x3264e1dd; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x3264dcbd
+ (id)metadataItemsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x3264c8e1
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x3264cbf1
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x3264c7f5
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x3264ce8d
- (id)init;	// 0x3264cf41
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x3264c17d
- (id)_figMetadataDictionary;	// 0x3264d9ed
- (id)_figMetadataFormat;	// 0x3264dbc9
- (id)_figMetadataProperties;	// 0x3264dabd
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x3264d08d
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x3264d031
- (id)_keyAsString;	// 0x3264c3a1
- (void)_makePropertiesReady;	// 0x3264c069
- (void)_makeValueReady;	// 0x3264bfc9
- (void)_updateCommonKey;	// 0x3264c121
- (void)cancelLoading;	// 0x3264e28d
// declared property getter: - (id)commonKey;	// 0x3264e015
- (id)copyWithZone:(NSZone *)zone;	// 0x3264d1fd
// declared property getter: - (id)dataValue;	// 0x3264c775
// declared property getter: - (id)dateValue;	// 0x3264c69d
- (void)dealloc;	// 0x3264d0c1
- (id)description;	// 0x3264d3e5
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3264e165
// declared property getter: - (id)extraAttributes;	// 0x3264e23d
- (void)finalize;	// 0x3264d1a1
- (unsigned)hash;	// 0x3264d871
- (CGImageRef)imageValue;	// 0x3264c7f1
- (BOOL)isEqual:(id)equal;	// 0x3264d5c1
// declared property getter: - (id)key;	// 0x3264dfd5
// declared property getter: - (id)keySpace;	// 0x3264e055
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3264e281
// declared property getter: - (id)locale;	// 0x3264e095
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3264d225
// declared property getter: - (id)numberValue;	// 0x3264c565
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3264e27d
// declared property getter: - (id)stringValue;	// 0x3264c4a5
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3264e0d5
// declared property getter: - (id)value;	// 0x3264e1dd
@end

