/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMAlternateMode : PBCodable {
@private
	int _mode;	// 4 = 0x4
}
@property(assign, nonatomic) int mode;	// G=0x30a8aa71; S=0x30a8aa81; @synthesize=_mode
- (id)init;	// 0x30a8aabd
- (void)dealloc;	// 0x30a8aa91
- (id)description;	// 0x30a8ab4d
- (id)dictionaryRepresentation;	// 0x30a8aae9
// declared property getter: - (int)mode;	// 0x30a8aa71
- (BOOL)readFrom:(id)from;	// 0x30a8ac15
// declared property setter: - (void)setMode:(int)mode;	// 0x30a8aa81
- (void)writeTo:(id)to;	// 0x30a8abe9
@end

