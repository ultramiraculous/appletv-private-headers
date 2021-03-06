/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineRollOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;	// G=0x33e5e17d; S=0x33e5e151; 
- (BOOL)canAdoptBaseline:(id)baseline byReplacingLocalStoreFile:(BOOL *)file withStack:(id)stack withError:(id *)error;	// 0x33e5e1d5
// declared property getter: - (id)delegate;	// 0x33e5e17d
- (void)main;	// 0x33e5e6a9
- (id)retainedDelegate;	// 0x33e5e1a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33e5e151
@end

