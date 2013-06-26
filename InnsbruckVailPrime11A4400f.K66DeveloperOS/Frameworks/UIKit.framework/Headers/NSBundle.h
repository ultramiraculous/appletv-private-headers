/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <GraphicsServices/NSBundle.h>


@interface NSBundle (UINSBundleAdditions)
- (id)loadNibNamed:(id)named owner:(id)owner options:(id)options;	// 0x2f55a6c9
@end

@interface NSBundle (UINSBundleLocalizableStringAdditions)
+ (id)currentNibLoadingBundle;	// 0x2f6b9141
+ (id)currentNibPath;	// 0x2f6b9101
+ (void)popNibLoadingBundle;	// 0x2f559e85
+ (void)popNibPath;	// 0x2f559e69
+ (void)pushNibLoadingBundle:(id)bundle;	// 0x2f552dbd
+ (void)pushNibPath:(id)path;	// 0x2f552e25
@end

@interface NSBundle (UIKeyboardFactoryAdditions)
+ (id)_rivenBundle;	// 0x2f801035
+ (id)_rivenFactory;	// 0x2f8010e1
+ (id)_typologyBundle;	// 0x2f800fa1
@end
