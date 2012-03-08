/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTDurationCell : GQDTCell {
@private
	double mValue;	// 16 = 0x10
	GQDTComputedFormatSpec *mComputedFormat;	// 24 = 0x18
	CFBundleRef mProcessorBundle;	// 28 = 0x1c
}
- (CFStringRef)createStringValue;	// 0x359c175d
- (void)dealloc;	// 0x359c1815
- (int)readAttributesForDurationCell:(xmlTextReader *)durationCell;	// 0x359c18f1
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x359c174d
@end
