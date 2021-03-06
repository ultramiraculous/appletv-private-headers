/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, DeviceManager;
@protocol ICDeviceDelegate;

@interface ICDevice : NSObject {
@private
	void *_deviceProperties;	// 4 = 0x4
}
@property(copy) NSString *UUIDString;	// G=0x328a4285; S=0x328a42a5; 
@property(assign) BOOL autoOpenSession;	// G=0x328a4309; S=0x328a4375; 
@property(assign) BOOL closeSessionPending;	// G=0x328a4351; S=0x328a43b5; 
@property(assign) id<ICDeviceDelegate> delegate;	// G=0x328a4085; S=0x328a40a5; 
@property(assign) DeviceManager *deviceManager;	// G=0x328a40c5; S=0x328a40e5; 
@property(assign) BOOL hasOpenSession;	// G=0x328a42c5; S=0x328a42e9; 
@property(readonly, assign) CGImageRef icon;	// G=0x328a4421; 
@property(copy) NSString *name;	// G=0x328a4105; S=0x328a4125; 
@property(assign) BOOL openSessionPending;	// G=0x328a432d; S=0x328a4395; 
@property(copy) NSString *productKind;	// G=0x328a4145; S=0x328a4165; 
@property(copy) NSString *transportType;	// G=0x328a4185; S=0x328a41a5; 
@property(assign) int usbLocationID;	// G=0x328a41c5; S=0x328a41e5; 
@property(assign) int usbProductID;	// G=0x328a4205; S=0x328a4225; 
@property(assign) int usbVendorID;	// G=0x328a4245; S=0x328a4265; 
- (id)init;	// 0x328a3d71
// declared property getter: - (id)UUIDString;	// 0x328a4285
// declared property getter: - (BOOL)autoOpenSession;	// 0x328a4309
// declared property getter: - (BOOL)closeSessionPending;	// 0x328a4351
- (void)dealloc;	// 0x328a3f79
// declared property getter: - (id)delegate;	// 0x328a4085
- (id)description;	// 0x328a3df1
// declared property getter: - (id)deviceManager;	// 0x328a40c5
- (void)finalize;	// 0x328a4035
- (void)handleCommandCompletionNotification:(id)notification;	// 0x328a4441
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x328a4445
// declared property getter: - (BOOL)hasOpenSession;	// 0x328a42c5
// declared property getter: - (CGImageRef)icon;	// 0x328a4421
// declared property getter: - (id)name;	// 0x328a4105
// declared property getter: - (BOOL)openSessionPending;	// 0x328a432d
// declared property getter: - (id)productKind;	// 0x328a4145
- (void)requestCloseSession;	// 0x328a43d9
- (void)requestOpenSession;	// 0x328a43d5
// declared property setter: - (void)setAutoOpenSession:(BOOL)session;	// 0x328a4375
// declared property setter: - (void)setCloseSessionPending:(BOOL)pending;	// 0x328a43b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x328a40a5
// declared property setter: - (void)setDeviceManager:(id)manager;	// 0x328a40e5
// declared property setter: - (void)setHasOpenSession:(BOOL)session;	// 0x328a42e9
// declared property setter: - (void)setName:(id)name;	// 0x328a4125
// declared property setter: - (void)setOpenSessionPending:(BOOL)pending;	// 0x328a4395
// declared property setter: - (void)setProductKind:(id)kind;	// 0x328a4165
// declared property setter: - (void)setTransportType:(id)type;	// 0x328a41a5
// declared property setter: - (void)setUUIDString:(id)string;	// 0x328a42a5
// declared property setter: - (void)setUsbLocationID:(int)anId;	// 0x328a41e5
// declared property setter: - (void)setUsbProductID:(int)anId;	// 0x328a4225
// declared property setter: - (void)setUsbVendorID:(int)anId;	// 0x328a4265
// declared property getter: - (id)transportType;	// 0x328a4185
// declared property getter: - (int)usbLocationID;	// 0x328a41c5
// declared property getter: - (int)usbProductID;	// 0x328a4205
// declared property getter: - (int)usbVendorID;	// 0x328a4245
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x328a43dd
@end

