/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDocumentInfo;

@interface GMMKmlInfo : PBCodable {
	GMMDocumentInfo *_sourceDocument;	// 4 = 0x4
	BOOL _hasIsUserCreated;	// 8 = 0x8
	BOOL _isUserCreated;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL hasIsUserCreated;	// G=0x33a8a5b5; S=0x33a8a5c5; @synthesize=_hasIsUserCreated
@property(readonly, assign, nonatomic) BOOL hasSourceDocument;	// G=0x33a8a18d; 
@property(assign, nonatomic) BOOL isUserCreated;	// G=0x33a8a1a5; S=0x33a8a1c9; @synthesize=_isUserCreated
@property(retain, nonatomic) GMMDocumentInfo *sourceDocument;	// G=0x33a8a581; S=0x33a8a591; @synthesize=_sourceDocument
- (void)dealloc;	// 0x33a8a149
- (id)description;	// 0x33a8a1ed
- (id)dictionaryRepresentation;	// 0x33a8a25d
// declared property getter: - (BOOL)hasIsUserCreated;	// 0x33a8a5b5
// declared property getter: - (BOOL)hasSourceDocument;	// 0x33a8a18d
// declared property getter: - (BOOL)isUserCreated;	// 0x33a8a1a5
- (BOOL)readFrom:(id)from;	// 0x33a8a309
// declared property setter: - (void)setHasIsUserCreated:(BOOL)created;	// 0x33a8a5c5
// declared property setter: - (void)setIsUserCreated:(BOOL)created;	// 0x33a8a1c9
// declared property setter: - (void)setSourceDocument:(id)document;	// 0x33a8a591
// declared property getter: - (id)sourceDocument;	// 0x33a8a581
- (void)writeTo:(id)to;	// 0x33a8a4ad
@end
