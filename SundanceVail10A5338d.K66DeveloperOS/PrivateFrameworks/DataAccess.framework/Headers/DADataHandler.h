/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DADataHandler : NSObject {
	void *_container;	// 4 = 0x4
}
@property(assign, nonatomic) void *container;	// G=0x309795bd; S=0x30979229; @synthesize=_container
+ (id)newDataHandlerForDataclass:(int)dataclass container:(void *)container;	// 0x3097952d
- (id)initWithContainer:(void *)container;	// 0x309791d9
- (BOOL)closeDBAndSave:(BOOL)save;	// 0x309794e5
// declared property getter: - (void *)container;	// 0x309795bd
- (void *)copyLocalObjectFromId:(int)anId;	// 0x30979335
- (CFArrayRef)copyOfAllLocalObjectsInContainer;	// 0x309793c5
- (int)dataclass;	// 0x309792a5
- (void)dealloc;	// 0x3097925d
- (void)drainContainer;	// 0x3097940d
- (id)getDAObjectWithLocalItem:(void *)localItem serverId:(id)anId account:(id)account;	// 0x30979575
- (int)getIdFromLocalObject:(void *)localObject;	// 0x309792ed
- (void)openDB;	// 0x3097949d
- (BOOL)saveContainer;	// 0x3097937d
// declared property setter: - (void)setContainer:(void *)container;	// 0x30979229
- (BOOL)wipeServerIds;	// 0x30979455
@end

