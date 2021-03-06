/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "BRProvider.h"
#import "BRControlFactory.h"

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x2afd45; S=0x2afd35; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x2b059d
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x2b0481
- (void)_updateDividers;	// 0x2b0329
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2afd55
- (id)controlFactory;	// 0x2b0079
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2b0209
- (id)dataAtIndex:(long)index;	// 0x2b0155
- (long)dataCount;	// 0x2b007d
// converted property getter: - (id)datasource;	// 0x2afd45
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x2b01f5
- (void)dealloc;	// 0x2afce9
- (id)hashForDataAtIndex:(long)index;	// 0x2b0199
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2b0271
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x2b01e5
- (void)removeDividerAtIndex:(long)index;	// 0x2aff49
- (void)removeDividers;	// 0x2b0035
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2afd35
@end

