/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x31096259
- (void)addProcessorClass:(Class)aClass;	// 0x310963dd
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x310ba205
- (void)dealloc;	// 0x310c4f41
- (bool)hasProcessors;	// 0x3122fb91
- (void)markObject:(id)object processor:(Class)processor;	// 0x310a4079
- (void)removeAllObjects;	// 0x310963bd
- (void)removeProcessorClass:(Class)aClass;	// 0x3122fbbd
@end
