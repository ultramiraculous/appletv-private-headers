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
	id _privateData;	// 4 = 0x4
}
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x341f1d49; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x341f1d09; S=0x341f1d29; 
@property(readonly, assign) NSArray *devices;	// G=0x341f1ead; 
- (id)init;	// 0x341f1bb1
- (void)dealloc;	// 0x341f1c69
// declared property getter: - (id)delegate;	// 0x341f1d09
// declared property getter: - (id)devices;	// 0x341f1ead
- (void)finalize;	// 0x341f1cb9
- (id)internalDevices;	// 0x341f1ef5
// declared property getter: - (BOOL)isBrowsing;	// 0x341f1d49
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x341f1d29
- (int)start;	// 0x341f1d6d
- (void)stop;	// 0x341f1e39
@end
