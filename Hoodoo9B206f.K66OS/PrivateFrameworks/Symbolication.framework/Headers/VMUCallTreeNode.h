/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, VMUCallTreeNode;

@interface VMUCallTreeNode : NSObject {
	unsigned flags;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	unsigned long long address;	// 12 = 0xc
	NSArray *sortedChildrenWithPseudoNode;	// 20 = 0x14
	unsigned numBytes;	// 24 = 0x18
	unsigned count;	// 28 = 0x1c
	union {
		NSString *thePseudoName;
		VMUCallTreeNode *theChild;
		VMUCallTreeNode **theChildren;
	} un;	// 32 = 0x20
	VMUCallTreeNode *parent;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long address;	// G=0x30bca17d; converted property
@property(readonly, assign) unsigned count;	// G=0x30bca14d; converted property
@property(readonly, retain) NSString *name;	// G=0x30bca16d; converted property
@property(readonly, assign) unsigned numBytes;	// G=0x30bca15d; converted property
@property(readonly, retain) VMUCallTreeNode *parent;	// G=0x30bca195; converted property
@property(readonly, retain) NSArray *sortedChildrenWithPseudoNode;	// G=0x30bcb9f9; converted property
+ (void)compareChildrenOf:(id)of toChildrenOf:(id)of2 storeDiffIn:(id)anIn;	// 0x30bca9f9
+ (id)makeFakeRootForNode:(id)node;	// 0x30bcb3e1
+ (id)rootForCompare:(id)compare to:(id)to;	// 0x30bca945
+ (id)rootForSampleFile:(FILE *)sampleFile;	// 0x30bcaebd
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator;	// 0x30bcb145
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler options:(unsigned)options;	// 0x30bcb171
+ (id)rootForTraceData:(id)traceData;	// 0x30bcb019
- (void)addStackEntry:(id)entry symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler numBytes:(unsigned)bytes options:(unsigned)options uniqueStrings:(id)strings addressToSymbolNameMap:(id)symbolNameMap threadPortToNameMap:(id)nameMap dispatchQueueSerialNumToNameMap:(id)nameMap9;	// 0x30bccb35
- (char *)addSubTreeFromFile:(FILE *)file withIndent:(int)indent withLine:(char *)line withLen:(unsigned *)len;	// 0x30bcc9b1
- (void)addTraceEvent:(id)event forTraceData:(id)traceData;	// 0x30bca5d9
// converted property getter: - (unsigned long long)address;	// 0x30bca17d
- (id)browserName;	// 0x30bca301
- (int)compare:(id)compare;	// 0x30bca781
- (int)compareNames:(id)names;	// 0x30bca7f5
- (int)comparePuttingMainThreadFirst:(id)first;	// 0x30bcc85d
- (id)copyWithZone:(NSZone *)zone;	// 0x30bcd329
// converted property getter: - (unsigned)count;	// 0x30bca14d
- (void)dealloc;	// 0x30bccfcd
- (id)filterOutSymbols:(id)symbols;	// 0x30bcc7c5
- (id)filterOutSymbols:(id)symbols required:(id)required;	// 0x30bcc141
- (id)filterOutWaiting;	// 0x30bca2f5
- (id)findNodeMatching:(id)matching searchForward:(BOOL)forward ignoreCase:(BOOL)aCase wholeWords:(BOOL)words;	// 0x30bca2fd
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address;	// 0x30bca571
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address compareSymbolNames:(BOOL)names;	// 0x30bcd0a9
- (id)fullOutputWithThreshold:(unsigned)threshold;	// 0x30bcb5c9
- (id)invertedNode;	// 0x30bcc075
- (BOOL)isPseudo;	// 0x30bca1a5
- (id)largestTopOfStackPath;	// 0x30bcb49d
// converted property getter: - (id)name;	// 0x30bca16d
- (id)nextNode;	// 0x30bcbcf5
// converted property getter: - (unsigned)numBytes;	// 0x30bca15d
// converted property getter: - (id)parent;	// 0x30bca195
- (id)prevNode;	// 0x30bca2f9
- (id)prune:(unsigned)prune;	// 0x30bcbd9d
- (id)pseudoName;	// 0x30bca2b9
- (id)pseudoNodeTopOfStackChild;	// 0x30bca81d
- (void)release;	// 0x30bca595
- (id)retain;	// 0x30bca1b9
- (unsigned)retainCount;	// 0x30bca1dd
- (void)setNameToCount:(id)count;	// 0x30bcbc0d
- (id)sortedChildrenByNameWithPseudoNode;	// 0x30bcb91d
// converted property getter: - (id)sortedChildrenWithPseudoNode;	// 0x30bcb9f9
- (id)sortedChildrenWithPseudoNode:(id)pseudoNode withCompare:(SEL)compare;	// 0x30bcbadd
- (unsigned)sumOfChildrenCounts;	// 0x30bca25d
@end

