/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRApplianceInfo : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
@property(retain) id applianceCategoryDescriptors;	// G=0x32f1ea05; S=0x32f44b45; converted property
@property(retain) id dataSourceType;	// G=0x32f44c91; S=0x32f44cbd; converted property
@property(assign) BOOL hideIfNoCategories;	// G=0x32f44ab9; S=0x32f44af9; converted property
@property(assign) float iconHorizontalOffset;	// G=0x32f42f09; S=0x32f44e21; converted property
@property(assign) float iconKerningFactor;	// G=0x32f42ed1; S=0x32f44dd9; converted property
@property(retain) id iconPath;	// G=0x32f42f71; S=0x32f44e69; converted property
@property(assign) float iconReflectionOffset;	// G=0x32f44d59; S=0x32f44d91; converted property
@property(assign) BOOL isRemoteAppliance;	// G=0x32f44a31; S=0x32f44a6d; converted property
@property(retain) id key;	// G=0x32f1d6fd; S=0x32f44ec1; converted property
@property(retain) id name;	// G=0x32f1db65; S=0x32f44e95; converted property
@property(assign) float preferredOrder;	// G=0x32f1d7e1; S=0x32f44c49; converted property
@property(assign) BOOL primaryAppliance;	// G=0x32f1d6c1; S=0x32f44eed; converted property
@property(retain) id principalClassName;	// G=0x32f1e409; S=0x32f44b99; converted property
@property(retain) id requiredRemoteMediaTypes;	// G=0x32f44bc5; S=0x32f44bf1; converted property
@property(retain) id supportedMediaTypes;	// G=0x32f1ed49; S=0x32f44c1d; converted property
+ (id)infoForApplianceBundle:(id)applianceBundle;	// 0x32f197d5
- (id)init;	// 0x32f44f39
- (id)initWithDictionary:(id)dictionary;	// 0x32f19e2d
// converted property getter: - (id)applianceCategoryDescriptors;	// 0x32f1ea05
- (BOOL)appliesToMediaHost:(id)mediaHost;	// 0x32f44ce9
// converted property getter: - (id)dataSourceType;	// 0x32f44c91
- (void)dealloc;	// 0x32f21145
// converted property getter: - (BOOL)hideIfNoCategories;	// 0x32f44ab9
- (id)icon;	// 0x32f42f41
// converted property getter: - (float)iconHorizontalOffset;	// 0x32f42f09
// converted property getter: - (float)iconKerningFactor;	// 0x32f42ed1
// converted property getter: - (id)iconPath;	// 0x32f42f71
// converted property getter: - (float)iconReflectionOffset;	// 0x32f44d59
// converted property getter: - (BOOL)isRemoteAppliance;	// 0x32f44a31
// converted property getter: - (id)key;	// 0x32f1d6fd
// converted property getter: - (id)name;	// 0x32f1db65
// converted property getter: - (float)preferredOrder;	// 0x32f1d7e1
// converted property getter: - (BOOL)primaryAppliance;	// 0x32f1d6c1
// converted property getter: - (id)principalClassName;	// 0x32f1e409
// converted property getter: - (id)requiredRemoteMediaTypes;	// 0x32f44bc5
// converted property setter: - (void)setApplianceCategoryDescriptors:(id)descriptors;	// 0x32f44b45
// converted property setter: - (void)setDataSourceType:(id)type;	// 0x32f44cbd
// converted property setter: - (void)setHideIfNoCategories:(BOOL)categories;	// 0x32f44af9
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x32f44e21
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x32f44dd9
// converted property setter: - (void)setIconPath:(id)path;	// 0x32f44e69
// converted property setter: - (void)setIconReflectionOffset:(float)offset;	// 0x32f44d91
// converted property setter: - (void)setIsRemoteAppliance:(BOOL)appliance;	// 0x32f44a6d
// converted property setter: - (void)setKey:(id)key;	// 0x32f44ec1
// converted property setter: - (void)setName:(id)name;	// 0x32f44e95
// converted property setter: - (void)setPreferredOrder:(float)order;	// 0x32f44c49
// converted property setter: - (void)setPrimaryAppliance:(BOOL)appliance;	// 0x32f44eed
// converted property setter: - (void)setPrincipalClassName:(id)name;	// 0x32f44b99
// converted property setter: - (void)setRequiredRemoteMediaTypes:(id)types;	// 0x32f44bf1
// converted property setter: - (void)setSupportedMediaTypes:(id)types;	// 0x32f44c1d
// converted property getter: - (id)supportedMediaTypes;	// 0x32f1ed49
@end

