/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMCopyright;

__attribute__((visibility("hidden")))
@interface GMMMapTileInfo : PBCodable {
	GMMCopyright *_copyright;	// 4 = 0x4
}
@property(retain, nonatomic) GMMCopyright *copyright;	// G=0x35ba8ab1; S=0x35ba8ac1; @synthesize=_copyright
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x35ba87c1; 
// declared property getter: - (id)copyright;	// 0x35ba8ab1
- (void)dealloc;	// 0x35ba877d
- (id)description;	// 0x35ba87d9
- (id)dictionaryRepresentation;	// 0x35ba8849
// declared property getter: - (BOOL)hasCopyright;	// 0x35ba87c1
- (BOOL)readFrom:(id)from;	// 0x35ba889d
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x35ba8ac1
- (void)writeTo:(id)to;	// 0x35ba8a11
@end

