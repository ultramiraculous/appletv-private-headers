/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import <NSObject.h> // Unknown library


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

@interface NSObject (AccessibilityCategory)
+ (id)accessibilityBundles;	// 0x32e9bc11
+ (void)accessibilityInitializeBundle;	// 0x32e9bc0d
@end

@interface NSObject (AXPrivCategory)
+ (id)_accessibilityTextChecker;	// 0x32e9c9e1
- (BOOL)__accessibilityReadAllOnFocus;	// 0x32e9c8f1
- (void)__accessibilityUnregister:(id)unregister;	// 0x32ea3461
- (CGPoint)__accessibilityVisibleScrollArea:(BOOL)area;	// 0x32e9c7fd
- (float)_accessibilityActivationDelay;	// 0x32e9bd01
- (void)_accessibilityAddMispellingsToAttributedString:(id)attributedString;	// 0x32e9cae5
- (void)_accessibilityAddTrait:(unsigned long long)trait;	// 0x32ea231d
- (id)_accessibilityAllCustomRotorItemsAtIndex:(int)index;	// 0x32e9d299
- (id)_accessibilityAllCustomRotorTitles;	// 0x32e9d275
- (float)_accessibilityAllowedGeometryOverlap;	// 0x32e9e319
- (BOOL)_accessibilityAlwaysOrderedFirst;	// 0x32e9e245
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)traits;	// 0x32e9bc85
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;	// 0x32ea30ed
- (id)_accessibilityAncestorIsKindOf:(Class)of;	// 0x32ea308d
- (BOOL)_accessibilityAnimationsInProgress;	// 0x32e9c435
- (void)_accessibilityAnnouncementComplete:(id)complete;	// 0x32e9ef91
- (id)_accessibilityAppSwitcherApps;	// 0x32e9bf39
- (id)_accessibilityApplication;	// 0x32e9fff5
- (id)_accessibilityAttributedValueForRange:(NSRange *)range;	// 0x32e9cbc9
- (id)_accessibilityAutomaticIdentifier;	// 0x32e9bd39
- (BOOL)_accessibilityBackingElementIsValid;	// 0x32e9bd5d
- (id)_accessibilityBaseHitTest:(CGPoint)test withEvent:(id)event;	// 0x32ea2739
- (int)_accessibilityBestCharacterModeForHandwriting;	// 0x32e9c1e5
- (BOOL)_accessibilityBookShowsDualPages;	// 0x32e9bd3d
- (CGRect)_accessibilityBoundsForRange:(NSRange)range;	// 0x32e9bdf1
- (id)_accessibilityBundleIdentifier;	// 0x32e9bc21
- (BOOL)_accessibilityCameraIrisOpen;	// 0x32e9c375
- (BOOL)_accessibilityCanDeleteCharacterWithHandwriting;	// 0x32e9c0c9
- (BOOL)_accessibilityCanDeleteTableViewCell;	// 0x32e9bf49
- (BOOL)_accessibilityCanDismissPopoverController:(id)controller;	// 0x32e9bf51
- (BOOL)_accessibilityCanHandleDirectHandwritingInput;	// 0x32e9c1dd
- (void)_accessibilityChangeToKeyplane:(id)keyplane;	// 0x32e9be55
- (CGRect)_accessibilityClassicModeFrame:(CGRect)frame;	// 0x32e9f40d
- (CGRect)_accessibilityCompareFrameForScrollParent:(id)scrollParent frame:(CGRect)frame;	// 0x32e9e33d
- (BOOL)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;	// 0x32e9bf3d
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;	// 0x32e9d06d
- (id)_accessibilityContainerInDirection:(BOOL)direction originalElement:(id)element;	// 0x32ea02a9
- (id)_accessibilityContainingParentForOrdering;	// 0x32e9e2b1
- (CGRect)_accessibilityContentFrame;	// 0x32e9e249
- (unsigned)_accessibilityContextId;	// 0x32e9bf55
- (CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)viewSpace;	// 0x32e9fbe1
- (void)_accessibilityCut;	// 0x32e9d9ad
- (id)_accessibilityDOMAttributes;	// 0x32e9bc7d
- (id)_accessibilityDataDetectorScheme:(CGPoint)scheme;	// 0x32e9bce5
- (unsigned)_accessibilityDatePickerComponentType;	// 0x32e9bd35
- (id)_accessibilityDateTimePickerValues;	// 0x32e9bd09
- (void)_accessibilityDecreaseSelection:(id)selection;	// 0x32e9bd51
- (void)_accessibilityDelete;	// 0x32e9d945
- (void)_accessibilityDeleteCharacterAtCursor;	// 0x32e9c10d
- (id)_accessibilityDescendantOfType:(Class)type;	// 0x32e9fd1d
- (BOOL)_accessibilityDidDeleteTableViewCell;	// 0x32e9bf4d
- (float)_accessibilityDistanceFromEndOfRoad:(CGPoint)road forAngle:(float)angle;	// 0x32e9bc35
- (BOOL)_accessibilityElementShouldBeInvalid;	// 0x32ea4035
- (id)_accessibilityElementsForSearchParameter:(id)searchParameter;	// 0x32e9bc89
- (void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id *)accumulator usingBlock:(id)block;	// 0x32e9d07d
- (id)_accessibilityFindAnyAXDescendant:(id)descendant byAddingElements:(id)elements;	// 0x32e9f7b9
- (id)_accessibilityFindDescendant:(id)descendant;	// 0x32e9f9f5
- (void)_accessibilityFindSearchResult:(BOOL)result withString:(id)string;	// 0x32e9bcf1
- (id)_accessibilityFindSubviewDescendant:(id)descendant;	// 0x32e9f8b5
- (id)_accessibilityFirstVisibleItem;	// 0x32ea3a49
- (id)_accessibilityFuzzyHitTestElements;	// 0x32ea2735
- (CGRect)_accessibilityGesturePracticeRegion;	// 0x32e9bd0d
- (void)_accessibilityHandleATFocused:(BOOL)focused;	// 0x32ea0339
- (BOOL)_accessibilityHandlePublicScroll:(int)scroll;	// 0x32ea435d
- (BOOL)_accessibilityHasDescendantOfType:(Class)type;	// 0x32e9fda1
- (BOOL)_accessibilityHasOrderedChildren;	// 0x32e9e26d
- (BOOL)_accessibilityHasTextOperations;	// 0x32e9da4d
- (id)_accessibilityHeaderElement;	// 0x32e9bf0d
- (id)_accessibilityHitTest:(CGPoint)test withEvent:(id)event;	// 0x32ea2ea5
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;	// 0x32e9ccfd
- (id)_accessibilityHitTestSupplementaryViews:(id)views point:(CGPoint)point withEvent:(id)event;	// 0x32ea23d9
- (void)_accessibilityIgnoreNextNotification:(unsigned)notification;	// 0x32e9f405
- (void)_accessibilityIncreaseSelection:(id)selection;	// 0x32e9bd69
- (int)_accessibilityIndexForPickerString:(id)pickerString;	// 0x32e9bd55
- (id)_accessibilityInputIdentifierForKeyboard;	// 0x32e9c4f5
- (void)_accessibilityInsertText:(id)text atPosition:(int)position;	// 0x32e9c151
- (BOOL)_accessibilityIsAwayAlertElement;	// 0x32e9c8e9
- (BOOL)_accessibilityIsAwayAlertElementNew;	// 0x32e9c8ed
- (BOOL)_accessibilityIsDescendantOfElement:(id)element;	// 0x32e9fef9
- (BOOL)_accessibilityIsFirstElementForFocus;	// 0x32ea3975
- (BOOL)_accessibilityIsFirstSibling;	// 0x32e9bed5
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)trait;	// 0x32e9bedd
- (BOOL)_accessibilityIsFrameOutOfBounds;	// 0x32e9f125
- (BOOL)_accessibilityIsInAppSwitcher;	// 0x32e9bf31
- (BOOL)_accessibilityIsInTableCell;	// 0x32e9bced
- (BOOL)_accessibilityIsLastSibling;	// 0x32e9bed9
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)trait;	// 0x32e9bee1
- (BOOL)_accessibilityIsMainWindow;	// 0x32ea3979
- (BOOL)_accessibilityIsNotFirstElement;	// 0x32ea38d5
- (BOOL)_accessibilityIsScrollAncestor;	// 0x32ea3b19
- (BOOL)_accessibilityIsScrollable;	// 0x32ea3b1d
- (BOOL)_accessibilityIsTableCell;	// 0x32e9bce9
- (BOOL)_accessibilityIsTitleElement;	// 0x32e9bee5
- (BOOL)_accessibilityIsTouchContainer;	// 0x32ea2359
- (BOOL)_accessibilityIsTourGuideRunning;	// 0x32e9c3d5
- (BOOL)_accessibilityIsUserInteractionEnabled;	// 0x32e9bd6d
- (BOOL)_accessibilityIsVisible;	// 0x32e9cd01
- (void)_accessibilityJumpToTableIndex:(id)tableIndex;	// 0x32e9bcf5
- (id)_accessibilityKeyboardKeyForString:(id)string;	// 0x32e9bf01
- (BOOL)_accessibilityLastHitTestNearBorder;	// 0x32e9bc25
- (id)_accessibilityLaunchableApps;	// 0x32e9bf35
- (id)_accessibilityLineEndMarker:(id)marker;	// 0x32e9be1d
- (int)_accessibilityLineEndPosition;	// 0x32e9bdd1
- (id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)point;	// 0x32e9bde1
- (NSRange)_accessibilityLineRangeForPosition:(unsigned)position;	// 0x32e9be8d
- (id)_accessibilityLineStartMarker:(id)marker;	// 0x32e9be15
- (int)_accessibilityLineStartPosition;	// 0x32e9bdd9
- (void)_accessibilityLoadAccessibilityInformation;	// 0x32e9bda9
- (id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)point;	// 0x32e9bc2d
- (int)_accessibilityMapFeatureType;	// 0x32e9bc71
- (id)_accessibilityMarkerForPoint:(CGPoint)point;	// 0x32e9be19
- (id)_accessibilityMarkerLineEndsForMarkers:(id)markers;	// 0x32e9c709
- (id)_accessibilityMarkersForPoints:(id)points;	// 0x32e9c539
- (id)_accessibilityMarkersForRange:(NSRange)range;	// 0x32e9c651
- (CGPoint)_accessibilityMaxScrubberPosition;	// 0x32e9beb9
- (float)_accessibilityMaxValue;	// 0x32e9be9d
- (CGPoint)_accessibilityMinScrubberPosition;	// 0x32e9bea1
- (float)_accessibilityMinValue;	// 0x32e9be99
- (void)_accessibilityMoveSelectionToMarker:(id)marker;	// 0x32e9bc79
- (id)_accessibilityNextElementsWithCount:(unsigned long)count originalElement:(id)element;	// 0x32ea02d9
- (id)_accessibilityNextMarker:(id)marker;	// 0x32e9be25
- (id)_accessibilityObjectForTextMarker:(id)textMarker;	// 0x32e9be89
- (BOOL)_accessibilityObscuresScreen;	// 0x32e9c47d
- (BOOL)_accessibilityOnlyComparesByXAxis;	// 0x32e9e339
- (id)_accessibilityPageContent;	// 0x32e9bed1
- (int)_accessibilityPageControlCount;	// 0x32e9bee9
- (int)_accessibilityPageControlIndex;	// 0x32e9bef1
- (id)_accessibilityPageTextMarkerRange;	// 0x32e9be35
- (id)_accessibilityParentView;	// 0x32ea00e5
- (void)_accessibilityPaste;	// 0x32e9d8a9
- (BOOL)_accessibilityPerformEscape;	// 0x32e9d65d
- (int)_accessibilityPickerType;	// 0x32e9bd31
- (void)_accessibilityPlayKeyboardClickSound;	// 0x32e9c249
- (void)_accessibilityPlaySystemSound:(int)sound;	// 0x32e9c241
- (void)_accessibilityPostAnnouncement:(id)announcement;	// 0x32ea4839
- (void)_accessibilityPostNotificationHelper:(id)helper;	// 0x32ea47d1
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count originalElement:(id)element;	// 0x32ea0309
- (id)_accessibilityPreviousMarker:(id)marker;	// 0x32e9be29
- (NSRange)_accessibilityRangeForLineNumberAndColumn:(id)lineNumberAndColumn;	// 0x32e9bde5
- (NSRange)_accessibilityRangeForTextMarker:(id)textMarker;	// 0x32e9be39
- (BOOL)_accessibilityReadAllContinuesWithScroll;	// 0x32e9bf05
- (BOOL)_accessibilityReadAllOnFocus;	// 0x32e9c8e5
- (void)_accessibilityRemoveTrait:(unsigned long long)trait;	// 0x32ea22e1
- (void)_accessibilityReplace;	// 0x32e9d979
- (void)_accessibilityResetContainerElements;	// 0x32e9de9d
- (id)_accessibilityResponderElement;	// 0x32e9bdc9
- (id)_accessibilityRetrieveImagePathLabel:(id)label;	// 0x32e9c275
- (BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)point;	// 0x32e9bc29
- (id)_accessibilityScrollAncestor;	// 0x32ea4021
- (id)_accessibilityScrollAncestorForSelector:(SEL)selector;	// 0x32ea3d81
- (void)_accessibilityScrollDownPage;	// 0x32ea46c1
- (void)_accessibilityScrollLeftPage;	// 0x32ea4535
- (BOOL)_accessibilityScrollNextPage;	// 0x32ea45a9
- (id)_accessibilityScrollParent;	// 0x32e9f071
- (BOOL)_accessibilityScrollPreviousPage;	// 0x32ea45c1
- (void)_accessibilityScrollRightPage;	// 0x32ea45d9
- (id)_accessibilityScrollStatus;	// 0x32ea317d
- (void)_accessibilityScrollToFrame:(CGRect)frame forView:(id)view;	// 0x32e9bdb1
- (void)_accessibilityScrollToPoint:(CGPoint)point;	// 0x32ea4235
- (BOOL)_accessibilityScrollToVisible;	// 0x32ea4039
- (void)_accessibilityScrollUpPage;	// 0x32ea464d
- (BOOL)_accessibilityScrollingEnabled;	// 0x32ea401d
- (void)_accessibilitySelect;	// 0x32e9d911
- (void)_accessibilitySelectAll;	// 0x32e9d8dd
- (NSRange)_accessibilitySelectedNSRangeForObject;	// 0x32e9be49
- (NSRange)_accessibilitySelectedTextRange;	// 0x32e9bdb9
- (BOOL)_accessibilitySelfFoundByHitTesting;	// 0x32ea2eb5
- (BOOL)_accessibilityServesAsContainingParentForOrdering;	// 0x32e9e2ad
- (BOOL)_accessibilityServesAsFirstElement;	// 0x32ea3835
- (BOOL)_accessibilityServesAsFirstResponder;	// 0x32e9bdc5
- (void)_accessibilitySetAnimationsInProgress:(BOOL)progress;	// 0x32e9c44d
- (void)_accessibilitySetCameraIrisOpen:(BOOL)open;	// 0x32e9c399
- (void)_accessibilitySetCurrentGesture:(id)gesture;	// 0x32e9da49
- (void)_accessibilitySetCurrentWordInPageContext:(id)pageContext;	// 0x32e9befd
- (void)_accessibilitySetIsTourGuideRunning:(BOOL)running;	// 0x32e9c3f9
- (void)_accessibilitySetSelectedTextRange:(NSRange)range;	// 0x32e9bdb5
- (void)_accessibilitySetValue:(id)value;	// 0x32e9ca41
- (void)_accessibilitySetValue:(id)value forAttribute:(int)attribute;	// 0x32ea13d5
- (BOOL)_accessibilityShouldAnnounceFontInfo;	// 0x32e9bf45
- (BOOL)_accessibilityShouldAvoidAnnouncing;	// 0x32e9bc8d
- (BOOL)_accessibilityShouldEchoHandwritingCharacter;	// 0x32e9c1e1
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;	// 0x32ea345d
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;	// 0x32e9c7f9
- (id)_accessibilityStatusBar;	// 0x32e9e211
- (id)_accessibilityString:(id)string withSpeechHint:(id)speechHint;	// 0x32ea0151
- (id)_accessibilitySupplementaryFooterViews;	// 0x32ea22dd
- (id)_accessibilitySupplementaryHeaderViews;	// 0x32ea22d9
- (id)_accessibilitySupportedLanguages;	// 0x32e9bc3d
- (BOOL)_accessibilitySupportsActivateAction;	// 0x32ea3301
- (BOOL)_accessibilitySupportsMultipleCustomRotorTitles;	// 0x32e9bf41
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)from;	// 0x32e9bd45
- (id)_accessibilityTableViewCellWithRowIndex:(int)rowIndex andColumn:(int)column;	// 0x32e9bc9d
- (id)_accessibilityTextChecker;	// 0x32e9cac9
- (CGRect)_accessibilityTextCursorFrame;	// 0x32e9bfcd
- (id)_accessibilityTextMarkerForPosition:(int)position;	// 0x32e9bc75
- (id)_accessibilityTextMarkerRange;	// 0x32e9be31
- (id)_accessibilityTextMarkerRangeForSelection;	// 0x32e9be45
- (BOOL)_accessibilityTextOperationAction:(id)action;	// 0x32e9daa9
- (id)_accessibilityTextOperations;	// 0x32e9d9e5
- (id)_accessibilityTextViewTextOperationResponder;	// 0x32e9da45
- (id)_accessibilityTouchContainer;	// 0x32ea2391
- (BOOL)_accessibilityTriggerDictationFromPath:(id)path;	// 0x32e9bcf9
- (id)_accessibilityUnignoredDescendant;	// 0x32e9fe29
- (void)_accessibilityUnregister;	// 0x32ea34c5
- (id)_accessibilityUpcomingRoadForPoint:(CGPoint)point forAngle:(float)angle;	// 0x32e9bc31
- (id)_accessibilityUserTestingVisibleCells;	// 0x32e9bd41
- (id)_accessibilityUserTestingVisibleSections;	// 0x32e9bd49
- (BOOL)_accessibilityUsesScrollParentForOrdering;	// 0x32e9e315
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;	// 0x32ea009d
- (id)_accessibilityValueForRange:(NSRange *)range;	// 0x32e9c935
- (id)_accessibilityVisibleItemInList;	// 0x32ea3af1
- (CGPoint)_accessibilityVisibleScrollArea:(BOOL)area;	// 0x32e9bca1
- (BOOL)_accessibilityWebSearchResultsActive;	// 0x32e9bd05
- (BOOL)_accessibilityWindowVisible;	// 0x32ea3a19
- (id)_accessibiltyAvailableKeyplanes;	// 0x32e9be21
- (BOOL)_allowCustomActionHintSpeakOverride;	// 0x32e9be2d
- (id)_axDebugTraits;	// 0x32ea32d5
- (id)_axSuperviews;	// 0x32ea3009
- (void)_setAccessibilityIsMainWindow:(BOOL)window;	// 0x32ea3905
- (void)_setAccessibilityIsNotFirstElement:(BOOL)element;	// 0x32ea3865
- (void)_setAccessibilityObscuresScreen:(BOOL)screen;	// 0x32e9c46d
- (void)_setAccessibilityServesAsFirstElement:(BOOL)element;	// 0x32ea37c5
- (void)_setAccessibilityWindowVisible:(BOOL)visible;	// 0x32ea39a9
- (void)accessibilityActivate;	// 0x32e9dcb1
- (id)accessibilityArrayOfTextForTextMarkers:(id)textMarkers;	// 0x32e9be85
- (id)accessibilityAttributeValue:(int)value;	// 0x32ea03a1
- (id)accessibilityAttributeValue:(int)value forParameter:(id)parameter;	// 0x32ea1535
- (CGRect)accessibilityBoundsForTextMarkers:(id)textMarkers;	// 0x32e9be5d
- (id)accessibilityCandidateWordDescription:(id)description;	// 0x32ea23d5
- (NSRange)accessibilityColumnRange;	// 0x32e9bf25
- (int)accessibilityCompareGeometry:(id)geometry;	// 0x32e9e3c9
- (id)accessibilityContainerElements;	// 0x32e9df55
- (id)accessibilityContentForLineNumber:(int)lineNumber;	// 0x32e9bcbd
- (id)accessibilityCustomActions;	// 0x32e9bc95
- (id)accessibilityCustomRotorItemsAtIndex:(int)index;	// 0x32e9bc99
- (id)accessibilityCustomRotorTitles;	// 0x32e9bc91
- (void)accessibilityDecrement;	// 0x32e9bda5
- (BOOL)accessibilityEditOperationAction:(id)action;	// 0x32e9daa5
- (id)accessibilityElementAtIndex:(int)index;	// 0x32e9df8d
- (int)accessibilityElementCount;	// 0x32e9df59
- (void)accessibilityElementDidBecomeFocused;	// 0x32ea3321
- (void)accessibilityElementDidLoseFocus;	// 0x32ea3325
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x32e9bf15
- (BOOL)accessibilityElementIsFocused;	// 0x32ea3309
- (void)accessibilityEnumerateContainerElementsUsingBlock:(id)block;	// 0x32e9e1fd
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32e9e0e1
- (id)accessibilityFlowToElements;	// 0x32e9bcb1
- (CGRect)accessibilityFrameForLineNumber:(int)lineNumber;	// 0x32e9bcc1
- (id)accessibilityHeaderElements;	// 0x32e9bf09
- (id)accessibilityHitTest:(CGPoint)test;	// 0x32ea23d1
- (id)accessibilityIdentification;	// 0x32ea3669
- (void)accessibilityIncrement;	// 0x32e9bda1
- (id)accessibilityInvalidStatus;	// 0x32e9bd65
- (BOOL)accessibilityIsComboBox;	// 0x32e9bcfd
- (id)accessibilityLabelForRange:(NSRange *)range;	// 0x32e9c495
- (int)accessibilityLineNumberForPoint:(CGPoint)point;	// 0x32e9bcb5
- (id)accessibilityLinkedElement;	// 0x32e9bd4d
- (id)accessibilityMathEquation;	// 0x32e9bc1d
- (id)accessibilityMathMLSource;	// 0x32e9bc19
- (id)accessibilityMenuActions;	// 0x32e9d9e1
- (id)accessibilityPageContent;	// 0x32e9bcad
- (id)accessibilityPaths;	// 0x32e9bd61
- (BOOL)accessibilityPerformCustomAction:(int)action;	// 0x32e9be59
- (id)accessibilityPlaceholderValue;	// 0x32e9bef9
- (void)accessibilityPostNotification:(unsigned)notification withObject:(id)object afterDelay:(double)delay;	// 0x32ea4735
- (BOOL)accessibilityRequired;	// 0x32e9bdad
- (NSRange)accessibilityRowRange;	// 0x32e9bf19
- (BOOL)accessibilityScrollDownPageSupported;	// 0x32ea452d
- (BOOL)accessibilityScrollLeftPageSupported;	// 0x32ea4525
- (BOOL)accessibilityScrollRightPageSupported;	// 0x32ea4529
- (BOOL)accessibilityScrollUpPageSupported;	// 0x32ea4531
- (id)accessibilitySecondaryLabel;	// 0x32e9bc15
- (void)accessibilitySetIdentification:(id)identification;	// 0x32ea312d
- (BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;	// 0x32e9e015
- (id)accessibilitySpeechHint;	// 0x32e9bc81
- (BOOL)accessibilityStartStopToggle;	// 0x32e9bdcd
- (id)accessibilityStringForTextMarkers:(id)textMarkers;	// 0x32e9be81
- (id)accessibilityTitleElement;	// 0x32e9bf11
- (id)accessibilityURL;	// 0x32ea3305
- (id)accessibilityUserDefinedIsMainWindow;	// 0x32ea3615
- (id)accessibilityUserDefinedNotFirstElement;	// 0x32ea364d
- (id)accessibilityUserDefinedServesAsFirstElement;	// 0x32ea3631
- (id)accessibilityUserDefinedSize;	// 0x32ea3685
- (id)accessibilityUserDefinedWindowVisible;	// 0x32ea35f9
- (id)accessibilityViewWithIdentifier:(id)identifier;	// 0x32e9fe61
- (void)accessibilityZoomInAtPoint:(CGPoint)point;	// 0x32e9d5fd
- (void)accessibilityZoomOutAtPoint:(CGPoint)point;	// 0x32e9d62d
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x32e9dfdd
- (id)isAccessibilityUserDefinedScrollAncestor;	// 0x32ea35dd
- (id)isAccessibilityUserDefinedWindow;	// 0x32ea35c1
- (void)setAccessibilitySize:(CGSize)size;	// 0x32ea36a1
- (void)setIsAccessibilityScrollAncestor:(BOOL)ancestor;	// 0x32ea3755
- (void)setIsAccessibilityWindow:(BOOL)window;	// 0x32ea36e5
@end

@interface NSObject (AccessibilityStorage)
- (void)_accessibilityActionBlock:(id *)block andValue:(id *)value forKey:(unsigned long)key;	// 0x32ea4ea1
- (BOOL)_accessibilityBoolValueForKey:(id)key;	// 0x32ea49b1
- (BOOL)_accessibilityHandleMagicTap;	// 0x32ea4f9d
- (BOOL)_accessibilityHasActionBlockForKey:(unsigned long)key;	// 0x32ea4e39
- (int)_accessibilityIntegerValueForKey:(id)key;	// 0x32ea49d9
- (BOOL)_accessibilityInternalHandleStartStopToggle;	// 0x32ea4de9
- (void)_accessibilityRemoveActionBlockForKey:(unsigned long)key;	// 0x32ea4f7d
- (void)_accessibilityRemoveAllActionBlocks;	// 0x32ea4f3d
- (void)_accessibilityRemoveValueForKey:(id)key;	// 0x32ea4c75
- (void)_accessibilitySetActionBlock:(id)block withValue:(id)value forKey:(unsigned long)key;	// 0x32ea4c99
- (void)_accessibilitySetAssignedValue:(id)value forKey:(id)key;	// 0x32ea4af5
- (void)_accessibilitySetBoolValue:(BOOL)value forKey:(id)key;	// 0x32ea4b3d
- (void)_accessibilitySetIntegerValue:(int)value forKey:(id)key;	// 0x32ea4ba5
- (void)_accessibilitySetRetainedValue:(id)value forKey:(id)key;	// 0x32ea4b19
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned)value forKey:(id)key;	// 0x32ea4c0d
- (void)_accessibilitySetValue:(id)value forKey:(id)key storageMode:(int)mode;	// 0x32ea4a29
- (unsigned)_accessibilityUnsignedIntegerValueForKey:(id)key;	// 0x32ea4a01
- (id)_accessibilityValueForKey:(id)key;	// 0x32ea4985
- (BOOL)accessibilityPerformAction:(int)action withValue:(id)value;	// 0x32ea508d
@end

@interface NSObject (UIAccessibilityAutomation)
- (id)_accessibilityAbsoluteValue;	// 0x32ea8afd
- (id)_accessibilityAncestry;	// 0x32ea8bbd
- (id)_accessibilityKeyboardKeyEnteredString;	// 0x32ea8929
- (void)_accessibilitySetUserTestingIsCancelButton:(BOOL)button;	// 0x32ea891d
- (id)_accessibilityUserTestingChildren;	// 0x32ea91f1
- (int)_accessibilityUserTestingChildrenCount;	// 0x32ea8ebd
- (id)_accessibilityUserTestingChildrenWithRange:(NSRange)range;	// 0x32ea8f69
- (id)_accessibilityUserTestingElementAttributes;	// 0x32ea892d
- (id)_accessibilityUserTestingElementBaseType;	// 0x32ea8a21
- (id)_accessibilityUserTestingElementType;	// 0x32ea8b01
- (BOOL)_accessibilityUserTestingIsBackNavButton;	// 0x32ea8921
- (BOOL)_accessibilityUserTestingIsCancelButton;	// 0x32ea8919
- (BOOL)_accessibilityUserTestingIsDefaultButton;	// 0x32ea8915
- (BOOL)_accessibilityUserTestingIsRightNavButton;	// 0x32ea8925
- (id)_accessibilityUserTestingParent;	// 0x32ea8b1d
- (id)_accessibilityUserTestingSupplementaryViews:(BOOL)views;	// 0x32ea8d29
@end

