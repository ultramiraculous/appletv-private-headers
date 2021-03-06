/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import <NSObject.h> // Unknown library

@class NSURL, UIActionSheet, UIPopoverController, _UIPreviewItemProxy, NSString, UIBarButtonItem, UIViewController, UIView, NSArray;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
@private
	id<UIDocumentInteractionControllerDelegate> _delegate;	// 4 = 0x4
	id _previewItemProxy;	// 8 = 0x8
	NSArray *_icons;	// 12 = 0xc
	id _annotation;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
	UIPopoverController *_popoverController;	// 24 = 0x18
	UIViewController *_presentingViewController;	// 28 = 0x1c
	id _previewController;	// 32 = 0x20
	NSArray *_gestureRecognizers;	// 36 = 0x24
	CGRect _presentRect;	// 40 = 0x28
	UIView *_presentView;	// 56 = 0x38
	UIBarButtonItem *_presentItem;	// 60 = 0x3c
	NSArray *_availableApplications;	// 64 = 0x40
	UIViewController *_openInViewController;	// 68 = 0x44
	UIActionSheet *_optionsMenu;	// 72 = 0x48
	UIActionSheet *_openInMenu;	// 76 = 0x4c
	int _quickLookButtonIndex;	// 80 = 0x50
	int _defaultOpenButtonIndex;	// 84 = 0x54
	int _alternateOpenButtonIndex;	// 88 = 0x58
	int _copyButtonIndex;	// 92 = 0x5c
	int _printButtonIndex;	// 96 = 0x60
	CGSize _openInTableViewSize;	// 100 = 0x64
	BOOL _shouldUnzipDocument;	// 108 = 0x6c
	NSURL *_unzippedDocumentURL;	// 112 = 0x70
	id _applicationToOpen;	// 116 = 0x74
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
	} _documentInteractionControllerFlags;	// 120 = 0x78
}
@property(retain) NSURL *URL;	// G=0x33c9d235; S=0x33c9d05d; 
@property(copy, nonatomic) NSString *UTI;	// G=0x33c9d5a5; S=0x33c9d445; 
@property(retain, nonatomic) id annotation;	// G=0x33c9ef19; S=0x33c9ef29; @synthesize=_annotation
@property(assign, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;	// G=0x33c9ef09; S=0x33c9cdad; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x33c9ed75; 
@property(readonly, assign, nonatomic) NSArray *icons;	// G=0x33c9d909; 
@property(copy) NSString *name;	// G=0x33c9d811; S=0x33c9d6f1; 
@property(readonly, assign, nonatomic) UIPopoverController *popoverController;	// G=0x33c9aad1; 
@property(readonly, assign, nonatomic) id previewController;	// G=0x33c9aa51; 
@property(readonly, assign, nonatomic) _UIPreviewItemProxy *previewItemProxy;	// G=0x33c9abb5; 
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// G=0x33c9dae9; S=0x33c9dab9; @synthesize=_shouldUnzipDocument
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x33c9ef4d; S=0x33c9ef5d; @synthesize=_uniqueIdentifier
+ (id)_UTIForFilename:(id)filename;	// 0x33c9d565
+ (id)_applicationsForFilename:(id)filename UTI:(id)uti;	// 0x33c9ad81
+ (dispatch_queue_s *)_unzippingQueue;	// 0x33c9bdc9
+ (void)initialize;	// 0x33c9c9cd
+ (id)interactionControllerWithURL:(id)url;	// 0x33c9cab1
- (id)initWithURL:(id)url;	// 0x33c9caed
// declared property getter: - (id)URL;	// 0x33c9d235
// declared property getter: - (id)UTI;	// 0x33c9d5a5
- (id)_applicationToOpen;	// 0x33c9c5cd
- (id)_applications:(BOOL)applications;	// 0x33c9af01
- (BOOL)_canPreviewUnzippedDocument;	// 0x33c9daf9
- (BOOL)_canUnzipDocument;	// 0x33c9c801
- (BOOL)_canUnzipDocumentAndPresentOptions;	// 0x33c9dba5
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)methods;	// 0x33c9bac1
- (BOOL)_documentNeedsHelpUnzippingForPreview;	// 0x33c9c86d
- (void)_finishedCopyingResource;	// 0x33c9b155
- (void)_interfaceOrientationWillChange:(id)_interfaceOrientation;	// 0x33c9c58d
- (void)_invalidate;	// 0x33c9c521
- (BOOL)_isFilenameValidForUnzipping:(id)unzipping;	// 0x33c9c8e1
- (BOOL)_isValidURL:(id)url;	// 0x33c9c999
- (void)_openDocumentWithApplication:(id)application;	// 0x33c9b001
- (void)_openDocumentWithCurrentApplication;	// 0x33c9b109
- (void)_presentOpenIn:(id)anIn;	// 0x33c9ac89
- (void)_presentOpenInForPhoneInView:(id)view;	// 0x33c9e821
- (void)_presentOptionsMenu:(id)menu;	// 0x33c9acf9
- (void)_presentPreview:(id)preview;	// 0x33c9ac05
- (void)_setApplicationToOpen:(id)open;	// 0x33c9c605
- (void)_setUnzippedDocumentURL:(id)url;	// 0x33c9c649
- (BOOL)_setupForOpenInMenu;	// 0x33c9b7e1
- (BOOL)_setupForOptionsMenu;	// 0x33c9b1bd
- (BOOL)_setupPreviewController;	// 0x33c9bb09
- (void)_unzipFileAndSetupPayload:(id)payload;	// 0x33c9be19
- (id)_unzippedDocumentURL;	// 0x33c9c72d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x33c9a4d1
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x33c9a85d
- (void)actionSheetCancel:(id)cancel;	// 0x33c9a7e1
// declared property getter: - (id)annotation;	// 0x33c9ef19
- (unsigned)applicationCount;	// 0x33c9ee85
- (void)dealloc;	// 0x33c9cba5
// declared property getter: - (id)delegate;	// 0x33c9ef09
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x33c9ed05
- (void)dismissPreviewAnimated:(BOOL)animated;	// 0x33c9ecd9
// declared property getter: - (id)gestureRecognizers;	// 0x33c9ed75
// declared property getter: - (id)icons;	// 0x33c9d909
// declared property getter: - (id)name;	// 0x33c9d811
- (int)numberOfPreviewItemsInPreviewController:(id)previewController;	// 0x33c9a4bd
- (void)openDocumentWithDefaultApplication;	// 0x33c9eeb1
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;	// 0x33c9b129
// declared property getter: - (id)popoverController;	// 0x33c9aad1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33c9a971
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x33c9eb91
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x33c9ea35
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x33c9e091
- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x33c9dc55
- (BOOL)presentPreviewAnimated:(BOOL)animated;	// 0x33c9e465
- (id)presentingNavigationController;	// 0x33c9e411
// declared property getter: - (id)previewController;	// 0x33c9aa51
- (CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id *)sourceView;	// 0x33c9a0f5
- (id)previewController:(id)controller previewItemAtIndex:(int)index;	// 0x33c9a4c1
- (id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect *)rect;	// 0x33c9a1d5
- (void)previewControllerDidDismiss:(id)previewController;	// 0x33c9a131
// declared property getter: - (id)previewItemProxy;	// 0x33c9abb5
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x33c9ef29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c9cdad
// declared property setter: - (void)setName:(id)name;	// 0x33c9d6f1
- (void)setPreviewURLOverride:(id)override;	// 0x33c9d325
// declared property setter: - (void)setShouldUnzipDocument:(BOOL)unzipDocument;	// 0x33c9dab9
// declared property setter: - (void)setURL:(id)url;	// 0x33c9d05d
// declared property setter: - (void)setUTI:(id)uti;	// 0x33c9d445
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x33c9ef5d
// declared property getter: - (BOOL)shouldUnzipDocument;	// 0x33c9dae9
// declared property getter: - (id)uniqueIdentifier;	// 0x33c9ef4d
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;	// 0x33c9e7e1
@end

