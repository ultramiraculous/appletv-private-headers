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
- (id)init;	// 0x37687b91
- (Class)actionCellClass;	// 0x37687c4d
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)editing;	// 0x37687cb5
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)editing;	// 0x37687cb1
- (Class)customCardActionCellClass;	// 0x37687c81
- (Class)customCardCellClass;	// 0x37687c71
- (void)customSetEmphasized:(BOOL)emphasized onCell:(id)cell;	// 0x37687ccd
- (void)dealloc;	// 0x37687bfd
- (float)distanceBetweenSections;	// 0x37687c5d
- (void)forwardInvocation:(id)invocation;	// 0x37687cdd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x37687d69
- (id)newActionButton;	// 0x37687c51
- (id)newCardActionButton;	// 0x37687c91
- (id)newCustomCardTableScrollingBackgroundView;	// 0x37687ca1
- (id)newScrollingBackgroundView;	// 0x37687c59
- (Class)propertyCellClass;	// 0x37687c49
- (void)setHighlighted:(BOOL)highlighted onPropertyCell:(id)cell;	// 0x37687c69
- (void)setIndicatesFaceTimeHistory:(BOOL)history onActionButton:(id)button;	// 0x37687c55
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;	// 0x37687cc9
- (BOOL)shouldPropagateStylesToPickers;	// 0x37687cc5
- (BOOL)shouldUseCardContentProviderWhenAvailable;	// 0x37687c6d
- (int)unknownModalPresentationStyle;	// 0x37687c65
@end
