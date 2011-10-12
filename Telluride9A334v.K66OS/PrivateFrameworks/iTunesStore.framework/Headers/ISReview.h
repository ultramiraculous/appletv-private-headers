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
@property(assign, nonatomic) int assetType;	// G=0x32723995; S=0x327239a5; @synthesize=_assetType
@property(retain, nonatomic) NSString *body;	// G=0x327239b5; S=0x327239c5; @synthesize=_body
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x327239e9; S=0x327239f9; @synthesize=_bodyMaxLength
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x32722d55; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x32723a09; S=0x32723a19; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x32723a3d; S=0x32723a55; @synthesize=_itemIdentifier
@property(retain, nonatomic) NSString *nickname;	// G=0x32723a69; S=0x32723a79; @synthesize=_nickname
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x32723a9d; S=0x32723aad; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x32723abd; S=0x32723acd; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) float rating;	// G=0x32723add; S=0x32723aed; @synthesize=_rating
@property(retain, nonatomic) NSURL *submitURL;	// G=0x32723afd; S=0x32723b0d; @synthesize=_submitURL
@property(retain, nonatomic) NSString *title;	// G=0x32723b31; S=0x32723b41; @synthesize=_title
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x32723b65; S=0x32723b75; @synthesize=_titleMaxLength
- (id)initWithCoder:(id)coder;	// 0x327226c5
- (id)_draftFileName;	// 0x327238fd
- (id)_draftsDirectoryPath;	// 0x32723949
// declared property getter: - (int)assetType;	// 0x32723995
// declared property getter: - (id)body;	// 0x327239b5
// declared property getter: - (unsigned)bodyMaxLength;	// 0x327239e9
- (id)copyWithZone:(NSZone *)zone;	// 0x327229c9
- (void)dealloc;	// 0x32722901
- (void)encodeWithCoder:(id)coder;	// 0x32722b41
// declared property getter: - (BOOL)hasSavedDraft;	// 0x32722d55
// declared property getter: - (id)infoURL;	// 0x32723a09
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x32723a3d
- (void)loadFromDictionary:(id)dictionary;	// 0x32722dd5
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x32723281
// declared property getter: - (id)nickname;	// 0x32723a69
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x32723a9d
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x32723abd
// declared property getter: - (float)rating;	// 0x32723add
- (BOOL)removeDraft;	// 0x3272362d
- (BOOL)restoreFromDraft;	// 0x32723701
- (BOOL)saveAsDraft;	// 0x32723801
// declared property setter: - (void)setAssetType:(int)type;	// 0x327239a5
// declared property setter: - (void)setBody:(id)body;	// 0x327239c5
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x327239f9
// declared property setter: - (void)setInfoURL:(id)url;	// 0x32723a19
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x32723a55
// declared property setter: - (void)setNickname:(id)nickname;	// 0x32723a79
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x32723aad
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x32723acd
// declared property setter: - (void)setRating:(float)rating;	// 0x32723aed
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x32723b0d
// declared property setter: - (void)setTitle:(id)title;	// 0x32723b41
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x32723b75
// declared property getter: - (id)submitURL;	// 0x32723afd
// declared property getter: - (id)title;	// 0x32723b31
// declared property getter: - (unsigned)titleMaxLength;	// 0x32723b65
@end

