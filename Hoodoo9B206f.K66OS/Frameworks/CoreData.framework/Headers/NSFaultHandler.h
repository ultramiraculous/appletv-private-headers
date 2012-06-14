/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x362880bd
+ (void)initialize;	// 0x36256911
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x362439c5
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x362880c1
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x36288555
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x36288571
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x3624b09d
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x362881c9
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x3624df8d
@end
