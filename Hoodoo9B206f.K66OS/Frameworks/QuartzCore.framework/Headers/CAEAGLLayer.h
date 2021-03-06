/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "EAGLDrawable.h"
#import "CALayer.h"

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
@private
	CAEAGLNativeWindow *_win;	// 48 = 0x30
}
@property(copy) NSDictionary *drawableProperties;	// G=0x30864f0d; S=0x30864f05; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x30864e49
+ (id)defaultValueForKey:(id)key;	// 0x30864ea1
- (void)_display;	// 0x30864f15
- (void)dealloc;	// 0x30864f59
- (void)didChangeValueForKey:(id)key;	// 0x30865155
// declared property getter: - (id)drawableProperties;	// 0x30864f0d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x30864dc1
- (EAGLNativeWindowObject *)nativeWindow;	// 0x30864fd1
// declared property setter: - (void)setDrawableProperties:(id)properties;	// 0x30864f05
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x30864ded
@end

