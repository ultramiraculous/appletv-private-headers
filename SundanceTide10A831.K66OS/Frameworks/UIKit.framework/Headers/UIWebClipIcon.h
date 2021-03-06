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
@property(assign, nonatomic) CGSize bestSize;	// G=0x31e6ce09; S=0x31e6ce21; @synthesize=_bestSize
@property(assign, nonatomic, getter=isPrecomposed) BOOL precomposed;	// G=0x31e6cdc9; S=0x31e6cdd9; @synthesize=_precomposed
@property(assign, nonatomic, getter=isSiteWide) BOOL siteWide;	// G=0x31e6cde9; S=0x31e6cdf9; @synthesize=_siteWide
@property(retain, nonatomic) NSURL *url;	// G=0x31e6ce35; S=0x31e6ce45; @synthesize=_url
// declared property getter: - (CGSize)bestSize;	// 0x31e6ce09
- (int)compare:(id)compare preferringDeviceIconSizes:(BOOL)sizes;	// 0x31e6cbd9
- (void)dealloc;	// 0x31e6cb8d
// declared property getter: - (BOOL)isPrecomposed;	// 0x31e6cdc9
// declared property getter: - (BOOL)isSiteWide;	// 0x31e6cde9
// declared property setter: - (void)setBestSize:(CGSize)size;	// 0x31e6ce21
// declared property setter: - (void)setPrecomposed:(BOOL)precomposed;	// 0x31e6cdd9
// declared property setter: - (void)setSiteWide:(BOOL)wide;	// 0x31e6cdf9
// declared property setter: - (void)setUrl:(id)url;	// 0x31e6ce45
// declared property getter: - (id)url;	// 0x31e6ce35
@end

