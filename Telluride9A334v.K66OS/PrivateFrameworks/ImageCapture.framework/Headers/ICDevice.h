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
@property(copy) NSString *UUIDString;	// G=0x3222bb75; S=0x3222bb95; 
@property(assign) BOOL autoOpenSession;	// G=0x3222bc01; S=0x3222bc6d; 
@property(assign) BOOL closeSessionPending;	// G=0x3222bc49; S=0x3222bcb5; 
@property(assign) id<ICDeviceDelegate> delegate;	// G=0x3222b955; S=0x3222b975; 
@property(assign) DeviceManager *deviceManager;	// G=0x3222b999; S=0x3222b9b9; 
@property(assign) BOOL hasOpenSession;	// G=0x3222bbb9; S=0x3222bbdd; 
@property(readonly, assign) CGImageRef icon;	// G=0x3222bd1d; 
@property(copy) NSString *name;	// G=0x3222b9dd; S=0x3222b9fd; 
@property(assign) BOOL openSessionPending;	// G=0x3222bc25; S=0x3222bc91; 
@property(copy) NSString *productKind;	// G=0x3222ba21; S=0x3222ba41; 
@property(copy) NSString *transportType;	// G=0x3222ba65; S=0x3222ba85; 
@property(assign) int usbLocationID;	// G=0x3222baa9; S=0x3222bac9; 
@property(assign) int usbProductID;	// G=0x3222baed; S=0x3222bb0d; 
@property(assign) int usbVendorID;	// G=0x3222bb31; S=0x3222bb51; 
- (id)init;	// 0x3222bf75
// declared property getter: - (id)UUIDString;	// 0x3222bb75
// declared property getter: - (BOOL)autoOpenSession;	// 0x3222bc01
// declared property getter: - (BOOL)closeSessionPending;	// 0x3222bc49
- (void)dealloc;	// 0x3222c055
// declared property getter: - (id)delegate;	// 0x3222b955
- (id)description;	// 0x3222b7b5
// declared property getter: - (id)deviceManager;	// 0x3222b999
- (void)finalize;	// 0x3222c001
- (void)handleCommandCompletionNotification:(id)notification;	// 0x3222b781
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x3222b785
// declared property getter: - (BOOL)hasOpenSession;	// 0x3222bbb9
// declared property getter: - (CGImageRef)icon;	// 0x3222bd1d
// declared property getter: - (id)name;	// 0x3222b9dd
// declared property getter: - (BOOL)openSessionPending;	// 0x3222bc25
// declared property getter: - (id)productKind;	// 0x3222ba21
- (void)requestCloseSession;	// 0x3222b77d
- (void)requestOpenSession;	// 0x3222b779
// declared property setter: - (void)setAutoOpenSession:(BOOL)session;	// 0x3222bc6d
// declared property setter: - (void)setCloseSessionPending:(BOOL)pending;	// 0x3222bcb5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3222b975
// declared property setter: - (void)setDeviceManager:(id)manager;	// 0x3222b9b9
// declared property setter: - (void)setHasOpenSession:(BOOL)session;	// 0x3222bbdd
// declared property setter: - (void)setName:(id)name;	// 0x3222b9fd
// declared property setter: - (void)setOpenSessionPending:(BOOL)pending;	// 0x3222bc91
// declared property setter: - (void)setProductKind:(id)kind;	// 0x3222ba41
// declared property setter: - (void)setTransportType:(id)type;	// 0x3222ba85
// declared property setter: - (void)setUUIDString:(id)string;	// 0x3222bb95
// declared property setter: - (void)setUsbLocationID:(int)anId;	// 0x3222bac9
// declared property setter: - (void)setUsbProductID:(int)anId;	// 0x3222bb0d
// declared property setter: - (void)setUsbVendorID:(int)anId;	// 0x3222bb51
// declared property getter: - (id)transportType;	// 0x3222ba65
// declared property getter: - (int)usbLocationID;	// 0x3222baa9
// declared property getter: - (int)usbProductID;	// 0x3222baed
// declared property getter: - (int)usbVendorID;	// 0x3222bb31
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3222bcd9
@end

