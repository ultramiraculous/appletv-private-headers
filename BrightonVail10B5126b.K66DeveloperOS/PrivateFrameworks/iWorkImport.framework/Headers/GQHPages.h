/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQPagesGenerator.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHPages : NSObject <GQPagesGenerator> {
}
+ (int)beginPublication:(id)publication state:(id)state;	// 0x368d537d
+ (int)endPublication:(id)publication state:(id)state;	// 0x368d5381
+ (Class)enterBodyStorage:(id)storage;	// 0x368d5f41
+ (Class)enterMainDrawablesForPage:(unsigned)page state:(id)state;	// 0x368d5f25
+ (int)handleFooters:(CFArrayRef)footers state:(id)state;	// 0x368d5f8d
+ (int)handleHeaders:(CFArrayRef)headers state:(id)state;	// 0x368d5f5d
+ (int)handlePageSetup:(id)setup state:(id)state;	// 0x368d56e9
+ (void)handlePagesOrders:(id)orders;	// 0x368d640d
+ (int)handleSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages state:(id)state;	// 0x368d5fbd
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x368d5f21
+ (void)handleZOrder:(unsigned)order cssClassName:(CFStringRef)name state:(id)state;	// 0x368d63c5
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)publication state:(id)state;	// 0x368d6029
+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)publication state:(id)state;	// 0x368d612d
+ (void)mapHeaderOrFooter:(id)footer isHeader:(BOOL)header toPublication:(id)publication state:(id)state;	// 0x368d64e1
+ (int)setCurrentPageIndex:(int)index state:(id)state;	// 0x368d5ff9
@end

