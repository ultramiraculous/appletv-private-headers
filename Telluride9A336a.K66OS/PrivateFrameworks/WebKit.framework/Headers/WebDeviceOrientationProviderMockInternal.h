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
- (id)init;	// 0x364f5b6d
- (id).cxx_construct;	// 0x364f5b39
- (void).cxx_destruct;	// 0x364f5b4d
- (id)lastOrientation;	// 0x364f5ca1
- (void)setController:(DeviceOrientationController *)controller;	// 0x364f5af9
- (void)setOrientation:(id)orientation;	// 0x364f5dc9
- (void)startUpdating;	// 0x364f5b11
- (void)stopUpdating;	// 0x364f5b25
@end

