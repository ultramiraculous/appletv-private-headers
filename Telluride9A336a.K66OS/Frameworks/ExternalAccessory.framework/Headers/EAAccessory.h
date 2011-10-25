/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSArray, NSString, EAAccessoryInternal;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject {
@private
	EAAccessoryInternal *_internal;	// 4 = 0x4
}
@property(assign) CFAccessoryRef cfAccessory;	// G=0x3253ea4d; S=0x3253ea6d; converted property
@property(assign) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x3253ea8d; S=0x3253eaad; converted property
@property(assign) void *cfAccessoryPortPropertyContext;	// G=0x3253eacd; S=0x3253eaed; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x3253e3a1; 
@property(readonly, assign, nonatomic) unsigned connectionID;	// G=0x3253e3c5; 
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x3253e601; S=0x3253e4a5; 
@property(assign) unsigned eqIndex;	// G=0x3253ed1d; S=0x3253ecd5; converted property
@property(retain) id eqNames;	// G=0x3253ecb5; S=0x3253ec95; converted property
@property(readonly, assign, nonatomic) NSString *firmwareRevision;	// G=0x3253e465; 
@property(readonly, assign, nonatomic) NSString *hardwareRevision;	// G=0x3253e485; 
@property(assign) int iPodOutOptionsMask;	// G=0x3253f0a1; S=0x3253f0c1; converted property
@property(readonly, assign, nonatomic) NSString *manufacturer;	// G=0x3253e3e5; 
@property(readonly, assign, nonatomic) NSString *modelNumber;	// G=0x3253e425; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3253e405; 
@property(readonly, assign, nonatomic) NSArray *protocolStrings;	// G=0x3253e4c5; 
@property(readonly, assign, nonatomic) NSString *serialNumber;	// G=0x3253e445; 
- (id)init;	// 0x3253e1b5
- (void)_addSession:(id)session;	// 0x3253e851
- (void)_endSession:(unsigned)session;	// 0x3253e965
- (id)_initWithAccessory:(id)accessory;	// 0x3253e621
- (void)_openCompleteForSession:(unsigned)session;	// 0x3253e891
- (id)_protocolIDForProtocolString:(id)protocolString;	// 0x3253e815
- (void)_removeSession:(id)session;	// 0x3253e871
- (void)_setConnected:(BOOL)connected;	// 0x3253e7f5
- (id)_shortDescription;	// 0x3253e7c9
- (void)_updateAccessoryInfo:(id)info;	// 0x3253e675
- (BOOL)accessoryHasNMEASentencesAvailable;	// 0x3253ed65
- (id)allPublicProtocolStrings;	// 0x3253eb95
- (id)audioPorts;	// 0x3253eb75
// converted property getter: - (CFAccessoryRef)cfAccessory;	// 0x3253ea4d
// converted property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x3253ea8d
// converted property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x3253eacd
- (int)classType;	// 0x3253eb55
// declared property getter: - (unsigned)connectionID;	// 0x3253e3c5
- (void)dealloc;	// 0x3253e1ed
// declared property getter: - (id)delegate;	// 0x3253e601
- (id)description;	// 0x3253e239
// converted property getter: - (unsigned)eqIndex;	// 0x3253ed1d
// converted property getter: - (id)eqNames;	// 0x3253ecb5
// declared property getter: - (id)firmwareRevision;	// 0x3253e465
- (BOOL)getEphemerisExpirationInterval:(double *)interval;	// 0x3253eec9
- (BOOL)getEphemerisRecommendRefreshInterval:(double *)interval;	// 0x3253ee6d
- (BOOL)getEphemerisURL:(id *)url;	// 0x3253ee21
- (BOOL)getNMEASentence:(id *)sentence;	// 0x3253ed9d
// declared property getter: - (id)hardwareRevision;	// 0x3253e485
// converted property getter: - (int)iPodOutOptionsMask;	// 0x3253f0a1
// declared property getter: - (BOOL)isConnected;	// 0x3253e3a1
// declared property getter: - (id)manufacturer;	// 0x3253e3e5
// declared property getter: - (id)modelNumber;	// 0x3253e425
// declared property getter: - (id)name;	// 0x3253e405
- (id)preferredApp;	// 0x3253eb35
// declared property getter: - (id)protocolStrings;	// 0x3253e4c5
- (BOOL)sendEphemeris:(id)ephemeris;	// 0x3253efa9
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned)week gpsTOW:(double)tow latitude:(double)latitude longitude:(double)longitude accuracy:(unsigned short)accuracy;	// 0x3253ef59
- (BOOL)sendGpsWeek:(unsigned)week gpsTOW:(double)tow;	// 0x3253ef25
// declared property getter: - (id)serialNumber;	// 0x3253e445
// converted property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x3253ea6d
// converted property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x3253eaad
// converted property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x3253eaed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3253e4a5
// converted property setter: - (void)setEqIndex:(unsigned)index;	// 0x3253ecd5
// converted property setter: - (void)setEqNames:(id)names;	// 0x3253ec95
// converted property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x3253f0c1
- (BOOL)setNMEASentencesToFilter:(id)filter;	// 0x3253ede9
- (BOOL)supportsAccessibility;	// 0x3253efd9
- (BOOL)supportsLocation;	// 0x3253ed3d
- (BOOL)supportsPublicIap;	// 0x3253eb0d
- (void)updateSystemProperty:(int)property withValue:(id)value;	// 0x3253f001
@end

