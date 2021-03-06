/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNodeContext.h"
#import <NSObject.h> // Unknown library

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
@private
	EBReaderSheetState *mSheetState;	// 4 = 0x4
	unsigned mSheetIndex;	// 8 = 0x8
}
- (id)initWithSheetIndex:(unsigned)sheetIndex state:(id)state;	// 0x3520d109
- (void)dealloc;	// 0x3521da15
- (bool)loadDelayedNode:(id)node;	// 0x3520dde1
@end

