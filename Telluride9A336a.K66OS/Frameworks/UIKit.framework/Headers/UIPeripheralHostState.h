/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostState : NSObject {
@private
	UIPeripheralAnimationGeometry _geometry;	// 4 = 0x4
	NSDictionary *_screenGeometry;	// 64 = 0x40
	BOOL _inPositionIsDestination;	// 68 = 0x44
}
@property(assign, nonatomic) UIPeripheralAnimationGeometry geometry;	// G=0x353ca2c5; S=0x351d4e4d; @synthesize=_geometry
@property(assign, nonatomic) BOOL inPositionIsDestination;	// G=0x353ca321; S=0x351d4eb5; @synthesize=_inPositionIsDestination
@property(retain, nonatomic) NSDictionary *screenGeometry;	// G=0x351d591d; S=0x351d55b9; @synthesize=_screenGeometry
+ (id)stateWithGeometry:(UIPeripheralAnimationGeometry)geometry inPositionIsDestination:(BOOL)positionIsDestination;	// 0x351d4d85
- (void)dealloc;	// 0x351d5a41
// declared property getter: - (UIPeripheralAnimationGeometry)geometry;	// 0x353ca2c5
// declared property getter: - (BOOL)inPositionIsDestination;	// 0x353ca321
// declared property getter: - (id)screenGeometry;	// 0x351d591d
// declared property setter: - (void)setGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x351d4e4d
// declared property setter: - (void)setInPositionIsDestination:(BOOL)positionIsDestination;	// 0x351d4eb5
// declared property setter: - (void)setScreenGeometry:(id)geometry;	// 0x351d55b9
@end

