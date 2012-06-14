/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
@private
	id _privateData;	// 4 = 0x4
}
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x30c02785; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x30c02741; S=0x30c02761; 
@property(readonly, assign) NSArray *devices;	// G=0x30c0281d; 
- (id)init;	// 0x30c0296d
- (void)dealloc;	// 0x30c02b51
// declared property getter: - (id)delegate;	// 0x30c02741
// declared property getter: - (id)devices;	// 0x30c0281d
- (void)finalize;	// 0x30c02afd
- (id)internalDevices;	// 0x30c02869
// declared property getter: - (BOOL)isBrowsing;	// 0x30c02785
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30c02761
- (int)start;	// 0x30c02a2d
- (void)stop;	// 0x30c027a9
@end
