/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, NSMutableDictionary;

@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
	BOOL isReady_;	// 4 = 0x4
	BOOL isError_;	// 5 = 0x5
	NSMutableDictionary *eventListeners_;	// 8 = 0x8
	NSMutableDictionary *syncData_;	// 12 = 0xc
	NSMutableDictionary *setPropertyPending_;	// 16 = 0x10
	NSMutableDictionary *setPropertyCurrent_;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x4d841d; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x4d8429; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x4d8441; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x4d8435; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x4d8411; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x4d9991; S=0x4d99a5; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x4d9961; S=0x4d9979; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x4d9931; S=0x4d9949; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x4d99fd; S=0x4d9a11; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x4d99d9; S=0x4d99ed; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x4d99b5; S=0x4d99c9; @synthesize=syncData_
+ (id)sharedInstance;	// 0x4d819d
- (id)init;	// 0x4d8289
// declared property getter: - (id)ACTION_ID;	// 0x4d841d
// declared property getter: - (id)COMPLETE;	// 0x4d8429
// declared property getter: - (id)ERROR;	// 0x4d8441
// declared property getter: - (id)NETWORK_ERROR;	// 0x4d8435
// declared property getter: - (id)READY;	// 0x4d8411
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x4d8dc1
- (void)addEventListener:(id)listener name:(id)name;	// 0x4d8d69
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x4d90cd
- (void)dealloc;	// 0x4d8369
// declared property getter: - (id)eventListeners;	// 0x4d9991
- (id)getSubObject:(id)object;	// 0x4d9899
- (void)gotEvent:(id)event;	// 0x4d844d
- (BOOL)handleEvent:(id)event;	// 0x4d8c79
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x4d9601
// declared property getter: - (BOOL)isError;	// 0x4d9961
// declared property getter: - (BOOL)isReady;	// 0x4d9931
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x4d9225
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x4d8eed
- (void)removeEventListener:(id)listener name:(id)name;	// 0x4d8d95
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x4d99a5
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x4d9979
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x4d9949
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x4d932d
// declared property getter: - (id)setPropertyCurrent;	// 0x4d99fd
// declared property getter: - (id)setPropertyPending;	// 0x4d99d9
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x4d9a11
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x4d99ed
// declared property setter: - (void)setSyncData:(id)data;	// 0x4d99c9
// declared property getter: - (id)syncData;	// 0x4d99b5
- (id)syncDataForObject:(id)object;	// 0x4d9509
@end

