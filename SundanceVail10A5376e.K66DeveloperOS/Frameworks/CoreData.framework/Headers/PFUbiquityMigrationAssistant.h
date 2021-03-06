/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, PFUbiquityLocation;

@interface PFUbiquityMigrationAssistant : NSObject {
	NSString *_ubiquityName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	NSMutableDictionary *_baselineLocationsByVersionHash;	// 16 = 0x10
	NSMutableDictionary *_logLocationsByVersionHash;	// 20 = 0x14
	NSMutableArray *_receiptLocations;	// 24 = 0x18
	NSMutableArray *_orderedReceipts;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *orderedReceipts;	// G=0x35d360f9; converted property
@property(readonly, retain) NSMutableArray *receiptLocations;	// G=0x35d36091; converted property
- (id)initWithUbiquityRootLocation:(id)ubiquityRootLocation peerID:(id)anId ubiquityName:(id)name;	// 0x35d35c31
- (void)_populateBaselineAndTransactionLogLocations;	// 0x35d35ca9
- (id)baselineLocationsByModelVersionHash;	// 0x35d3605d
- (BOOL)canUseReceipts;	// 0x35d362d1
- (void)dealloc;	// 0x35d36909
- (id)latestBaselineLocationSkipModelVersionHash:(id)hash;	// 0x35d36555
- (id)latestTransactionLogForModelVersionHash:(id)modelVersionHash;	// 0x35d36321
// converted property getter: - (id)orderedReceipts;	// 0x35d360f9
// converted property getter: - (id)receiptLocations;	// 0x35d36091
- (id)transactionLogLocationsByModelVersionHash;	// 0x35d360c5
- (id)transactionLogLocationsForModelVersionHash:(id)modelVersionHash;	// 0x35d368dd
@end

