/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPPadding.h"


__attribute__((visibility("hidden")))
@interface GQDSLPageMargins : GQDWPPadding {
@private
	float mHeader;	// 20 = 0x14
	float mFooter;	// 24 = 0x18
}
@property(assign) float footer;	// G=0x32bd618d; S=0x32bd619d; converted property
@property(assign) float header;	// G=0x32bd616d; S=0x32bd617d; converted property
// converted property getter: - (float)footer;	// 0x32bd618d
// converted property getter: - (float)header;	// 0x32bd616d
- (void)setBottom:(float)bottom;	// 0x32bd61c1
// converted property setter: - (void)setFooter:(float)footer;	// 0x32bd619d
// converted property setter: - (void)setHeader:(float)header;	// 0x32bd617d
- (void)setLeft:(float)left;	// 0x32bd61d5
- (void)setRight:(float)right;	// 0x32bd61e9
- (void)setTop:(float)top;	// 0x32bd61ad
@end

