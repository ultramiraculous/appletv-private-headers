/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAppearance.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, UIImage;

@interface UIBarItem : NSObject <UIAppearance> {
@private
	BOOL _hasCustomizableInstanceAppearanceModifications;	// 4 = 0x4
	BOOL _shouldArchiveUIAppearanceTags;	// 5 = 0x5
}
@property(assign, nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;	// G=0x302df809; S=0x302df819; @synthesize
@property(assign, nonatomic, setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags;	// G=0x302df829; S=0x302df839; @synthesize
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// @dynamic
@property(retain, nonatomic) UIImage *image;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets imageInsets;	// @dynamic
@property(retain, nonatomic) UIImage *landscapeImagePhone;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets landscapeImagePhoneInsets;	// @dynamic
@property(assign, nonatomic) int tag;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
+ (id)_appearanceProxyViewClasses;	// 0x302df615
+ (id)_appearanceRecorder;	// 0x302df639
+ (id)_appearanceRecorderWhenContainedIn:(Class)anIn;	// 0x302df6f1
+ (id)_appearanceWhenContainedIn:(id)anIn;	// 0x302df675
+ (id)appearance;	// 0x302df619
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x302df695
- (id)initWithCoder:(id)coder;	// 0x302df751
// declared property getter: - (BOOL)_hasCustomizableInstanceAppearanceModifications;	// 0x302df809
// declared property setter: - (void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)modifications;	// 0x302df819
// declared property setter: - (void)_setShouldArchiveUIAppearanceTags:(BOOL)_set;	// 0x302df839
// declared property getter: - (BOOL)_shouldArchiveUIAppearanceTags;	// 0x302df829
- (void)encodeWithCoder:(id)coder;	// 0x302df7b5
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302df801
- (id)titleTextAttributesForState:(unsigned)state;	// 0x302df805
@end
