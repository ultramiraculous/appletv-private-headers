/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDocumentDifferenceSize;

__attribute__((visibility("hidden")))
@interface NSDocumentDifferenceSizeTriple : NSObject {
@private
	NSDocumentDifferenceSize *_dueToRecentChangesBeforeSaving;	// 4 = 0x4
	NSDocumentDifferenceSize *_betweenPreservingPreviousVersionAndSaving;	// 8 = 0x8
	NSDocumentDifferenceSize *_betweenPreviousSavingAndSaving;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;	// G=0x33cf56d1; @synthesize=_betweenPreservingPreviousVersionAndSaving
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;	// G=0x33cf56e1; @synthesize=_betweenPreviousSavingAndSaving
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;	// G=0x33cf56c1; @synthesize=_dueToRecentChangesBeforeSaving
- (id)init;	// 0x33cf5539
// declared property getter: - (id)betweenPreservingPreviousVersionAndSaving;	// 0x33cf56d1
// declared property getter: - (id)betweenPreviousSavingAndSaving;	// 0x33cf56e1
- (void)dealloc;	// 0x33cf55e5
- (id)description;	// 0x33cf5659
// declared property getter: - (id)dueToRecentChangesBeforeSaving;	// 0x33cf56c1
@end

