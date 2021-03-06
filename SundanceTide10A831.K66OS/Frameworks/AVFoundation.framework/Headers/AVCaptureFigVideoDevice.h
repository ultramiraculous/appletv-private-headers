/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"
#import "MCProfileConnectionObserver.h"

@class NSDictionary, AVWeakReference, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	int _focusMode;	// 12 = 0xc
	CGPoint _focusPointOfInterest;	// 16 = 0x10
	int _focusInFlightCount;	// 24 = 0x18
	BOOL _adjustingFocus;	// 28 = 0x1c
	int _exposureMode;	// 32 = 0x20
	XXStruct_pwHToB _exposureDuration;	// 36 = 0x24
	float _exposureGain;	// 60 = 0x3c
	BOOL _manualExposureSupportEnabled;	// 64 = 0x40
	float _autoExposureBias;	// 68 = 0x44
	CGPoint _exposurePointOfInterest;	// 72 = 0x48
	BOOL _adjustingExposure;	// 80 = 0x50
	int _wbMode;	// 84 = 0x54
	float _whiteBalanceTemperature;	// 88 = 0x58
	BOOL _adjustingWB;	// 92 = 0x5c
	BOOL _automaticallyAdjustsImageControlMode;	// 93 = 0x5d
	int _imageControlMode;	// 96 = 0x60
	int _pendingImageControlMode;	// 100 = 0x64
	int _flashMode;	// 104 = 0x68
	BOOL _flashActive;	// 108 = 0x6c
	BOOL _flashAvailable;	// 109 = 0x6d
	int _torchMode;	// 112 = 0x70
	BOOL _torchActive;	// 116 = 0x74
	float _torchLevel;	// 120 = 0x78
	BOOL _torchAvailable;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;	// 128 = 0x80
	NSObject<OS_dispatch_source> *_torchAppsKillTimer;	// 132 = 0x84
	OpaqueFigRecorder *_recorderForTorchApps;	// 136 = 0x88
	BOOL _isConnected;	// 140 = 0x8c
	BOOL _subjectMonitoringEnabled;	// 141 = 0x8d
	BOOL _faceDetectionDrivenImageProcessingEnabled;	// 142 = 0x8e
	CGRect _faceRectangle;	// 144 = 0x90
	int _faceRectangleAngle;	// 160 = 0xa0
	BOOL _faceDetectionMetadataEnabled;	// 164 = 0xa4
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;	// 165 = 0xa5
	BOOL _lowLightBoostEnabled;	// 166 = 0xa6
	float _saturation;	// 168 = 0xa8
	float _contrast;	// 172 = 0xac
	NSMutableArray *_formats;	// 176 = 0xb0
	AVWeakReference *_weakReference;	// 180 = 0xb4
}
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x34217eb5; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x34217469; converted property
@property(assign) float autoExposureBias;	// G=0x34217c4d; S=0x34217cb5; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x34219885; S=0x34219895; converted property
@property(assign) BOOL automaticallyEnablesLowLightBoostWhenAvailable;	// G=0x3421a955; S=0x3421a965; converted property
@property(assign) float contrast;	// G=0x3421a699; S=0x3421a701; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x34217a4d; S=0x34217a81; converted property
@property(assign) float exposureGain;	// G=0x34217b55; S=0x34217b65; converted property
@property(assign) int exposureMode;	// G=0x342177b9; S=0x342177c9; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x34217ddd; S=0x34217df5; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x3421a269; S=0x3421a0d1; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x34219de5; S=0x34219ef5; converted property
@property(readonly, assign) CGRect faceRectangle;	// G=0x3421a09d; converted property
@property(readonly, assign) int faceRectangleAngle;	// G=0x3421a0c1; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x34218405; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x34218675; converted property
@property(assign) int flashMode;	// G=0x34218665; S=0x342186b1; converted property
@property(assign) int focusMode;	// G=0x342171d5; S=0x342171e5; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x34217391; S=0x342173a9; converted property
@property(readonly, retain) NSMutableArray *formats;	// G=0x342162c9; converted property
@property(assign) int imageControlMode;	// G=0x342199ad; S=0x34219a9d; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x342164b1; converted property
@property(readonly, assign, getter=isLowLightBoostEnabled) BOOL lowLightBoostEnabled;	// G=0x3421a945; converted property
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x34217c2d; S=0x34217c3d; converted property
@property(assign) float saturation;	// G=0x3421a549; S=0x3421a5b1; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x342196ad; S=0x34219755; converted property
@property(readonly, assign, getter=isTorchActive) BOOL torchActive;	// G=0x342187f9; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x342188bd; converted property
@property(readonly, assign) float torchLevel;	// G=0x3421883d; converted property
@property(assign) int torchMode;	// G=0x34218e51; S=0x34218e61; converted property
@property(assign) int whiteBalanceMode;	// G=0x34218091; S=0x342180a1; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x34218275; S=0x342182dd; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x34215ba5
+ (id)_devices;	// 0x342159a1
+ (void)initialize;	// 0x3421599d
- (id)init;	// 0x34215f39
- (id)initWithProperties:(id)properties;	// 0x34215bf1
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3421a30d
- (void)_applyPendingPropertiesToRecorder;	// 0x34216501
- (OpaqueFigRecorder *)_createFigRecorderForTorchApps;	// 0x34219451
- (id)_createTorchAppsKillTimer;	// 0x34218a0d
- (BOOL)_faceDetectionDebugMetadataReportingEnabled;	// 0x3421a279
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;	// 0x34219ff5
- (int)_flashMode;	// 0x342184b9
- (float)_floatValueForRecorderProperty:(CFStringRef)recorderProperty;	// 0x3421a401
- (void)_restoreColorProperties;	// 0x3421a7ed
- (void)_sessionDidStart;	// 0x34216ce1
- (void)_sessionWillStart;	// 0x34216c41
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x34217489
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x34217479
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x34217ed5
- (BOOL)_setAutoExposureBias:(float)bias;	// 0x34217c91
- (BOOL)_setContrast:(float)contrast;	// 0x3421a6dd
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x3421752d
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x3421a1d1
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x34219df5
- (void)_setFlashActive:(BOOL)active;	// 0x34218485
- (BOOL)_setFlashMode:(int)mode;	// 0x3421858d
- (BOOL)_setFloatValue:(float)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x3421a4b9
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x34216ead
- (BOOL)_setImageControlMode:(int)mode;	// 0x342199bd
- (BOOL)_setSaturation:(float)saturation;	// 0x3421a58d
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x342196bd
- (void)_setTorchActive:(BOOL)active;	// 0x34218809
- (long)_setTorchMode:(int)mode withLevel:(float)level;	// 0x34218b1d
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x34217ff9
- (BOOL)_setWhiteBalanceTemperature:(float)temperature;	// 0x342182b9
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x342197e1
- (void)_teardownFigRecorderForTorchApps;	// 0x342195a9
- (void)_teardownTorchAppsKillTimer;	// 0x34218af1
- (int)_torchMode;	// 0x342188f9
- (void)_updateFlashAndTorchAvailability;	// 0x3421910d
- (void)_updateImageControlMode;	// 0x34219c21
- (int)_whiteBalanceMode;	// 0x34217f55
// converted property getter: - (float)autoExposureBias;	// 0x34217c4d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x34219885
// converted property getter: - (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;	// 0x3421a955
// converted property getter: - (float)contrast;	// 0x3421a699
- (void)dealloc;	// 0x34215f8d
- (id)devicePropertiesDictionary;	// 0x342164c9
- (BOOL)doesHandleNotification:(id)notification;	// 0x3421aad1
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x34217a4d
// converted property getter: - (float)exposureGain;	// 0x34217b55
// converted property getter: - (int)exposureMode;	// 0x342177b9
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x34217ddd
// converted property getter: - (CGRect)faceRectangle;	// 0x3421a09d
// converted property getter: - (int)faceRectangleAngle;	// 0x3421a0c1
- (void)finishPendingAdjustmentsKVO;	// 0x34216d21
// converted property getter: - (int)flashMode;	// 0x34218665
// converted property getter: - (int)focusMode;	// 0x342171d5
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x34217391
// converted property getter: - (id)formats;	// 0x342162c9
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x3421ac0d
- (BOOL)hasFlash;	// 0x342183c5
- (BOOL)hasMediaType:(id)type;	// 0x34216209
- (BOOL)hasTorch;	// 0x342187b9
// converted property getter: - (int)imageControlMode;	// 0x342199ad
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x34217eb5
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x34217469
- (BOOL)isAdjustingWhiteBalance;	// 0x34217ec5
// converted property getter: - (BOOL)isConnected;	// 0x342164b1
- (BOOL)isExposureModeSupported:(int)supported;	// 0x34217499
- (BOOL)isExposurePointOfInterestSupported;	// 0x34217d9d
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x3421a269
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x34219de5
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;	// 0x34219da5
- (BOOL)isFaceDetectionSupported;	// 0x34219d65
// converted property getter: - (BOOL)isFlashActive;	// 0x34218405
// converted property getter: - (BOOL)isFlashAvailable;	// 0x34218675
- (BOOL)isFlashModeSupported:(int)supported;	// 0x34218415
- (BOOL)isFocusModeSupported:(int)supported;	// 0x34216e3d
- (BOOL)isFocusPointOfInterestSupported;	// 0x34217379
- (BOOL)isHDRSupported;	// 0x3421a8c5
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x34219875
- (BOOL)isInUseByAnotherApplication;	// 0x342164ad
// converted property getter: - (BOOL)isLowLightBoostEnabled;	// 0x3421a945
- (BOOL)isLowLightBoostSupported;	// 0x3421a905
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x34217c2d
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x342196ad
// converted property getter: - (BOOL)isTorchActive;	// 0x342187f9
// converted property getter: - (BOOL)isTorchAvailable;	// 0x342188bd
- (BOOL)isTorchModeSupported:(int)supported;	// 0x3421884d
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x34217ee5
- (id)localizedName;	// 0x342161c9
- (id)modelID;	// 0x342161a1
- (int)position;	// 0x34216df9
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x342160a9
// converted property getter: - (float)saturation;	// 0x3421a549
- (void)setActiveInput:(id)input;	// 0x34216bcd
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x34217cb5
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x34219895
// converted property setter: - (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x3421a965
// converted property setter: - (void)setContrast:(float)contrast;	// 0x3421a701
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x34217a81
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x34217b65
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x342177c9
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x34217df5
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x3421a0d1
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x34219ef5
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x342186b1
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x342171e5
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x342173a9
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x34219a9d
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x34217c3d
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x3421a5b1
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x34219755
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x34218e61
- (BOOL)setTorchModeOnWithLevel:(float)level error:(id *)error;	// 0x34218f75
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x342180a1
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x342182dd
- (BOOL)startUsingDevice:(id *)device;	// 0x342164c1
- (void)stopUsingDevice;	// 0x342164c5
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x34216275
// converted property getter: - (float)torchLevel;	// 0x3421883d
// converted property getter: - (int)torchMode;	// 0x34218e51
- (id)uniqueID;	// 0x34216179
// converted property getter: - (int)whiteBalanceMode;	// 0x34218091
// converted property getter: - (float)whiteBalanceTemperature;	// 0x34218275
@end

