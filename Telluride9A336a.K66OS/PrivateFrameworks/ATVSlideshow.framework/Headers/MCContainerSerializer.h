/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSArray, NSSet, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x343bccb9; 
@property(readonly, assign) double duration;	// G=0x343bc981; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x343bda55; 
@property(readonly, assign) NSSet *plugs;	// G=0x343bcb8d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x343bc31d
- (id)init;	// 0x343bc39d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x343bc419
- (id)addPlugForContainer:(id)container;	// 0x343bcf45
- (id)addPlugsForContainers:(id)containers;	// 0x343bcfa9
// declared property getter: - (unsigned)countOfPlugs;	// 0x343bccb9
- (void)demolish;	// 0x343bc5a9
// declared property getter: - (double)duration;	// 0x343bc981
- (id)imprint;	// 0x343bc7b9
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x343bcfdd
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x343bd02d
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x343bd7bd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x343bc8e1
// declared property getter: - (id)orderedPlugs;	// 0x343bda55
- (id)plugAtIndex:(unsigned)index;	// 0x343bcd75
// declared property getter: - (id)plugs;	// 0x343bcb8d
- (void)removePlugsAtIndices:(id)indices;	// 0x343bd491
- (double)timeInForPlug:(id)plug;	// 0x343bdc21
@end

