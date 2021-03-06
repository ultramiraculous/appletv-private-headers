/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "iGaiaGrapeSystemUi.h"
#import <NSObject.h> // Unknown library

@protocol iGaiaProject;

@interface GrapeCal_GUI_pageController : NSObject <iGaiaGrapeSystemUi> {
	id<iGaiaProject> proj;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x30419339
- (id)init;	// 0x30419419
- (void)SetProject:(id)project;	// 0x30419459
- (void)addContentsToMainLayer:(id)mainLayer;	// 0x304194c9
- (void)showModuleInMainView:(id)mainView;	// 0x30419469
@end

