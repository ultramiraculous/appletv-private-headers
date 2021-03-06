/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class UIBezierPath, NSString;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (IvarDescription)
- (id)__ivarDescriptionForClass:(Class)aClass;	// 0x2f591379
- (id)__methodDescriptionForClass:(Class)aClass;	// 0x2f591eb9
- (id)_ivarDescription;	// 0x2f591dd9
- (id)_methodDescription;	// 0x2f592675
- (id)_shortMethodDescription;	// 0x2f592755
@end

@interface NSObject (UINibLoadingActionEstablishing)
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x2f6b8b01
@end

@interface NSObject (UINibLoadingAdditions)
- (void)awakeFromNib;	// 0x2f559c25
@end

@interface NSObject (UIAccessibility)
@property(assign, nonatomic) CGPoint accessibilityActivationPoint;	// G=0x2f4af4b1; S=0x2f6dc905; @dynamic
@property(retain) id accessibilityContainer;	// G=0x2f4af1ed; S=0x2f4aed19; converted property
@property(assign, nonatomic) BOOL accessibilityElementsHidden;	// G=0x2f4eb3f5; S=0x2f4b8149; @dynamic
@property(assign, nonatomic) CGRect accessibilityFrame;	// G=0x2f6dc85d; S=0x2f4b55e9; @dynamic
@property(copy, nonatomic) NSString *accessibilityHint;	// G=0x2f4aee99; S=0x2f4b563d; @dynamic
@property(retain) id accessibilityIdentifier;	// G=0x2f4af1cd; S=0x2f4af0ad; converted property
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x2f4aece9; S=0x2f4af0c1; @dynamic
@property(retain, nonatomic) NSString *accessibilityLanguage;	// G=0x2f4eb215; S=0x2f575e55; @dynamic
@property(copy, nonatomic) UIBezierPath *accessibilityPath;	// G=0x2f6dc8a9; S=0x2f6dc8f1; 
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// G=0x2f4af301; S=0x2f4b55a9; @dynamic
@property(copy, nonatomic) NSString *accessibilityValue;	// G=0x2f4aeea9; S=0x2f4b5591; @dynamic
@property(assign, nonatomic) BOOL accessibilityViewIsModal;	// G=0x2f6dc8b9; S=0x2f51ed91; @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// G=0x2f4af2d9; S=0x2f4b5371; @dynamic
@property(assign, nonatomic) BOOL shouldGroupAccessibilityChildren;	// G=0x2f4af329; S=0x2f570751; @dynamic
// declared property getter: - (CGPoint)accessibilityActivationPoint;	// 0x2f4af4b1
// converted property getter: - (id)accessibilityContainer;	// 0x2f4af1ed
// declared property getter: - (BOOL)accessibilityElementsHidden;	// 0x2f4eb3f5
// declared property getter: - (CGRect)accessibilityFrame;	// 0x2f6dc85d
// declared property getter: - (id)accessibilityHint;	// 0x2f4aee99
// converted property getter: - (id)accessibilityIdentifier;	// 0x2f4af1cd
// declared property getter: - (id)accessibilityLabel;	// 0x2f4aece9
// declared property getter: - (id)accessibilityLanguage;	// 0x2f4eb215
// declared property getter: - (id)accessibilityPath;	// 0x2f6dc8a9
// declared property getter: - (unsigned long long)accessibilityTraits;	// 0x2f4af301
// declared property getter: - (id)accessibilityValue;	// 0x2f4aeea9
// declared property getter: - (BOOL)accessibilityViewIsModal;	// 0x2f6dc8b9
// declared property getter: - (BOOL)isAccessibilityElement;	// 0x2f4af2d9
// declared property setter: - (void)setAccessibilityActivationPoint:(CGPoint)point;	// 0x2f6dc905
// converted property setter: - (void)setAccessibilityContainer:(id)container;	// 0x2f4aed19
// declared property setter: - (void)setAccessibilityElementsHidden:(BOOL)hidden;	// 0x2f4b8149
// declared property setter: - (void)setAccessibilityFrame:(CGRect)frame;	// 0x2f4b55e9
// declared property setter: - (void)setAccessibilityHint:(id)hint;	// 0x2f4b563d
// converted property setter: - (void)setAccessibilityIdentifier:(id)identifier;	// 0x2f4af0ad
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x2f4af0c1
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x2f575e55
// declared property setter: - (void)setAccessibilityPath:(id)path;	// 0x2f6dc8f1
// declared property setter: - (void)setAccessibilityTraits:(unsigned long long)traits;	// 0x2f4b55a9
// declared property setter: - (void)setAccessibilityValue:(id)value;	// 0x2f4b5591
// declared property setter: - (void)setAccessibilityViewIsModal:(BOOL)modal;	// 0x2f51ed91
// declared property setter: - (void)setIsAccessibilityElement:(BOOL)element;	// 0x2f4b5371
// declared property setter: - (void)setShouldGroupAccessibilityChildren:(BOOL)groupAccessibilityChildren;	// 0x2f570751
// declared property getter: - (BOOL)shouldGroupAccessibilityChildren;	// 0x2f4af329
- (id)storedAccessibilityActivationPoint;	// 0x2f6dc8e1
- (id)storedAccessibilityElementsHidden;	// 0x2f4af435
- (id)storedAccessibilityFrame;	// 0x2f4af1dd
- (id)storedAccessibilityTraits;	// 0x2f4aeeb9
- (id)storedAccessibilityViewIsModal;	// 0x2f4dd5a1
- (id)storedIsAccessibilityElement;	// 0x2f4aeec9
- (id)storedShouldGroupAccessibilityChildren;	// 0x2f4af351
@end

@interface NSObject (UIAccessibilityFocus)
- (void)accessibilityElementDidBecomeFocused;	// 0x2f6dc945
- (void)accessibilityElementDidLoseFocus;	// 0x2f6dc949
- (BOOL)accessibilityElementIsFocused;	// 0x2f6dc94d
@end

@interface NSObject (UIAccessibilityAction)
- (BOOL)accessibilityActivate;	// 0x2f6dc965
- (void)accessibilityDecrement;	// 0x2f6dc955
- (void)accessibilityIncrement;	// 0x2f6dc951
- (BOOL)accessibilityPerformEscape;	// 0x2f6dc95d
- (BOOL)accessibilityPerformMagicTap;	// 0x2f6dc961
- (BOOL)accessibilityScroll:(int)scroll;	// 0x2f6dc959
@end

@interface NSObject (UIAccessibilityContainer)
- (id)accessibilityElementAtIndex:(int)index;	// 0x2f6dc96d
- (int)accessibilityElementCount;	// 0x2f6dc969
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x2f6dc971
@end

@interface NSObject (UIAccessibilityPrivate)
+ (int)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)identifier;	// 0x2f6dc97d
+ (BOOL)__accessibilityGuidedAccessStateEnabled;	// 0x2f6dc979
+ (void)__accessibilityRequestGuidedAccessSession:(BOOL)session completion:(id)completion;	// 0x2f6dc981
- (void)_accessibilityFinalize;	// 0x2f40b62d
- (void)accessibilitySetIdentification:(id)identification;	// 0x2f42365d
@end

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
- (unsigned long long)defaultAccessibilityTraits;	// 0x2f6dc985
- (BOOL)isAccessibilityElementByDefault;	// 0x2f6dc999
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x2f6dc99d
@end

@interface NSObject (UIAppearanceAdditions)
+ (void)_installAppearanceSwizzleForSetter:(id)setter;	// 0x2f53f3e5
@end

@interface NSObject (XPCObjectsCompatibilityMode)
- (id)disconnect;	// 0x2f89f36d
- (id)proxyWithNewTarget:(id)newTarget label:(id)label errorHandler:(id)handler;	// 0x2f89f369
- (id)proxyWithNewTarget:(id)newTarget queue:(id)queue errorHandler:(id)handler;	// 0x2f89f365
- (id)proxyWithRemoteProtocol:(id)remoteProtocol;	// 0x2f89f3b5
- (void)setRemoteProtocol:(id)protocol;	// 0x2f89f3b9
@end

@interface NSObject (NSLayoutConstraintCallsThis)
- (id)className;	// 0x2f8dc8a9
@end

