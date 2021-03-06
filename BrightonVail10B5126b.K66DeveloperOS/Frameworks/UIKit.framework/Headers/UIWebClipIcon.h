/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSURL;

@interface UIWebClipIcon : NSObject {
	BOOL _precomposed;	// 4 = 0x4
	BOOL _siteWide;	// 5 = 0x5
	CGSize _bestSize;	// 8 = 0x8
	NSURL *_url;	// 16 = 0x10
}
@property(assign, nonatomic) CGSize bestSize;	// G=0x32d7d339; S=0x32d7d351; @synthesize=_bestSize
@property(assign, nonatomic, getter=isPrecomposed) BOOL precomposed;	// G=0x32d7d2f9; S=0x32d7d309; @synthesize=_precomposed
@property(assign, nonatomic, getter=isSiteWide) BOOL siteWide;	// G=0x32d7d319; S=0x32d7d329; @synthesize=_siteWide
@property(retain, nonatomic) NSURL *url;	// G=0x32d7d365; S=0x32d7d375; @synthesize=_url
// declared property getter: - (CGSize)bestSize;	// 0x32d7d339
- (int)compare:(id)compare preferringDeviceIconSizes:(BOOL)sizes;	// 0x32d7d109
- (void)dealloc;	// 0x32d7d0bd
// declared property getter: - (BOOL)isPrecomposed;	// 0x32d7d2f9
// declared property getter: - (BOOL)isSiteWide;	// 0x32d7d319
// declared property setter: - (void)setBestSize:(CGSize)size;	// 0x32d7d351
// declared property setter: - (void)setPrecomposed:(BOOL)precomposed;	// 0x32d7d309
// declared property setter: - (void)setSiteWide:(BOOL)wide;	// 0x32d7d329
// declared property setter: - (void)setUrl:(id)url;	// 0x32d7d375
// declared property getter: - (id)url;	// 0x32d7d365
@end

