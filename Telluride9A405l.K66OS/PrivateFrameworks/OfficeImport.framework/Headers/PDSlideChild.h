/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase {
@private
	BOOL mShowMasterPlaceholderAnimations;	// 32 = 0x20
	BOOL mShowMasterShapes;	// 33 = 0x21
	OADThemeOverrides *mThemeOverrides;	// 36 = 0x24
	OADColorMap *mColorMapOverride;	// 40 = 0x28
}
@property(retain) id colorMapOverride;	// G=0x30c6c385; S=0x30da81d5; converted property
@property(assign) BOOL showMasterPlaceholderAnimations;	// G=0x30dfc335; S=0x30d93a05; converted property
@property(assign) BOOL showMasterShapes;	// G=0x30c65629; S=0x30beb55d; converted property
- (id)init;	// 0x30beae8d
- (id)colorMap;	// 0x30c6c345
// converted property getter: - (id)colorMapOverride;	// 0x30c6c385
- (id)colorScheme;	// 0x30c6c3c5
- (void)dealloc;	// 0x30c6e1b1
- (void)doneWithContent;	// 0x30dfc3a1
- (id)drawingTheme;	// 0x30dfc345
- (id)fontScheme;	// 0x30d93d0d
// converted property setter: - (void)setColorMapOverride:(id)override;	// 0x30da81d5
// converted property setter: - (void)setShowMasterPlaceholderAnimations:(BOOL)animations;	// 0x30d93a05
// converted property setter: - (void)setShowMasterShapes:(BOOL)shapes;	// 0x30beb55d
// converted property getter: - (BOOL)showMasterPlaceholderAnimations;	// 0x30dfc335
// converted property getter: - (BOOL)showMasterShapes;	// 0x30c65629
- (id)styleMatrix;	// 0x30db0d4d
- (id)themeOverrides;	// 0x30c6c40d
@end
