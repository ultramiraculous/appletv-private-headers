/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor {
}
- (void)applyCategoryReorderingPreprocessor:(id)preprocessor;	// 0x3457273d
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x344e7591
- (void)applySeriesReorderingPreprocessor:(id)preprocessor;	// 0x345da9a9
- (bool)isObjectSupported:(id)supported;	// 0x344e3b31
- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)seriesReorderingPreprocessor isCategoryOrderReversed:(bool)reversed;	// 0x344e77ad
- (void)reorderCategoryAndSeries:(id)series sheet:(id)sheet clearAxisReversedFlag:(bool)flag;	// 0x344e75b5
- (void)reorderData:(id)data dataPointCount:(unsigned)count byRow:(bool)row;	// 0x345728b9
- (void)reorderDataFormula:(id)formula dataPointCount:(unsigned)count byRow:(bool)row;	// 0x3457299d
- (void)reorderDataValues:(id)values dataPointCount:(unsigned)count;	// 0x34572931
- (void)reorderSeriesCategory:(id)category dataPointCount:(unsigned)count byRow:(bool)row;	// 0x34572831
- (void)reorderValueProperties:(id)properties dataPointCount:(unsigned)count;	// 0x34572bc9
@end

