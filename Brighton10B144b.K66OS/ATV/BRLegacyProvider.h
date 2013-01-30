/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x2eab7d; S=0x2eab6d; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x2eb3d5
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x2eb2b9
- (void)_updateDividers;	// 0x2eb161
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2eab8d
- (id)controlFactory;	// 0x2eaeb1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2eb041
- (id)dataAtIndex:(long)index;	// 0x2eaf8d
- (long)dataCount;	// 0x2eaeb5
// converted property getter: - (id)datasource;	// 0x2eab7d
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x2eb02d
- (void)dealloc;	// 0x2eab21
- (id)hashForDataAtIndex:(long)index;	// 0x2eafd1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2eb0a9
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x2eb01d
- (void)removeDividerAtIndex:(long)index;	// 0x2ead81
- (void)removeDividers;	// 0x2eae6d
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2eab6d
@end
