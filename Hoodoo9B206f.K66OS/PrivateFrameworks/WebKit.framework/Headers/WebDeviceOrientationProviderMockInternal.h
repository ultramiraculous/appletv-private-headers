/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject {
@private
	OwnPtr<WebCore::DeviceOrientationClientMock> m_core;	// 4 = 0x4
}
- (id)init;	// 0x30d85719
- (id).cxx_construct;	// 0x30d856e5
- (void).cxx_destruct;	// 0x30d856f9
- (id)lastOrientation;	// 0x30d8584d
- (void)setController:(DeviceOrientationController *)controller;	// 0x30d856a5
- (void)setOrientation:(id)orientation;	// 0x30d85975
- (void)startUpdating;	// 0x30d856bd
- (void)stopUpdating;	// 0x30d856d1
@end

