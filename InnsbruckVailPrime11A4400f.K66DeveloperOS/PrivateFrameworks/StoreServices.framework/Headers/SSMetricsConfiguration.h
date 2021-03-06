/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class NSSet, NSDictionary, NSMutableDictionary;

@interface SSMetricsConfiguration : NSObject {
	NSSet *_blacklistedEvents;	// 4 = 0x4
	SSMetricsConfiguration *_childConfiguration;	// 8 = 0x8
	NSDictionary *_config;	// 12 = 0xc
	NSMutableDictionary *_eventFieldsUnion;	// 16 = 0x10
	NSDictionary *_fields;	// 20 = 0x14
	BOOL _disabled;	// 24 = 0x18
	BOOL _sendDisabled;	// 25 = 0x19
}
@property(retain, nonatomic) SSMetricsConfiguration *childConfiguration;	// G=0x32800629; S=0x328004c9; @synthesize=_childConfiguration
@property(readonly, assign, getter=isDisabled) BOOL disabled;	// G=0x32800029; converted property
@property(readonly, assign, getter=isSendDisabled) BOOL sendDisabled;	// G=0x3280017d; converted property
- (id)initWithGlobalConfiguration:(id)globalConfiguration;	// 0x327ff8a1
- (id)initWithStorePlatformData:(id)storePlatformData;	// 0x327ff981
- (BOOL)_configBooleanForKey:(id)key defaultValue:(BOOL)value;	// 0x328005b5
- (id)blacklistedEventFields;	// 0x327ffdc9
// declared property getter: - (id)childConfiguration;	// 0x32800629
- (id)compoundStringWithElements:(id)elements;	// 0x327fffa9
- (void)dealloc;	// 0x327ffd29
- (id)eventFields;	// 0x327ffe9d
// converted property getter: - (BOOL)isDisabled;	// 0x32800029
- (BOOL)isEventTypeBlacklisted:(id)blacklisted;	// 0x32800065
// converted property getter: - (BOOL)isSendDisabled;	// 0x3280017d
- (id)pingURLs;	// 0x328001b9
- (double)reportingFrequency;	// 0x32800351
- (id)reportingURLString;	// 0x32800451
// declared property setter: - (void)setChildConfiguration:(id)configuration;	// 0x328004c9
- (id)tokenStringWithElements:(id)elements;	// 0x32800535
@end

