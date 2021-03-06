/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSSKGraph : NSObject {
	edge *_edges;	// 4 = 0x4
	vertex *_vertices;	// 8 = 0x8
	unsigned _numV;	// 12 = 0xc
	unsigned _numE;	// 16 = 0x10
	unsigned _currE;	// 20 = 0x14
	unsigned _dump;	// 24 = 0x18
	unsigned _l_end;	// 28 = 0x1c
}
- (id)initWithNumberOfVertices:(int)vertices numberOfEdges:(int)edges;	// 0x3113db91
- (BOOL)addEdgeWithH1:(unsigned)h1 withH2:(unsigned)h2;	// 0x3113dd51
- (void)dealloc;	// 0x3113dc19
- (void)finalize;	// 0x3113dcad
- (edge **)isAcyclic;	// 0x3113df19
- (BOOL)isEmpty;	// 0x3113dee1
- (unsigned)numOfEdges;	// 0x3113df09
@end

