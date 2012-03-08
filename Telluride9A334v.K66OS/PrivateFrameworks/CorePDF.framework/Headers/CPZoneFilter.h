/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPPage;

@interface CPZoneFilter : NSObject {
	CPPage *page;	// 4 = 0x4
	double minArea;	// 8 = 0x8
}
+ (void)filterZonesInPage:(id)page;	// 0x307d93c5
- (id)initWithPage:(id)page;	// 0x307d9339
- (void)filterZonesInZone:(id)zone;	// 0x307d9811
- (void)findBackgroundGraphicsInZone:(id)zone;	// 0x307d96b5
- (void)findUsedGraphicsInZone:(id)zone;	// 0x307d9485
@end
