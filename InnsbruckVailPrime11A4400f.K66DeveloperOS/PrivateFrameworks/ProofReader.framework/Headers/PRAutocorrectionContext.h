/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import </libobjc.A.h>


@interface PRAutocorrectionContext : NSObject {
}
@property(assign) double validSequenceCorrectionThreshold;	// G=0x3256d811; S=0x3256d80d; converted property
+ (id)autocorrectionContextOfType:(unsigned)type;	// 0x3256d771
- (void)addInputCharacter:(unsigned short)character geometryData:(id)data;	// 0x3256d7d5
- (void)addInputCharacter:(unsigned short)character geometryModel:(void *)model geometryData:(id)data;	// 0x3256d7f5
- (id)addedModifications;	// 0x3256d7fd
- (id)currentModifications;	// 0x3256d7f9
- (id)prefixes;	// 0x3256d805
- (id)removedModifications;	// 0x3256d801
- (void)reset;	// 0x3256d809
// converted property setter: - (void)setValidSequenceCorrectionThreshold:(double)threshold;	// 0x3256d80d
// converted property getter: - (double)validSequenceCorrectionThreshold;	// 0x3256d811
@end

