/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
@private
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isLongForm;	// G=0x305e1bd9; S=0x305e1be9; @synthesize=_isLongForm
@property(retain, nonatomic) NSString *localizedBody;	// G=0x305e1ba1; S=0x305e1bb1; @synthesize=_localizedBody
@property(retain, nonatomic) NSString *localizedTitle;	// G=0x305e1b69; S=0x305e1b79; @synthesize=_localizedTitle
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x305e1985
- (id)initWithCoder:(id)coder;	// 0x305e1a89
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x305e18d5
- (void).cxx_destruct;	// 0x305e1bf9
- (void)encodeWithCoder:(id)coder;	// 0x305e19ed
// declared property getter: - (BOOL)isLongForm;	// 0x305e1bd9
// declared property getter: - (id)localizedBody;	// 0x305e1ba1
// declared property getter: - (id)localizedTitle;	// 0x305e1b69
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x305e1be9
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x305e1bb1
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x305e1b79
@end

