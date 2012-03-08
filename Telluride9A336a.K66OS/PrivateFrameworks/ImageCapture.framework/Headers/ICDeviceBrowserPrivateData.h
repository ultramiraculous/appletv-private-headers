/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _browsing;	// 8 = 0x8
	NSMutableArray *_internalDevices;	// 12 = 0xc
}
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x301a2719; S=0x301a2729; @synthesize=_browsing
@property(assign) id delegate;	// G=0x301a2739; S=0x301a2749; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x301a2919; S=0x301a28f5; @synthesize=_internalDevices
- (void)dealloc;	// 0x301a28a1
// declared property getter: - (id)delegate;	// 0x301a2739
- (void)finalize;	// 0x301a2931
// declared property getter: - (id)internalDevices;	// 0x301a2919
// declared property getter: - (BOOL)isBrowsing;	// 0x301a2719
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x301a2729
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x301a2749
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x301a28f5
@end
