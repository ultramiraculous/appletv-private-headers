/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class NSMutableDictionary, UIView, NSArray;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
@private
	unsigned _sourceType;	// 240 = 0xf0
	id _image;	// 244 = 0xf4
	CGRect _cropRect;	// 248 = 0xf8
	NSArray *_mediaTypes;	// 264 = 0x108
	NSMutableDictionary *_properties;	// 268 = 0x10c
	int _previousStatusBarStyle;	// 272 = 0x110
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;	// 276 = 0x114
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x3531b671; S=0x3531b689; 
@property(assign, nonatomic) BOOL allowsImageEditing;	// G=0x3531b649; S=0x3531b661; 
@property(assign, nonatomic) unsigned cameraCaptureMode;	// G=0x3531c32d; S=0x3531c3f9; 
@property(assign, nonatomic) unsigned cameraDevice;	// G=0x3531c20d; S=0x3531c291; 
@property(assign, nonatomic) int cameraFlashMode;	// G=0x3531c531; S=0x3531c5b5; 
@property(retain, nonatomic) UIView *cameraOverlayView;	// G=0x3531bdfd; S=0x3531bf29; 
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;	// G=0x3531bf95; S=0x3531c071; 
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray *mediaTypes;	// G=0x3531b59d; S=0x3531b3a1; 
@property(assign, nonatomic) BOOL showsCameraControls;	// G=0x3531bcdd; S=0x3531bd61; 
@property(assign, nonatomic) unsigned sourceType;	// G=0x3531b391; S=0x3531b145; 
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x3531b699; S=0x3531b6cd; 
@property(assign, nonatomic) unsigned videoQuality;	// G=0x3531b711; S=0x3531b745; 
+ (BOOL)_isMediaTypeAvailable:(id)available forSource:(unsigned)source;	// 0x3531a89d
+ (BOOL)_reviewCapturedItems;	// 0x3531a935
+ (id)availableCaptureModesForCameraDevice:(unsigned)cameraDevice;	// 0x3531a9f1
+ (id)availableMediaTypesForSourceType:(unsigned)sourceType;	// 0x3531a939
+ (BOOL)isCameraDeviceAvailable:(unsigned)available;	// 0x3531a9c1
+ (BOOL)isFlashAvailableForCameraDevice:(unsigned)cameraDevice;	// 0x3531ab21
+ (BOOL)isSourceTypeAvailable:(unsigned)available;	// 0x3531a871
- (id)init;	// 0x3531ab41
- (id)initWithCoder:(id)coder;	// 0x3531ac25
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x3531ce59
- (BOOL)_allowsImageEditing;	// 0x3531b7ed
- (BOOL)_allowsMultipleSelection;	// 0x3531b5d5
- (void)_autoDismiss;	// 0x3531ce65
- (id)_cameraViewController;	// 0x3531bc75
- (id)_createInitialController;	// 0x3531cb89
- (BOOL)_didRevertStatusBar;	// 0x3531ca19
- (void)_imagePickerDidCancel;	// 0x3531ce91
- (void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;	// 0x3531cef1
- (void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;	// 0x3531d0ad
- (unsigned)_imagePickerSavingOptions;	// 0x3531bbf9
- (id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;	// 0x3531ade1
- (void)_initializeProperties;	// 0x3531b87d
- (BOOL)_isCameraCaptureModeValid:(unsigned)valid;	// 0x3531c3b1
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3531ca2d
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x3531afa5
- (id)_properties;	// 0x3531ba71
- (void)_removeAllChildren;	// 0x3531ca89
- (void)_setAllowsImageEditing:(BOOL)editing;	// 0x3531b789
- (void)_setAllowsMultipleSelection:(BOOL)selection;	// 0x3531b605
- (void)_setImagePickerSavingOptions:(unsigned)options;	// 0x3531bbd9
- (void)_setProperties:(id)properties;	// 0x3531b81d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x3531bac1
- (void)_setupControllersForCurrentMediaTypes;	// 0x3531cd71
- (void)_setupControllersForCurrentSourceType;	// 0x3531cced
- (BOOL)_sourceTypeIsCamera;	// 0x3531bc0d
- (void)_updateCameraCaptureMode;	// 0x3531b0b1
- (id)_valueForProperty:(id)property;	// 0x3531bb95
// declared property getter: - (BOOL)allowsEditing;	// 0x3531b671
// declared property getter: - (BOOL)allowsImageEditing;	// 0x3531b649
// declared property getter: - (unsigned)cameraCaptureMode;	// 0x3531c32d
// declared property getter: - (unsigned)cameraDevice;	// 0x3531c20d
// declared property getter: - (int)cameraFlashMode;	// 0x3531c531
// declared property getter: - (id)cameraOverlayView;	// 0x3531bdfd
// declared property getter: - (CGAffineTransform)cameraViewTransform;	// 0x3531bf95
- (void)dealloc;	// 0x3531af31
- (void)encodeWithCoder:(id)coder;	// 0x3531afe9
// declared property getter: - (id)mediaTypes;	// 0x3531b59d
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x3531b689
// declared property setter: - (void)setAllowsImageEditing:(BOOL)editing;	// 0x3531b661
// declared property setter: - (void)setCameraCaptureMode:(unsigned)mode;	// 0x3531c3f9
// declared property setter: - (void)setCameraDevice:(unsigned)device;	// 0x3531c291
// declared property setter: - (void)setCameraFlashMode:(int)mode;	// 0x3531c5b5
// declared property setter: - (void)setCameraOverlayView:(id)view;	// 0x3531bf29
// declared property setter: - (void)setCameraViewTransform:(CGAffineTransform)transform;	// 0x3531c071
// declared property setter: - (void)setMediaTypes:(id)types;	// 0x3531b3a1
// declared property setter: - (void)setShowsCameraControls:(BOOL)controls;	// 0x3531bd61
// declared property setter: - (void)setSourceType:(unsigned)type;	// 0x3531b145
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x3531b6cd
// declared property setter: - (void)setVideoQuality:(unsigned)quality;	// 0x3531b745
// declared property getter: - (BOOL)showsCameraControls;	// 0x3531bcdd
// declared property getter: - (unsigned)sourceType;	// 0x3531b391
- (BOOL)startVideoCapture;	// 0x3531c181
- (void)stopVideoCapture;	// 0x3531c1c9
- (void)takePicture;	// 0x3531c13d
// declared property getter: - (double)videoMaximumDuration;	// 0x3531b699
// declared property getter: - (unsigned)videoQuality;	// 0x3531b711
- (void)viewDidDisappear:(BOOL)view;	// 0x3531c985
- (void)viewWillAppear:(BOOL)view;	// 0x3531c6cd
- (void)viewWillDisappear:(BOOL)view;	// 0x3531c7dd
- (void)viewWillUnload;	// 0x3531c651
@end

