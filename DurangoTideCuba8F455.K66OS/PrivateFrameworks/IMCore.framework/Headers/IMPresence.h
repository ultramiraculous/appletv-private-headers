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
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x30ae0269; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x30ae02e9; 
@property(readonly, assign, nonatomic) NSString *fullName;	// G=0x30ae02a9; 
@property(readonly, assign, nonatomic) NSSet *groups;	// G=0x30ae0309; 
@property(readonly, assign, nonatomic) NSSet *imHandleSet;	// G=0x30ae004d; @synthesize=_imHandlesSet
@property(readonly, assign, nonatomic) NSArray *imHandles;	// G=0x30ae003d; @synthesize=_imHandles
@property(readonly, assign, nonatomic) BOOL isMobile;	// G=0x30ae01c5; 
@property(assign, nonatomic) BOOL isQuiet;	// G=0x30ae005d; S=0x30ae006d; @synthesize=_quiet
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x30ae02c9; 
@property(readonly, assign, nonatomic) NSString *mobileDeviceName;	// G=0x30ae01a5; 
@property(readonly, assign, nonatomic) IMHandle *mostAvailableIMHandle;	// G=0x30ae002d; @synthesize=_mostAvailableIMHandle
@property(readonly, assign, nonatomic) NSString *nameAndEmail;	// G=0x30ae0249; 
@property(readonly, assign, nonatomic) NSString *nameOfStatus;	// G=0x30ae01e9; 
@property(readonly, assign, nonatomic) int numberOfIMHandles;	// G=0x30ae034d; 
@property(readonly, assign, nonatomic) unsigned previousStatus;	// G=0x30ae000d; @synthesize=_previousStatus
@property(readonly, assign, nonatomic) NSString *previousStatusMessage;	// G=0x30ae0209; 
@property(readonly, assign, nonatomic) NSString *shortName;	// G=0x30ae0289; 
@property(readonly, assign, nonatomic) unsigned status;	// G=0x30ae001d; @synthesize=_status
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x30ae0229; 
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;	// G=0x30ae0165; 
@property(readonly, assign, nonatomic) double timeSinceWentOffline;	// G=0x30ae0185; 
+ (id)notifications;	// 0x30ae0949
+ (id)selectors;	// 0x30ae0885
- (id)init;	// 0x30ae0b01
- (BOOL)_fullRecache;	// 0x30ae0481
- (void)_imHandleCapabilitiesChanged:(id)changed;	// 0x30ae07dd
- (void)_imHandleCertsChanged:(id)changed;	// 0x30ae0629
- (void)_imHandleExtraPropsChanged:(id)changed;	// 0x30ae06a1
- (void)_imHandleGroupsChanged:(id)changed;	// 0x30ae06e5
- (void)_imHandleInfoChanged:(id)changed;	// 0x30ae0729
- (void)_imHandleMobileChanged:(id)changed;	// 0x30ae065d
- (void)_imHandlePictureChanged:(id)changed;	// 0x30ae075d
- (void)_imHandleSortOrderChanged:(id)changed;	// 0x30ae05f5
- (void)_imHandleStatusChanged:(id)changed;	// 0x30ae0791
- (void)_observeIMHandle:(id)handle;	// 0x30ae0855
- (void)_setMostAvailableIMHandle:(id)handle;	// 0x30ae05b9
- (void)_unobserveIMHandle:(id)handle;	// 0x30ae0825
- (BOOL)addIMHandle:(id)handle;	// 0x30ae03e9
- (BOOL)canAddIMHandle:(id)handle;	// 0x30ae0009
- (BOOL)containsIMHandle:(id)handle;	// 0x30ae0329
- (void)dealloc;	// 0x30ae0a49
- (id)description;	// 0x30ae007d
// declared property getter: - (id)displayName;	// 0x30ae0269
// declared property getter: - (id)firstName;	// 0x30ae02e9
// declared property getter: - (id)fullName;	// 0x30ae02a9
// declared property getter: - (id)groups;	// 0x30ae0309
// declared property getter: - (id)imHandleSet;	// 0x30ae004d
// declared property getter: - (id)imHandles;	// 0x30ae003d
// declared property getter: - (BOOL)isMobile;	// 0x30ae01c5
// declared property getter: - (BOOL)isQuiet;	// 0x30ae005d
// declared property getter: - (id)lastName;	// 0x30ae02c9
// declared property getter: - (id)mobileDeviceName;	// 0x30ae01a5
// declared property getter: - (id)mostAvailableIMHandle;	// 0x30ae002d
// declared property getter: - (id)nameAndEmail;	// 0x30ae0249
// declared property getter: - (id)nameOfStatus;	// 0x30ae01e9
// declared property getter: - (int)numberOfIMHandles;	// 0x30ae034d
- (void)objectDidPostDirectNotification:(id)object;	// 0x30ae0ba1
- (void)postNotificationNamed:(id)named forIMHandle:(id)imhandle;	// 0x30ae00e5
// declared property getter: - (unsigned)previousStatus;	// 0x30ae000d
// declared property getter: - (id)previousStatusMessage;	// 0x30ae0209
- (void)removeIMHandle:(id)handle;	// 0x30ae036d
// declared property setter: - (void)setIsQuiet:(BOOL)quiet;	// 0x30ae006d
// declared property getter: - (id)shortName;	// 0x30ae0289
// declared property getter: - (unsigned)status;	// 0x30ae001d
// declared property getter: - (id)statusMessage;	// 0x30ae0229
// declared property getter: - (double)timeSinceStatusChanged;	// 0x30ae0165
// declared property getter: - (double)timeSinceWentOffline;	// 0x30ae0185
@end
