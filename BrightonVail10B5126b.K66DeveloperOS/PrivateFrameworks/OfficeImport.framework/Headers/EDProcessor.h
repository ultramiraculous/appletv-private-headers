/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDWorkbook, NSMutableArray;

@interface EDProcessor : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDResources *mResources;	// 8 = 0x8
	NSMutableArray *mObjects;	// 12 = 0xc
}
- (id)initWithWorkbook:(id)workbook;	// 0x34891db5
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x34a2b55d
- (void)applyProcessorWithSheet:(id)sheet;	// 0x348b5ca9
- (void)dealloc;	// 0x348b6e59
- (bool)isObjectSupported:(id)supported;	// 0x34a2b559
- (void)markObjectForPostProcessing:(id)postProcessing;	// 0x3489fae1
@end
