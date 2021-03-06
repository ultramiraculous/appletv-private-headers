/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSSet, NSDictionary, NSString;

@interface BRApplianceInfo : NSObject {
@private
	NSDictionary *_info;	// 4 = 0x4
}
@property(readonly, assign) NSArray *applianceCategoryDescriptors;	// G=0x32988545; 
@property(readonly, assign) BOOL hideIfNoCategories;	// G=0x3298856d; 
@property(copy, nonatomic) NSDictionary *info;	// G=0x329885b5; S=0x329885c5; @synthesize=_info
@property(readonly, assign) NSString *key;	// G=0x32988415; 
@property(readonly, assign) NSString *localizedStringsFileName;	// G=0x329884f5; 
@property(readonly, assign) NSString *name;	// G=0x3298843d; 
@property(readonly, assign) float preferredOrder;	// G=0x32988465; 
@property(readonly, assign) BOOL primaryAppliance;	// G=0x329883d5; 
@property(readonly, assign) NSString *principalClassName;	// G=0x3298851d; 
@property(readonly, assign) NSSet *requiredRemoteMediaTypes;	// G=0x329884cd; 
@property(readonly, assign) NSSet *supportedMediaTypes;	// G=0x329884a5; 
+ (id)infoForApplianceDescription:(id)applianceDescription;	// 0x329881e9
- (id)_initWithMutableDictionary:(id)mutableDictionary;	// 0x3298808d
// declared property getter: - (id)applianceCategoryDescriptors;	// 0x32988545
- (void)dealloc;	// 0x329880d9
- (unsigned)hash;	// 0x3298819d
// declared property getter: - (BOOL)hideIfNoCategories;	// 0x3298856d
// declared property getter: - (id)info;	// 0x329885b5
- (BOOL)isEqual:(id)equal;	// 0x32988125
// declared property getter: - (id)key;	// 0x32988415
// declared property getter: - (id)localizedStringsFileName;	// 0x329884f5
// declared property getter: - (id)name;	// 0x3298843d
// declared property getter: - (float)preferredOrder;	// 0x32988465
// declared property getter: - (BOOL)primaryAppliance;	// 0x329883d5
// declared property getter: - (id)principalClassName;	// 0x3298851d
// declared property getter: - (id)requiredRemoteMediaTypes;	// 0x329884cd
// declared property setter: - (void)setInfo:(id)info;	// 0x329885c5
// declared property getter: - (id)supportedMediaTypes;	// 0x329884a5
@end

