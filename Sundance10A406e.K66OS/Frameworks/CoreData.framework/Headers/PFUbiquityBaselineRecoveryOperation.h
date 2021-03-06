/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;	// G=0x33e03601; S=0x33e0362d; 
- (BOOL)conflictsExistForBaseline:(id)baseline;	// 0x33e038ed
// declared property getter: - (id)delegate;	// 0x33e03601
- (id)electAncestorBaselineForConflictedBaselines:(id)conflictedBaselines dissentingBaselines:(id *)baselines;	// 0x33e03961
- (BOOL)electBaselineURLFromVersionURLs:(id)versionURLs withBaseline:(id)baseline error:(id *)error;	// 0x33e03c5d
- (BOOL)hasCurrentBaseline;	// 0x33e036f1
- (BOOL)isEqual:(id)equal;	// 0x33e03685
- (void)main;	// 0x33e05101
- (BOOL)replaceLocalStoreWithBaseline:(id)baseline error:(id *)error;	// 0x33e04bfd
- (BOOL)resolveConflictsForBaseline:(id)baseline withError:(id *)error;	// 0x33e0466d
- (id)retainedDelegate;	// 0x33e03659
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33e0362d
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)baseline;	// 0x33e04941
@end

