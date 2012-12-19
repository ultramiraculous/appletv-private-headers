/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSMergePolicy.h> // Unknown library


@interface NoteResurrectionMergePolicy : NSMergePolicy {
}
+ (id)sharedNoteResurrectionMergePolicy;	// 0x349cc6a5
- (id)localStoreForNote:(id)note;	// 0x349cc729
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x349ccb69
- (id)snapshotFromRecord:(id)record;	// 0x349cca75
@end
