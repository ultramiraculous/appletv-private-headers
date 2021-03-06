/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject {
	NSString *accessibilityConfigurationHint;	// 4 = 0x4
	NSString *accessibilityConfigurationLabel;	// 8 = 0x8
	NSNumber *accessibilityConfigurationTraits;	// 12 = 0xc
	NSNumber *isAccessibilityConfigurationElement;	// 16 = 0x10
	NSObject *object;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *accessibilityConfigurationHint;	// G=0x31eca205; S=0x31eca215; @synthesize
@property(retain, nonatomic) NSString *accessibilityConfigurationLabel;	// G=0x31eca225; S=0x31eca235; @synthesize
@property(retain, nonatomic) NSNumber *accessibilityConfigurationTraits;	// G=0x31eca245; S=0x31eca255; @synthesize
@property(retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;	// G=0x31eca265; S=0x31eca275; @synthesize
@property(retain, nonatomic) NSObject *object;	// G=0x31eca285; S=0x31eca295; @synthesize
- (id)initWithCoder:(id)coder;	// 0x31ec9e75
- (id)initWithObject:(id)object label:(id)label hint:(id)hint traits:(id)traits andIsAccessibilityElement:(id)element;	// 0x31ec9da5
// declared property getter: - (id)accessibilityConfigurationHint;	// 0x31eca205
// declared property getter: - (id)accessibilityConfigurationLabel;	// 0x31eca225
// declared property getter: - (id)accessibilityConfigurationTraits;	// 0x31eca245
- (void)applyConfiguration;	// 0x31eca115
- (void)dealloc;	// 0x31eca075
- (void)encodeWithCoder:(id)coder;	// 0x31ec9f89
// declared property getter: - (id)isAccessibilityConfigurationElement;	// 0x31eca265
// declared property getter: - (id)object;	// 0x31eca285
// declared property setter: - (void)setAccessibilityConfigurationHint:(id)hint;	// 0x31eca215
// declared property setter: - (void)setAccessibilityConfigurationLabel:(id)label;	// 0x31eca235
// declared property setter: - (void)setAccessibilityConfigurationTraits:(id)traits;	// 0x31eca255
// declared property setter: - (void)setIsAccessibilityConfigurationElement:(id)element;	// 0x31eca275
// declared property setter: - (void)setObject:(id)object;	// 0x31eca295
@end

