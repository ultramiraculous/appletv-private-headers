/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class WDParagraph;

@interface WDRun : NSObject {
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x319496e9
- (id)initWithParagraph:(id)paragraph;	// 0x3174a505
- (void)clearProperties;	// 0x31949705
- (void)dealloc;	// 0x3174e1e9
- (BOOL)isEmpty;	// 0x31949701
- (id)paragraph;	// 0x3175f12d
- (int)runType;	// 0x319496e5
@end
