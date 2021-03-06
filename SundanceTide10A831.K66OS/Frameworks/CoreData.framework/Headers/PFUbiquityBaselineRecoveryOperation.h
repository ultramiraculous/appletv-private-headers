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
@property(assign) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;	// G=0x33e55601; S=0x33e5562d; 
- (BOOL)conflictsExistForBaseline:(id)baseline;	// 0x33e558ed
// declared property getter: - (id)delegate;	// 0x33e55601
- (id)electAncestorBaselineForConflictedBaselines:(id)conflictedBaselines dissentingBaselines:(id *)baselines;	// 0x33e55961
- (BOOL)electBaselineURLFromVersionURLs:(id)versionURLs withBaseline:(id)baseline error:(id *)error;	// 0x33e55c5d
- (BOOL)hasCurrentBaseline;	// 0x33e556f1
- (BOOL)isEqual:(id)equal;	// 0x33e55685
- (void)main;	// 0x33e57101
- (BOOL)replaceLocalStoreWithBaseline:(id)baseline error:(id *)error;	// 0x33e56bfd
- (BOOL)resolveConflictsForBaseline:(id)baseline withError:(id *)error;	// 0x33e5666d
- (id)retainedDelegate;	// 0x33e55659
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33e5562d
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)baseline;	// 0x33e56941
@end

