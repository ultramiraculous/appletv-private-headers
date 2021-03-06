/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVCaptureDeviceInternal;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(retain) id activeFormat;	// G=0x36751201; S=0x36751221; converted property
@property(assign) float autoExposureBias;	// G=0x36751bd9; S=0x36751bdd; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x36751d29; S=0x36751d2d; converted property
@property(assign) BOOL automaticallyEnablesLowLightBoostWhenAvailable;	// G=0x36751e69; S=0x36751e6d; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x36751351; 
@property(assign) float contrast;	// G=0x36751e11; S=0x36751e15; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x36751abd; S=0x36751af5; converted property
@property(assign) float exposureGain;	// G=0x36751b3d; S=0x36751b45; converted property
@property(assign) int exposureMode;	// G=0x36751a6d; S=0x36751a75; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x36751c29; S=0x36751c35; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x36751301; S=0x36751305; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x3675128d; S=0x36751291; converted property
@property(assign) int flashMode;	// G=0x367518c5; S=0x367518c9; converted property
@property(assign) int focusMode;	// G=0x367519bd; S=0x367519c5; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x36751a11; S=0x36751a21; converted property
@property(assign) int imageControlMode;	// G=0x36751d75; S=0x36751d7d; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x36751199; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x36751b8d; S=0x36751b91; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x3675118d; 
@property(assign) float saturation;	// G=0x36751dc5; S=0x36751dc9; converted property
@property(retain) id session;	// G=0x367511b9; S=0x367511d9; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x3675127d; S=0x36751281; converted property
@property(assign) int torchMode;	// G=0x36751925; S=0x36751929; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x36751181; 
@property(assign) int whiteBalanceMode;	// G=0x36751c85; S=0x36751c8d; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x36751cd5; S=0x36751cd9; converted property
+ (id)_devices;	// 0x36750f85
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x36750dd9
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x36750e7d
+ (id)devices;	// 0x36750b11
+ (id)devicesWithMediaType:(id)mediaType;	// 0x367509a5
- (id)init;	// 0x36750fa1
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x36751ebd
- (void)_sessionDidStart;	// 0x367511fd
- (void)_sessionWillStart;	// 0x367511f9
- (BOOL)_startUsingDevice:(id *)device;	// 0x36751779
- (void)_stopUsingDevice;	// 0x36751871
// converted property getter: - (id)activeFormat;	// 0x36751201
// converted property getter: - (float)autoExposureBias;	// 0x36751bd9
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x36751d29
// converted property getter: - (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;	// 0x36751e69
- (void)close;	// 0x367516ed
// converted property getter: - (float)contrast;	// 0x36751e11
- (void)dealloc;	// 0x36751089
- (id)description;	// 0x367510fd
- (BOOL)doesHandleNotification:(id)notification;	// 0x36751eb5
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x36751abd
// converted property getter: - (float)exposureGain;	// 0x36751b3d
// converted property getter: - (int)exposureMode;	// 0x36751a6d
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x36751c29
- (CGRect)faceRectangle;	// 0x367512d9
- (int)faceRectangleAngle;	// 0x367512fd
// converted property getter: - (int)flashMode;	// 0x367518c5
// converted property getter: - (int)focusMode;	// 0x367519bd
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x36751a11
- (id)formats;	// 0x36751355
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x36751eb9
- (BOOL)hasFlash;	// 0x367518b5
- (BOOL)hasMediaType:(id)type;	// 0x367511b1
- (BOOL)hasTorch;	// 0x36751911
// converted property getter: - (int)imageControlMode;	// 0x36751d75
- (BOOL)isAdjustingExposure;	// 0x36751c7d
- (BOOL)isAdjustingFocus;	// 0x36751a1d
- (BOOL)isAdjustingWhiteBalance;	// 0x36751d21
// declared property getter: - (BOOL)isConnected;	// 0x36751351
- (BOOL)isExposureModeSupported:(int)supported;	// 0x36751a69
- (BOOL)isExposurePointOfInterestSupported;	// 0x36751c25
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x36751301
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x3675128d
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;	// 0x36751289
- (BOOL)isFaceDetectionSupported;	// 0x36751285
- (BOOL)isFlashActive;	// 0x367518bd
- (BOOL)isFlashAvailable;	// 0x367518b9
- (BOOL)isFlashModeSupported:(int)supported;	// 0x367518c1
- (BOOL)isFocusModeSupported:(int)supported;	// 0x367519b9
- (BOOL)isFocusPointOfInterestSupported;	// 0x36751a0d
- (BOOL)isHDRSupported;	// 0x36751e5d
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x36751d25
- (BOOL)isInUseByAnotherApplication;	// 0x3675134d
- (BOOL)isLockedForConfiguration;	// 0x36751359
- (BOOL)isLowLightBoostEnabled;	// 0x36751e65
- (BOOL)isLowLightBoostSupported;	// 0x36751e61
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x36751b8d
- (BOOL)isOpen;	// 0x36751609
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x3675127d
- (BOOL)isTorchActive;	// 0x36751921
- (BOOL)isTorchAvailable;	// 0x3675191d
- (BOOL)isTorchModeSupported:(int)supported;	// 0x36751919
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x36751c81
// declared property getter: - (id)localizedName;	// 0x36751199
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x36751381
// declared property getter: - (id)modelID;	// 0x3675118d
- (BOOL)open:(id *)open;	// 0x36751631
- (int)position;	// 0x367518b1
// converted property getter: - (float)saturation;	// 0x36751dc5
// converted property getter: - (id)session;	// 0x367511b9
// converted property setter: - (void)setActiveFormat:(id)format;	// 0x36751221
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x36751bdd
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x36751d2d
// converted property setter: - (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x36751e6d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x36751e15
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x36751af5
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x36751b45
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x36751a75
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x36751c35
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x36751305
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x36751291
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x367518c9
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x367519c5
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x36751a21
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x36751d7d
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x36751b91
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x36751dc9
// converted property setter: - (void)setSession:(id)session;	// 0x367511d9
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x36751281
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x36751929
- (BOOL)setTorchModeOnWithLevel:(float)level error:(id *)error;	// 0x36751971
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x36751c8d
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x36751cd9
- (BOOL)startUsingDevice:(id *)device;	// 0x367518a9
- (void)stopUsingDevice;	// 0x367518ad
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x367511b5
- (float)torchLevel;	// 0x36751915
// converted property getter: - (int)torchMode;	// 0x36751925
// declared property getter: - (id)uniqueID;	// 0x36751181
- (void)unlockForConfiguration;	// 0x36751519
// converted property getter: - (int)whiteBalanceMode;	// 0x36751c85
// converted property getter: - (float)whiteBalanceTemperature;	// 0x36751cd5
@end

