/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"

@class NSMutableSet, NSSet, NSMutableArray, NSURL, NSMutableDictionary, NSDictionary;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
	NSSet *_sourceURLs;	// 44 = 0x2c
	NSURL *_destinationURL;	// 48 = 0x30
	int _overwrite;	// 52 = 0x34
	BOOL _useFallback;	// 56 = 0x38
	NSDictionary *_sourceEntityDataPayloads;	// 60 = 0x3c
	NSDictionary *_sourceEntityDataContentTypes;	// 64 = 0x40
	NSDictionary *_sourceEntityETags;	// 68 = 0x44
	NSMutableSet *_destinationURLs;	// 72 = 0x48
	NSMutableDictionary *_destinationEntityETags;	// 76 = 0x4c
	NSMutableArray *_outstandingSourceURLsToMove;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSMutableDictionary *destinationEntityETags;	// G=0x304b1a05; @synthesize=_destinationEntityETags
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x304b19a5; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) NSMutableSet *destinationURLs;	// G=0x304b1a15; @synthesize=_destinationURLs
@property(retain) NSMutableArray *outstandingSourceURLsToMove;	// G=0x304b1a25; S=0x304b1a39; @synthesize=_outstandingSourceURLsToMove
@property(readonly, assign, nonatomic) int overwrite;	// G=0x304b19b5; @synthesize=_overwrite
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataContentTypes;	// G=0x304b19e5; @synthesize=_sourceEntityDataContentTypes
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataPayloads;	// G=0x304b19d5; @synthesize=_sourceEntityDataPayloads
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityETags;	// G=0x304b19f5; @synthesize=_sourceEntityETags
@property(readonly, assign, nonatomic) NSSet *sourceURLs;	// G=0x304b1995; @synthesize=_sourceURLs
@property(readonly, assign, nonatomic) BOOL useFallback;	// G=0x304b19c5; @synthesize=_useFallback
- (id)initWithSourceURLs:(id)sourceURLs destinationURL:(id)url overwrite:(BOOL)overwrite useFallback:(BOOL)fallback sourceEntityDataPayloads:(id)payloads sourceEntityDataContentTypes:(id)types sourceEntityETags:(id)tags accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x304b06f1
- (void)_completedMoveTask:(id)task sourceURL:(id)url;	// 0x304b1119
- (void)_completedPutTask:(id)task sourceURL:(id)url;	// 0x304b15a9
- (id)_eTagFromTaskResponseHeaders:(id)taskResponseHeaders;	// 0x304b10f5
- (void)_setTagsForDestinationEntityAtURL:(id)url fromTaskResponseHeaders:(id)taskResponseHeaders completionBlock:(id)block;	// 0x304b1059
- (void)dealloc;	// 0x304b0ac9
- (id)description;	// 0x304b0ba5
// declared property getter: - (id)destinationEntityETags;	// 0x304b1a05
// declared property getter: - (id)destinationURL;	// 0x304b19a5
// declared property getter: - (id)destinationURLs;	// 0x304b1a15
- (id)filenameFromURL:(id)url;	// 0x304b0cb9
- (id)fullDestinationURLFromSourceURL:(id)sourceURL;	// 0x304b0c65
// declared property getter: - (id)outstandingSourceURLsToMove;	// 0x304b1a25
// declared property getter: - (int)overwrite;	// 0x304b19b5
- (void)processOutstandingTasks;	// 0x304b0d49
// declared property setter: - (void)setOutstandingSourceURLsToMove:(id)move;	// 0x304b1a39
// declared property getter: - (id)sourceEntityDataContentTypes;	// 0x304b19e5
// declared property getter: - (id)sourceEntityDataPayloads;	// 0x304b19d5
// declared property getter: - (id)sourceEntityETags;	// 0x304b19f5
// declared property getter: - (id)sourceURLs;	// 0x304b1995
- (void)startTaskGroup;	// 0x304b0ccd
// declared property getter: - (BOOL)useFallback;	// 0x304b19c5
@end
