/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSSecureCoding.h"
#import "BulletinBoard-Structs.h"
#import </libobjc.A.h>

@class BBSectionParameters, NSDictionary, BBSectionInfo, NSString, NSArray, BBSectionIcon;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding> {
	XXStruct_svT$cC _traits;	// 4 = 0x4
	NSString *_sectionIdentifier;	// 8 = 0x8
	BBSectionInfo *_defaultSectionInfo;	// 12 = 0xc
	NSString *_sectionDisplayName;	// 16 = 0x10
	BBSectionIcon *_sectionIcon;	// 20 = 0x14
	NSArray *_sortDescriptors;	// 24 = 0x18
	BBSectionParameters *_sectionParameters;	// 28 = 0x1c
	NSArray *_defaultSubsectionInfos;	// 32 = 0x20
	NSDictionary *_subsectionDisplayNames;	// 36 = 0x24
	NSString *_sortKey;	// 40 = 0x28
	BOOL _syncsBulletinDismissal;	// 44 = 0x2c
}
@property(copy, nonatomic) BBSectionInfo *defaultSectionInfo;	// G=0x302424c1; S=0x302424d5; @synthesize=_defaultSectionInfo
@property(copy, nonatomic) NSArray *defaultSubsectionInfos;	// G=0x30242571; S=0x30242585; @synthesize=_defaultSubsectionInfos
@property(copy, nonatomic) NSString *sectionDisplayName;	// G=0x302424e5; S=0x302424f9; @synthesize=_sectionDisplayName
@property(copy, nonatomic) BBSectionIcon *sectionIcon;	// G=0x30242509; S=0x3024251d; @synthesize=_sectionIcon
@property(copy, nonatomic) NSString *sectionIdentifier;	// G=0x3024249d; S=0x302424b1; @synthesize=_sectionIdentifier
@property(retain, nonatomic) BBSectionParameters *sectionParameters;	// G=0x30242551; S=0x30242561; @synthesize=_sectionParameters
@property(copy, nonatomic) NSArray *sortDescriptors;	// G=0x3024252d; S=0x30242541; @synthesize=_sortDescriptors
@property(copy, nonatomic) NSString *sortKey;	// G=0x30242461; S=0x30242475; @synthesize=_sortKey
@property(copy, nonatomic) NSDictionary *subsectionDisplayNames;	// G=0x30242595; S=0x302425a9; @synthesize=_subsectionDisplayNames
@property(readonly, assign, nonatomic) BOOL syncsBulletinDismissal;	// G=0x302425b9; @synthesize=_syncsBulletinDismissal
@property(readonly, assign, nonatomic) XXStruct_svT$cC traits;	// G=0x30242485; @synthesize=_traits
+ (id)identityForDataProvider:(id)dataProvider;	// 0x30241469
+ (BOOL)supportsSecureCoding;	// 0x30242005
- (id)initForDataProvider:(id)dataProvider;	// 0x302414a5
- (id)initWithCoder:(id)coder;	// 0x302421ad
- (void)dealloc;	// 0x30241eb1
// declared property getter: - (id)defaultSectionInfo;	// 0x302424c1
// declared property getter: - (id)defaultSubsectionInfos;	// 0x30242571
- (id)description;	// 0x30241fa1
- (void)encodeWithCoder:(id)coder;	// 0x30242009
// declared property getter: - (id)sectionDisplayName;	// 0x302424e5
// declared property getter: - (id)sectionIcon;	// 0x30242509
// declared property getter: - (id)sectionIdentifier;	// 0x3024249d
// declared property getter: - (id)sectionParameters;	// 0x30242551
// declared property setter: - (void)setDefaultSectionInfo:(id)info;	// 0x302424d5
// declared property setter: - (void)setDefaultSubsectionInfos:(id)infos;	// 0x30242585
// declared property setter: - (void)setSectionDisplayName:(id)name;	// 0x302424f9
// declared property setter: - (void)setSectionIcon:(id)icon;	// 0x3024251d
// declared property setter: - (void)setSectionIdentifier:(id)identifier;	// 0x302424b1
// declared property setter: - (void)setSectionParameters:(id)parameters;	// 0x30242561
// declared property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x30242541
// declared property setter: - (void)setSortKey:(id)key;	// 0x30242475
// declared property setter: - (void)setSubsectionDisplayNames:(id)names;	// 0x302425a9
// declared property getter: - (id)sortDescriptors;	// 0x3024252d
// declared property getter: - (id)sortKey;	// 0x30242461
// declared property getter: - (id)subsectionDisplayNames;	// 0x30242595
// declared property getter: - (BOOL)syncsBulletinDismissal;	// 0x302425b9
// declared property getter: - (XXStruct_svT$cC)traits;	// 0x30242485
@end
