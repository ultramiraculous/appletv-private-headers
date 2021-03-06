/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface EDLinksCollection : NSObject {
	NSMutableArray *mLinks;	// 4 = 0x4
	NSMutableArray *mReferences;	// 8 = 0x8
}
- (id)init;	// 0x34892b31
- (unsigned)addLink:(id)link;	// 0x3489e081
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x34a2a915
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x34a2a8f1
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x3499e8d1
- (unsigned)addReference:(id)reference;	// 0x3489df49
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x34978c5d
- (void)dealloc;	// 0x348c1ba9
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x3499e9b5
- (unsigned)indexOfReference:(id)reference;	// 0x3499ea35
- (id)linkAtIndex:(unsigned)index;	// 0x348cf72d
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x3499e95d
- (unsigned)linksCount;	// 0x348cf775
- (id)referenceAtIndex:(unsigned)index;	// 0x348cf6b5
- (unsigned)referencesCount;	// 0x348cf6fd
@end

