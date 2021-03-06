/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {
	ABStyleProvider *_styleProvider;	// 4 = 0x4
}
- (id)init;	// 0x371b9b91
- (Class)actionCellClass;	// 0x371b9c4d
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)editing;	// 0x371b9cb5
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)editing;	// 0x371b9cb1
- (Class)customCardActionCellClass;	// 0x371b9c81
- (Class)customCardCellClass;	// 0x371b9c71
- (void)customSetEmphasized:(BOOL)emphasized onCell:(id)cell;	// 0x371b9ccd
- (void)dealloc;	// 0x371b9bfd
- (float)distanceBetweenSections;	// 0x371b9c5d
- (void)forwardInvocation:(id)invocation;	// 0x371b9cdd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x371b9d69
- (id)newActionButton;	// 0x371b9c51
- (id)newCardActionButton;	// 0x371b9c91
- (id)newCustomCardTableScrollingBackgroundView;	// 0x371b9ca1
- (id)newScrollingBackgroundView;	// 0x371b9c59
- (Class)propertyCellClass;	// 0x371b9c49
- (void)setHighlighted:(BOOL)highlighted onPropertyCell:(id)cell;	// 0x371b9c69
- (void)setIndicatesFaceTimeHistory:(BOOL)history onActionButton:(id)button;	// 0x371b9c55
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;	// 0x371b9cc9
- (BOOL)shouldPropagateStylesToPickers;	// 0x371b9cc5
- (BOOL)shouldUseCardContentProviderWhenAvailable;	// 0x371b9c6d
- (int)unknownModalPresentationStyle;	// 0x371b9c65
@end

