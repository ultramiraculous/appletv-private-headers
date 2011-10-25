/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class DOMHTMLInputElement, DOMElement, NSString, NSMutableDictionary;

@interface UIWebFormCompletionController : NSObject {
	DOMHTMLInputElement *_element;	// 4 = 0x4
	NSString *_fieldName;	// 8 = 0x8
	DOMElement *_form;	// 12 = 0xc
	BOOL _isLoginForm;	// 16 = 0x10
	NSMutableDictionary *_items;	// 20 = 0x14
}
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x3536de8d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x3536e099
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label;	// 0x3536e35d
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer;	// 0x3536e401
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x3536e775
+ (void)_appWillTerminate:(id)_app;	// 0x3536cb8d
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x3536ee71
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x3536e8e5
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x3536c32d
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x3536cd21
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x3536d571
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x3536dd45
+ (void)_loadCompletionDB;	// 0x3536c461
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control;	// 0x3536ea6d
+ (void)_pruneCompletionDB;	// 0x3536c759
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x3536c989
+ (void)_saveCompletionDB:(id)db;	// 0x3536ca15
+ (void)_saveCompletionDBSoon;	// 0x3536cb11
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3536d551
+ (BOOL)addressBookCompletionEnabled;	// 0x3536c2b5
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x3536d24d
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3536d561
+ (BOOL)autoFillInWebView:(id)webView;	// 0x3536efe5
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x35201409
+ (void)clearPreviousDataDatabase;	// 0x3536cc8d
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x3536cc25
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x3536f119
+ (id)currentFormInFrame:(id)frame;	// 0x3536ed95
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x3536ee1d
+ (id)domainsWithPreviousData;	// 0x3536cbf1
+ (id)firstFormInFrame:(id)frame;	// 0x3536edb9
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x3536dc59
+ (BOOL)passwordCompletionEnabled;	// 0x3516001d
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x3536f0b5
+ (void)preFillInWebFrame:(id)webFrame;	// 0x3515fee9
+ (BOOL)previousDataCompletionEnabled;	// 0x3536c239
+ (BOOL)shouldSaveFormData;	// 0x3536c23d
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x3536c2d9
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x3536f14d
- (void)abortCompletion;	// 0x3536faa9
- (void)acceptedAutoFillWord:(id)word;	// 0x3536fc55
- (void)autoFillCommand:(id)command;	// 0x3536f4a1
- (void)autoFillWithElementValue;	// 0x3536fc65
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x3536ece1
- (BOOL)currentTextChangeIsProgrammatic;	// 0x3536faad
- (void)dealloc;	// 0x3536f361
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x3536f58d
- (BOOL)hasCurrentSuggestions;	// 0x3536fc0d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x3536fa8d
- (id)queryString;	// 0x3536ec31
- (void)reflectFinalSelectedListItem:(id)item;	// 0x3536f801
- (void)reflectSelectedListItem:(id)item;	// 0x3536f72d
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x3536fa85
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x3536f9f5
- (BOOL)returnPerformsActionWhenShowingList;	// 0x3536fa91
- (id)selectedListItem:(id)item;	// 0x3536f481
- (BOOL)shouldSuppressAutocomplete;	// 0x3536f5cd
- (BOOL)showsListForSingleListItem;	// 0x3536fa95
- (void)sourceFieldTextDidChange;	// 0x3536f421
- (void)sourceFieldTextDidEndEditing;	// 0x3536fa99
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x3536fab1
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x3536ec51
- (id)webFrame;	// 0x3536f3e9
@end

