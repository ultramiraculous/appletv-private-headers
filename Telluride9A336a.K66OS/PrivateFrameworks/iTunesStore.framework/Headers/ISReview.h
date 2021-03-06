/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISReview : NSObject <NSCoding, NSCopying> {
	int _assetType;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
	unsigned _bodyMaxLength;	// 12 = 0xc
	NSURL *_infoURL;	// 16 = 0x10
	unsigned long long _itemIdentifier;	// 20 = 0x14
	NSString *_nickname;	// 28 = 0x1c
	BOOL _nicknameIsConfirmed;	// 32 = 0x20
	unsigned _nicknameMaxLength;	// 36 = 0x24
	float _rating;	// 40 = 0x28
	NSURL *_submitURL;	// 44 = 0x2c
	NSString *_title;	// 48 = 0x30
	unsigned _titleMaxLength;	// 52 = 0x34
}
@property(assign, nonatomic) int assetType;	// G=0x35ecd995; S=0x35ecd9a5; @synthesize=_assetType
@property(retain, nonatomic) NSString *body;	// G=0x35ecd9b5; S=0x35ecd9c5; @synthesize=_body
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x35ecd9e9; S=0x35ecd9f9; @synthesize=_bodyMaxLength
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x35eccd55; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x35ecda09; S=0x35ecda19; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x35ecda3d; S=0x35ecda55; @synthesize=_itemIdentifier
@property(retain, nonatomic) NSString *nickname;	// G=0x35ecda69; S=0x35ecda79; @synthesize=_nickname
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x35ecda9d; S=0x35ecdaad; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x35ecdabd; S=0x35ecdacd; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) float rating;	// G=0x35ecdadd; S=0x35ecdaed; @synthesize=_rating
@property(retain, nonatomic) NSURL *submitURL;	// G=0x35ecdafd; S=0x35ecdb0d; @synthesize=_submitURL
@property(retain, nonatomic) NSString *title;	// G=0x35ecdb31; S=0x35ecdb41; @synthesize=_title
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x35ecdb65; S=0x35ecdb75; @synthesize=_titleMaxLength
- (id)initWithCoder:(id)coder;	// 0x35ecc6c5
- (id)_draftFileName;	// 0x35ecd8fd
- (id)_draftsDirectoryPath;	// 0x35ecd949
// declared property getter: - (int)assetType;	// 0x35ecd995
// declared property getter: - (id)body;	// 0x35ecd9b5
// declared property getter: - (unsigned)bodyMaxLength;	// 0x35ecd9e9
- (id)copyWithZone:(NSZone *)zone;	// 0x35ecc9c9
- (void)dealloc;	// 0x35ecc901
- (void)encodeWithCoder:(id)coder;	// 0x35eccb41
// declared property getter: - (BOOL)hasSavedDraft;	// 0x35eccd55
// declared property getter: - (id)infoURL;	// 0x35ecda09
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x35ecda3d
- (void)loadFromDictionary:(id)dictionary;	// 0x35eccdd5
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x35ecd281
// declared property getter: - (id)nickname;	// 0x35ecda69
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x35ecda9d
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x35ecdabd
// declared property getter: - (float)rating;	// 0x35ecdadd
- (BOOL)removeDraft;	// 0x35ecd62d
- (BOOL)restoreFromDraft;	// 0x35ecd701
- (BOOL)saveAsDraft;	// 0x35ecd801
// declared property setter: - (void)setAssetType:(int)type;	// 0x35ecd9a5
// declared property setter: - (void)setBody:(id)body;	// 0x35ecd9c5
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x35ecd9f9
// declared property setter: - (void)setInfoURL:(id)url;	// 0x35ecda19
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x35ecda55
// declared property setter: - (void)setNickname:(id)nickname;	// 0x35ecda79
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x35ecdaad
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x35ecdacd
// declared property setter: - (void)setRating:(float)rating;	// 0x35ecdaed
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x35ecdb0d
// declared property setter: - (void)setTitle:(id)title;	// 0x35ecdb41
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x35ecdb75
// declared property getter: - (id)submitURL;	// 0x35ecdafd
// declared property getter: - (id)title;	// 0x35ecdb31
// declared property getter: - (unsigned)titleMaxLength;	// 0x35ecdb65
@end

