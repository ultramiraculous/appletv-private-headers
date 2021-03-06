/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMDirectlyObservableObjectObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class IMHandle, NSMutableSet, NSString, NSSet, NSMutableArray, NSArray;

@interface IMPresence : XXUnknownSuperclass <IMDirectlyObservableObjectObserver> {
	NSMutableArray *_imHandles;	// 8 = 0x8
	NSMutableSet *_imHandlesSet;	// 12 = 0xc
	NSString *_statusMessage;	// 16 = 0x10
	IMHandle *_mostAvailableIMHandle;	// 20 = 0x14
	BOOL _quiet;	// 24 = 0x18
	unsigned _previousStatus;	// 28 = 0x1c
	unsigned _status;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x30398269; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x303982e9; 
@property(readonly, assign, nonatomic) NSString *fullName;	// G=0x303982a9; 
@property(readonly, assign, nonatomic) NSSet *groups;	// G=0x30398309; 
@property(readonly, assign, nonatomic) NSSet *imHandleSet;	// G=0x3039804d; @synthesize=_imHandlesSet
@property(readonly, assign, nonatomic) NSArray *imHandles;	// G=0x3039803d; @synthesize=_imHandles
@property(readonly, assign, nonatomic) BOOL isMobile;	// G=0x303981c5; 
@property(assign, nonatomic) BOOL isQuiet;	// G=0x3039805d; S=0x3039806d; @synthesize=_quiet
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x303982c9; 
@property(readonly, assign, nonatomic) NSString *mobileDeviceName;	// G=0x303981a5; 
@property(readonly, assign, nonatomic) IMHandle *mostAvailableIMHandle;	// G=0x3039802d; @synthesize=_mostAvailableIMHandle
@property(readonly, assign, nonatomic) NSString *nameAndEmail;	// G=0x30398249; 
@property(readonly, assign, nonatomic) NSString *nameOfStatus;	// G=0x303981e9; 
@property(readonly, assign, nonatomic) int numberOfIMHandles;	// G=0x3039834d; 
@property(readonly, assign, nonatomic) unsigned previousStatus;	// G=0x3039800d; @synthesize=_previousStatus
@property(readonly, assign, nonatomic) NSString *previousStatusMessage;	// G=0x30398209; 
@property(readonly, assign, nonatomic) NSString *shortName;	// G=0x30398289; 
@property(readonly, assign, nonatomic) unsigned status;	// G=0x3039801d; @synthesize=_status
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x30398229; 
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;	// G=0x30398165; 
@property(readonly, assign, nonatomic) double timeSinceWentOffline;	// G=0x30398185; 
+ (id)notifications;	// 0x30398949
+ (id)selectors;	// 0x30398885
- (id)init;	// 0x30398b01
- (BOOL)_fullRecache;	// 0x30398481
- (void)_imHandleCapabilitiesChanged:(id)changed;	// 0x303987dd
- (void)_imHandleCertsChanged:(id)changed;	// 0x30398629
- (void)_imHandleExtraPropsChanged:(id)changed;	// 0x303986a1
- (void)_imHandleGroupsChanged:(id)changed;	// 0x303986e5
- (void)_imHandleInfoChanged:(id)changed;	// 0x30398729
- (void)_imHandleMobileChanged:(id)changed;	// 0x3039865d
- (void)_imHandlePictureChanged:(id)changed;	// 0x3039875d
- (void)_imHandleSortOrderChanged:(id)changed;	// 0x303985f5
- (void)_imHandleStatusChanged:(id)changed;	// 0x30398791
- (void)_observeIMHandle:(id)handle;	// 0x30398855
- (void)_setMostAvailableIMHandle:(id)handle;	// 0x303985b9
- (void)_unobserveIMHandle:(id)handle;	// 0x30398825
- (BOOL)addIMHandle:(id)handle;	// 0x303983e9
- (BOOL)canAddIMHandle:(id)handle;	// 0x30398009
- (BOOL)containsIMHandle:(id)handle;	// 0x30398329
- (void)dealloc;	// 0x30398a49
- (id)description;	// 0x3039807d
// declared property getter: - (id)displayName;	// 0x30398269
// declared property getter: - (id)firstName;	// 0x303982e9
// declared property getter: - (id)fullName;	// 0x303982a9
// declared property getter: - (id)groups;	// 0x30398309
// declared property getter: - (id)imHandleSet;	// 0x3039804d
// declared property getter: - (id)imHandles;	// 0x3039803d
// declared property getter: - (BOOL)isMobile;	// 0x303981c5
// declared property getter: - (BOOL)isQuiet;	// 0x3039805d
// declared property getter: - (id)lastName;	// 0x303982c9
// declared property getter: - (id)mobileDeviceName;	// 0x303981a5
// declared property getter: - (id)mostAvailableIMHandle;	// 0x3039802d
// declared property getter: - (id)nameAndEmail;	// 0x30398249
// declared property getter: - (id)nameOfStatus;	// 0x303981e9
// declared property getter: - (int)numberOfIMHandles;	// 0x3039834d
- (void)objectDidPostDirectNotification:(id)object;	// 0x30398ba1
- (void)postNotificationNamed:(id)named forIMHandle:(id)imhandle;	// 0x303980e5
// declared property getter: - (unsigned)previousStatus;	// 0x3039800d
// declared property getter: - (id)previousStatusMessage;	// 0x30398209
- (void)removeIMHandle:(id)handle;	// 0x3039836d
// declared property setter: - (void)setIsQuiet:(BOOL)quiet;	// 0x3039806d
// declared property getter: - (id)shortName;	// 0x30398289
// declared property getter: - (unsigned)status;	// 0x3039801d
// declared property getter: - (id)statusMessage;	// 0x30398229
// declared property getter: - (double)timeSinceStatusChanged;	// 0x30398165
// declared property getter: - (double)timeSinceWentOffline;	// 0x30398185
@end

