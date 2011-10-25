/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityObjectWrapper : NSObject {
@private
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x3195ba0d
- (void)_accessibilityActivate;	// 0x31b58211
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x31b292b1
- (id)_accessibilityLandmarkAncestor;	// 0x31b59589
- (id)_accessibilityListAncestor;	// 0x31b54449
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x31b58591
- (id)_accessibilityParentForSubview:(id)subview;	// 0x31b5819d
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x31b58545
- (id)_accessibilityTableAncestor;	// 0x31b5448d
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x31b28f9d
- (id)_accessibilityWebDocumentView;	// 0x31b585dd
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x31b57c31
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x31b58871
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x31b5676d
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x31b567ed
- (BOOL)_prepareAccessibilityCall;	// 0x319771f9
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x31b559d1
- (BOOL)accessibilityARIAIsBusy;	// 0x31b547b9
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x31b546e5
- (id)accessibilityARIALiveRegionStatus;	// 0x31b5476d
- (id)accessibilityARIARelevantStatus;	// 0x31b54721
- (CGPoint)accessibilityActivationPoint;	// 0x31b58751
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x31b59ae5
- (NSRange)accessibilityColumnRange;	// 0x31b5911d
- (id)accessibilityContainer;	// 0x31b2bf05
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x31b57e6d
- (void)accessibilityDecrement;	// 0x31b57cc1
- (id)accessibilityElementAtIndex:(int)index;	// 0x31b2ab55
- (int)accessibilityElementCount;	// 0x31b2930d
- (void)accessibilityElementDidBecomeFocused;	// 0x31b58165
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x31b591ed
- (CGRect)accessibilityElementRect;	// 0x31b587e9
- (id)accessibilityFlowToElements;	// 0x31b5837d
- (id)accessibilityFocusedUIElement;	// 0x31b58691
- (CGRect)accessibilityFrame;	// 0x31b586d1
- (id)accessibilityHeaderElements;	// 0x31b5923d
- (id)accessibilityHint;	// 0x31b58ac9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x31b59915
- (id)accessibilityIdentifier;	// 0x31b54889
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x31b57e81
- (void)accessibilityIncrement;	// 0x31b57cf9
- (BOOL)accessibilityIsComboBox;	// 0x31b58bf9
- (id)accessibilityLabel;	// 0x31b2ae91
- (id)accessibilityLanguage;	// 0x31b595f5
- (id)accessibilityLinkedElement;	// 0x31b58249
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x31b57e95
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x31b57d31
- (AccessibilityObject *)accessibilityObject;	// 0x31b2c039
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x31b560bd
- (id)accessibilityPlaceholderValue;	// 0x31b590d5
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x31b543a5
- (void)accessibilityPostedNotification:(int)notification;	// 0x31976ed1
- (BOOL)accessibilityRequired;	// 0x31b58509
- (NSRange)accessibilityRowRange;	// 0x31b59185
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x31b54439
- (id)accessibilitySpeechHint;	// 0x31b547f5
- (id)accessibilityTitleElement;	// 0x31b59549
- (unsigned long long)accessibilityTraits;	// 0x31976fed
- (id)accessibilityURL;	// 0x31b5899d
- (id)accessibilityValue;	// 0x31b58c39
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x31b56bd5
- (id)attachmentView;	// 0x31b2c055
- (id)attributedStringForRange:(NSRange)range;	// 0x31b55989
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x31b2c09d
- (void)dealloc;	// 0x31b2d265
- (void)detach;	// 0x31b100d9
- (BOOL)determineIsAccessibilityElement;	// 0x31b28dd1
- (NSRange)elementTextRange;	// 0x31b56201
- (id)elementsForRange:(NSRange)range;	// 0x31b557f9
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x31b54a41
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x31b59721
- (BOOL)isAccessibilityElement;	// 0x31b28d81
- (BOOL)isAttachment;	// 0x31b29389
- (id)lineEndMarkerForMarker:(id)marker;	// 0x31b5535d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x31b5517d
- (id)nextMarkerForMarker:(id)marker;	// 0x31b54fa1
- (int)positionForTextMarker:(id)textMarker;	// 0x31b5656d
- (void)postChildrenChangedNotification;	// 0x31b54435
- (void)postFocusChangeNotification;	// 0x31b54421
- (void)postLayoutChangeNotification;	// 0x31b54429
- (void)postLiveRegionChangeNotification;	// 0x31b5442d
- (void)postLoadCompleteNotification;	// 0x31b54431
- (void)postSelectedTextChangeNotification;	// 0x31b54425
- (id)previousMarkerForMarker:(id)marker;	// 0x31b54dc5
- (id)selectedTextMarker;	// 0x31b5553d
- (id)selectionRangeString;	// 0x31b557c9
- (id)stringForRange:(NSRange)range;	// 0x31b559ad
- (id)stringForTextMarkers:(id)textMarkers;	// 0x31b5789d
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x31b2ba39
- (AccessibilityTableCell *)tableCellParent;	// 0x31b543a9
- (AccessibilityTable *)tableParent;	// 0x31b543e5
- (id)textMarkerForPoint:(CGPoint)point;	// 0x31b548dd
- (id)textMarkerForPosition:(int)position;	// 0x31b55c15
- (id)textMarkerRange;	// 0x31b562c5
- (id)textMarkerRangeForSelection;	// 0x31b55e39
@end

