/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVTextConfiguration, NSArray;

__attribute__((visibility("hidden")))
@interface ATVHeaderConfiguration : XXUnknownSuperclass {
	NSArray *_allowedLayouts;	// 4 = 0x4
	int _defaultTitleAlignment;	// 8 = 0x8
	ATVTextConfiguration *_titleConfiguration;	// 12 = 0xc
	ATVTextConfiguration *_subtitleConfiguration;	// 16 = 0x10
	ATVTextConfiguration *_descriptionConfiguration;	// 20 = 0x14
	XXStruct_40SSZC _size;	// 24 = 0x18
}
@property(retain, nonatomic) NSArray *allowedLayouts;	// G=0x59951; S=0x59961; @synthesize=_allowedLayouts
@property(assign, nonatomic) int defaultTitleAlignment;	// G=0x599b5; S=0x599c5; @synthesize=_defaultTitleAlignment
@property(readonly, assign, nonatomic) ATVTextConfiguration *descriptionConfiguration;	// G=0x599f5; @synthesize=_descriptionConfiguration
@property(assign, nonatomic) XXStruct_40SSZC size;	// G=0x59989; S=0x599a1; @synthesize=_size
@property(readonly, assign, nonatomic) ATVTextConfiguration *subtitleConfiguration;	// G=0x599e5; @synthesize=_subtitleConfiguration
@property(readonly, assign, nonatomic) ATVTextConfiguration *titleConfiguration;	// G=0x599d5; @synthesize=_titleConfiguration
- (id)init;	// 0x598ad
- (void).cxx_destruct;	// 0x59a05
// declared property getter: - (id)allowedLayouts;	// 0x59951
// declared property getter: - (int)defaultTitleAlignment;	// 0x599b5
// declared property getter: - (id)descriptionConfiguration;	// 0x599f5
// declared property setter: - (void)setAllowedLayouts:(id)layouts;	// 0x59961
// declared property setter: - (void)setDefaultTitleAlignment:(int)alignment;	// 0x599c5
// declared property setter: - (void)setSize:(XXStruct_40SSZC)size;	// 0x599a1
// declared property getter: - (XXStruct_40SSZC)size;	// 0x59989
// declared property getter: - (id)subtitleConfiguration;	// 0x599e5
// declared property getter: - (id)titleConfiguration;	// 0x599d5
@end

