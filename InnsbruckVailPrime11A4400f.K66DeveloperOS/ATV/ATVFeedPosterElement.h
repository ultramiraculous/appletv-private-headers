/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedPosterElement : ATVFeedElement {
	BOOL _related;	// 4 = 0x4
	BOOL _featured;	// 5 = 0x5
	BOOL _alwaysShowTitles;	// 6 = 0x6
	BOOL _topShelf;	// 7 = 0x7
	BOOL _showOutline;	// 8 = 0x8
	BOOL _showReflection;	// 9 = 0x9
	BOOL _acceptsFocus;	// 10 = 0xa
	NSString *_title;	// 12 = 0xc
	NSString *_subtitle;	// 16 = 0x10
	NSString *_titleAlignment;	// 20 = 0x14
	NSString *_contentMode;	// 24 = 0x18
	ATVFeedImageElement *_image;	// 28 = 0x1c
	ATVFeedImageElement *_defaultImage;	// 32 = 0x20
	int _ordinal;	// 36 = 0x24
	int _badgeCount;	// 40 = 0x28
	NSString *_url;	// 44 = 0x2c
	NSString *_urlType;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL acceptsFocus;	// G=0x11da19; S=0x11da29; @synthesize=_acceptsFocus
@property(assign, nonatomic) BOOL alwaysShowTitles;	// G=0x11d999; S=0x11d9a9; @synthesize=_alwaysShowTitles
@property(assign, nonatomic) int badgeCount;	// G=0x11db59; S=0x11db69; @synthesize=_badgeCount
@property(copy, nonatomic) NSString *contentMode;	// G=0x11daa5; S=0x11dab9; @synthesize=_contentMode
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x11db01; S=0x11db11; @synthesize=_defaultImage
@property(assign, nonatomic) BOOL featured;	// G=0x11d979; S=0x11d989; @synthesize=_featured
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x11dac9; S=0x11dad9; @synthesize=_image
@property(assign, nonatomic) int ordinal;	// G=0x11db39; S=0x11db49; @synthesize=_ordinal
@property(assign, nonatomic) BOOL related;	// G=0x11d959; S=0x11d969; @synthesize=_related
@property(assign, nonatomic) BOOL showOutline;	// G=0x11d9d9; S=0x11d9e9; @synthesize=_showOutline
@property(assign, nonatomic) BOOL showReflection;	// G=0x11d9f9; S=0x11da09; @synthesize=_showReflection
@property(copy, nonatomic) NSString *subtitle;	// G=0x11da5d; S=0x11da71; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x11da39; S=0x11da4d; @synthesize=_title
@property(copy, nonatomic) NSString *titleAlignment;	// G=0x11da81; S=0x11da95; @synthesize=_titleAlignment
@property(assign, nonatomic) BOOL topShelf;	// G=0x11d9b9; S=0x11d9c9; @synthesize=_topShelf
@property(copy, nonatomic) NSString *url;	// G=0x11db79; S=0x11db8d; @synthesize=_url
@property(copy, nonatomic) NSString *urlType;	// G=0x11db9d; S=0x11dbb1; @synthesize=_urlType
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11d379
- (void).cxx_destruct;	// 0x11dbc1
// declared property getter: - (BOOL)acceptsFocus;	// 0x11da19
// declared property getter: - (BOOL)alwaysShowTitles;	// 0x11d999
// declared property getter: - (int)badgeCount;	// 0x11db59
// declared property getter: - (id)contentMode;	// 0x11daa5
// declared property getter: - (id)defaultImage;	// 0x11db01
// declared property getter: - (BOOL)featured;	// 0x11d979
// declared property getter: - (id)image;	// 0x11dac9
// declared property getter: - (int)ordinal;	// 0x11db39
// declared property getter: - (BOOL)related;	// 0x11d959
// declared property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x11da29
// declared property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x11d9a9
// declared property setter: - (void)setBadgeCount:(int)count;	// 0x11db69
// declared property setter: - (void)setContentMode:(id)mode;	// 0x11dab9
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x11db11
// declared property setter: - (void)setFeatured:(BOOL)featured;	// 0x11d989
// declared property setter: - (void)setImage:(id)image;	// 0x11dad9
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x11db49
// declared property setter: - (void)setRelated:(BOOL)related;	// 0x11d969
// declared property setter: - (void)setShowOutline:(BOOL)outline;	// 0x11d9e9
// declared property setter: - (void)setShowReflection:(BOOL)reflection;	// 0x11da09
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x11da71
// declared property setter: - (void)setTitle:(id)title;	// 0x11da4d
// declared property setter: - (void)setTitleAlignment:(id)alignment;	// 0x11da95
// declared property setter: - (void)setTopShelf:(BOOL)shelf;	// 0x11d9c9
// declared property setter: - (void)setUrl:(id)url;	// 0x11db8d
// declared property setter: - (void)setUrlType:(id)type;	// 0x11dbb1
// declared property getter: - (BOOL)showOutline;	// 0x11d9d9
// declared property getter: - (BOOL)showReflection;	// 0x11d9f9
// declared property getter: - (id)subtitle;	// 0x11da5d
// declared property getter: - (id)title;	// 0x11da39
// declared property getter: - (id)titleAlignment;	// 0x11da81
// declared property getter: - (BOOL)topShelf;	// 0x11d9b9
// declared property getter: - (id)url;	// 0x11db79
// declared property getter: - (id)urlType;	// 0x11db9d
@end
