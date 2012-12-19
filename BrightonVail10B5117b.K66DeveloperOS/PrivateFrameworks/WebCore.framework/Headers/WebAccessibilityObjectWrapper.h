/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebAccessibilityObjectWrapper : NSObject {
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x3606d751
- (void)_accessibilityActivate;	// 0x360f2da1
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x3607db79
- (WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;	// 0x360f16b5
- (WebAccessibilityObjectWrapper *)_accessibilityListAncestor;	// 0x360f1671
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x360f29e5
- (id)_accessibilityParentForSubview:(id)subview;	// 0x360f2dd9
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x360f2a31
- (WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;	// 0x360f1711
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x3607d47d
- (id)_accessibilityWebDocumentView;	// 0x360f2925
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x360f3349
- (unsigned long long)_axAdjustableTrait;	// 0x360f1069
- (unsigned long long)_axButtonTrait;	// 0x360f1049
- (unsigned long long)_axContainedByLandmarkTrait;	// 0x360f1009
- (unsigned long long)_axContainedByListTrait;	// 0x360f0ff9
- (unsigned long long)_axContainedByTableTrait;	// 0x360f1001
- (unsigned long long)_axHasTextCursorTrait;	// 0x360f1029
- (unsigned long long)_axHeaderTrait;	// 0x360f0ff1
- (unsigned long long)_axImageTrait;	// 0x360f1039
- (unsigned long long)_axLinkTrait;	// 0x360f0fe1
- (unsigned long long)_axMenuItemTrait;	// 0x360f1071
- (unsigned long long)_axNotEnabledTrait;	// 0x360f1081
- (unsigned long long)_axPopupButtonTrait;	// 0x360f1059
- (unsigned long long)_axRadioButtonTrait;	// 0x360f1089
- (unsigned long long)_axSecureTextFieldTrait;	// 0x360f1019
- (unsigned long long)_axSelectedTrait;	// 0x360f1079
- (unsigned long long)_axStaticTextTrait;	// 0x360f1061
- (unsigned long long)_axTabButtonTrait;	// 0x360f1041
- (unsigned long long)_axTextEntryTrait;	// 0x360f1021
- (unsigned long long)_axTextOperationsAvailableTrait;	// 0x360f1031
- (unsigned long long)_axToggleTrait;	// 0x360f1051
- (unsigned long long)_axVisitedTrait;	// 0x360f0fe9
- (unsigned long long)_axWebContentTrait;	// 0x360f1011
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x360f25b9
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x360f4c65
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x360f48b5
- (BOOL)_prepareAccessibilityCall;	// 0x3607cd3d
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x360f5841
- (BOOL)accessibilityARIAIsBusy;	// 0x360f6b6d
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x360f6c59
- (id)accessibilityARIALiveRegionStatus;	// 0x360f6ba9
- (id)accessibilityARIARelevantStatus;	// 0x360f6c01
- (CGPoint)accessibilityActivationPoint;	// 0x360f27a5
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x360f1091
- (NSRange)accessibilityColumnRange;	// 0x360f1cd9
- (id)accessibilityContainer;	// 0x36080e29
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x360f3161
- (void)accessibilityDecrement;	// 0x360f330d
- (id)accessibilityElementAtIndex:(int)index;	// 0x3607fd9d
- (int)accessibilityElementCount;	// 0x3607dbcd
- (void)accessibilityElementDidBecomeFocused;	// 0x360f2e75
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x360f1af5
- (CGRect)accessibilityElementRect;	// 0x360f2711
- (id)accessibilityFlowToElements;	// 0x360f2ab9
- (id)accessibilityFocusedUIElement;	// 0x360f28dd
- (CGRect)accessibilityFrame;	// 0x360f284d
- (id)accessibilityHeaderElements;	// 0x360f1811
- (id)accessibilityHint;	// 0x360f22b9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x360f1159
- (id)accessibilityIdentifier;	// 0x360f6a7d
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x360f314d
- (void)accessibilityIncrement;	// 0x360f32d1
- (id)accessibilityInvalidStatus;	// 0x360f6c95
- (BOOL)accessibilityIsComboBox;	// 0x360f2279
- (id)accessibilityLabel;	// 0x360800b1
- (id)accessibilityLanguage;	// 0x360f14f1
- (id)accessibilityLinkedElement;	// 0x360f2c61
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x360f2ee5
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x360f3175
- (AccessibilityObject *)accessibilityObject;	// 0x36080f65
- (WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)textMarker;	// 0x360f522d
- (id)accessibilityPlaceholderValue;	// 0x360f1d35
- (WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x360f1155
- (void)accessibilityPostedNotification:(int)notification;	// 0x36078f99
- (BOOL)accessibilityRequired;	// 0x360f2a7d
- (NSRange)accessibilityRowRange;	// 0x360f1b51
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x360f6ced
- (id)accessibilitySpeechHint;	// 0x360f6add
- (id)accessibilityTitleElement;	// 0x360f17c9
- (unsigned long long)accessibilityTraits;	// 0x3607cf9d
- (id)accessibilityURL;	// 0x360f243d
- (id)accessibilityValue;	// 0x360f1d89
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x360f37b1
- (id)attachmentView;	// 0x36080fd5
- (id)attributedStringForRange:(NSRange)range;	// 0x360f5a5d
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x36081021
- (void)dealloc;	// 0x3608c1e1
- (void)detach;	// 0x36087719
- (BOOL)determineIsAccessibilityElement;	// 0x3607cdc9
- (NSRange)elementTextRange;	// 0x360f5179
- (id)elementsForRange:(NSRange)range;	// 0x360f5a81
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x360f659d
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x360f1301
- (BOOL)isAccessibilityElement;	// 0x3607cced
- (BOOL)isAttachment;	// 0x3607dc45
- (id)lineEndMarkerForMarker:(id)marker;	// 0x360f5ebd
- (id)lineStartMarkerForMarker:(id)marker;	// 0x360f6079
- (id)nextMarkerForMarker:(id)marker;	// 0x360f6235
- (int)positionForTextMarker:(id)textMarker;	// 0x360f4cd9
- (void)postChildrenChangedNotification;	// 0x360f2e6d
- (void)postFocusChangeNotification;	// 0x360f2e59
- (void)postInvalidStatusChangedNotification;	// 0x360f2e71
- (void)postLayoutChangeNotification;	// 0x360f2e61
- (void)postLiveRegionChangeNotification;	// 0x360f2e65
- (void)postLoadCompleteNotification;	// 0x360f2e69
- (void)postSelectedTextChangeNotification;	// 0x360f2e5d
- (id)previousMarkerForMarker:(id)marker;	// 0x360f63e9
- (id)selectedTextMarker;	// 0x360f5c55
- (id)selectionRangeString;	// 0x360f5c25
- (id)stringForRange:(NSRange)range;	// 0x360f5a39
- (id)stringForTextMarkers:(id)textMarkers;	// 0x360f33cd
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x36080931
- (AccessibilityTableCell *)tableCellParent;	// 0x360f1751
- (AccessibilityTable *)tableParent;	// 0x360f178d
- (id)textMarkerForPoint:(CGPoint)point;	// 0x360f6915
- (id)textMarkerForPosition:(int)position;	// 0x360f55d9
- (id)textMarkerRange;	// 0x360f4ee9
- (id)textMarkerRangeForSelection;	// 0x360f536d
@end
