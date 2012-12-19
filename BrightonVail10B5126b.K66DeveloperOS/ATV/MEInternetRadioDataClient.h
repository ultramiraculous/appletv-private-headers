/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MEInternetRadioDataClient : ATVDataClient {
	ITTunerCategoryList *_categories;	// 4 = 0x4
	AppContext *_appContext;	// 8 = 0x8
	ATVDataQuery *_stationQuery;	// 12 = 0xc
	id _stationQueryCompletionBlock;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataQuery *stationQuery;	// G=0x42339; S=0x42349; @synthesize=_stationQuery
@property(copy) id stationQueryCompletionBlock;	// G=0x42371; S=0x42385; @synthesize=_stationQueryCompletionBlock
+ (id)internetRadioDataClientWithAppContext:(AppContext *)appContext;	// 0x40e21
- (id)initWithAppContext:(AppContext *)appContext;	// 0x40f9d
- (void).cxx_destruct;	// 0x42395
- (BOOL)applyFilter:(id)filter toObject:(id)object;	// 0x42121
- (void)categoriesLoaded:(ITTunerCategoryList *)loaded withStatus:(long)status;	// 0x410ed
- (id)collectionForCategory:(ITTunerCategoryInfo *)category;	// 0x420d1
- (void)concreteDataClientConnect;	// 0x41685
- (void)concreteDataClientDisconnect;	// 0x416d5
- (void)dealloc;	// 0x40fe9
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x417c5
- (id)itemForStation:(ITTunerStationInfo *)station categoryID:(unsigned long)anId;	// 0x41fc1
- (BOOL)processQueryAsync:(id)async;	// 0x417a5
// declared property setter: - (void)setStationQuery:(id)query;	// 0x42349
// declared property setter: - (void)setStationQueryCompletionBlock:(id)block;	// 0x42385
// declared property getter: - (id)stationQuery;	// 0x42339
// declared property getter: - (id)stationQueryCompletionBlock;	// 0x42371
- (void)stationsLoaded:(ITTunerStationList *)loaded withStatus:(long)status;	// 0x41125
- (BOOL)supportsProperty:(id)property;	// 0x41771
@end
