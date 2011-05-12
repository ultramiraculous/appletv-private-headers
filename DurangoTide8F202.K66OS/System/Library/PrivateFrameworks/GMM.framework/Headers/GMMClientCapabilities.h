/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GMMClientCapabilities : PBCodable {
@private
	int _maxImageWidth;	// 4 = 0x4
	BOOL _hasMaxImageWidth;	// 8 = 0x8
	int _maxImageHeight;	// 12 = 0xc
	BOOL _hasMaxImageHeight;	// 16 = 0x10
	int _availableImageMemory;	// 20 = 0x14
	BOOL _hasAvailableImageMemory;	// 24 = 0x18
	NSMutableArray *_preferredImageFormats;	// 28 = 0x1c
	BOOL _htmlBodyOnly;	// 32 = 0x20
	BOOL _hasHtmlBodyOnly;	// 33 = 0x21
	BOOL _embedImages;	// 34 = 0x22
	BOOL _hasEmbedImages;	// 35 = 0x23
}
@property(assign, nonatomic) int availableImageMemory;	// G=0x30a66735; S=0x30a66681; @synthesize=_availableImageMemory
@property(assign, nonatomic) BOOL embedImages;	// G=0x30a666e5; S=0x30a666b9; @synthesize=_embedImages
@property(readonly, assign, nonatomic) BOOL hasAvailableImageMemory;	// G=0x30a66725; @synthesize=_hasAvailableImageMemory
@property(readonly, assign, nonatomic) BOOL hasEmbedImages;	// G=0x30a666d5; @synthesize=_hasEmbedImages
@property(readonly, assign, nonatomic) BOOL hasHtmlBodyOnly;	// G=0x30a666f5; @synthesize=_hasHtmlBodyOnly
@property(readonly, assign, nonatomic) BOOL hasMaxImageHeight;	// G=0x30a66745; @synthesize=_hasMaxImageHeight
@property(readonly, assign, nonatomic) BOOL hasMaxImageWidth;	// G=0x30a66765; @synthesize=_hasMaxImageWidth
@property(assign, nonatomic) BOOL htmlBodyOnly;	// G=0x30a66705; S=0x30a6669d; @synthesize=_htmlBodyOnly
@property(assign, nonatomic) int maxImageHeight;	// G=0x30a66755; S=0x30a66665; @synthesize=_maxImageHeight
@property(assign, nonatomic) int maxImageWidth;	// G=0x30a66775; S=0x30a66649; @synthesize=_maxImageWidth
@property(retain, nonatomic) NSMutableArray *preferredImageFormats;	// G=0x30a66715; S=0x30a66fd9; @synthesize=_preferredImageFormats
@property(readonly, assign, nonatomic) int preferredImageFormatsCount;	// G=0x30a66f19; 
- (id)init;	// 0x30a66f85
- (void)addPreferredImageFormat:(int)format;	// 0x30a66df1
// declared property getter: - (int)availableImageMemory;	// 0x30a66735
- (void)dealloc;	// 0x30a66f3d
- (id)description;	// 0x30a66955
- (id)dictionaryRepresentation;	// 0x30a66785
// declared property getter: - (BOOL)embedImages;	// 0x30a666e5
// declared property getter: - (BOOL)hasAvailableImageMemory;	// 0x30a66725
// declared property getter: - (BOOL)hasEmbedImages;	// 0x30a666d5
// declared property getter: - (BOOL)hasHtmlBodyOnly;	// 0x30a666f5
// declared property getter: - (BOOL)hasMaxImageHeight;	// 0x30a66745
// declared property getter: - (BOOL)hasMaxImageWidth;	// 0x30a66765
// declared property getter: - (BOOL)htmlBodyOnly;	// 0x30a66705
// declared property getter: - (int)maxImageHeight;	// 0x30a66755
// declared property getter: - (int)maxImageWidth;	// 0x30a66775
- (int)preferredImageFormatAtIndex:(unsigned)index;	// 0x30a66e21
// declared property getter: - (id)preferredImageFormats;	// 0x30a66715
// declared property getter: - (int)preferredImageFormatsCount;	// 0x30a66f19
- (BOOL)readFrom:(id)from;	// 0x30a66c59
// declared property setter: - (void)setAvailableImageMemory:(int)memory;	// 0x30a66681
// declared property setter: - (void)setEmbedImages:(BOOL)images;	// 0x30a666b9
// declared property setter: - (void)setHtmlBodyOnly:(BOOL)only;	// 0x30a6669d
// declared property setter: - (void)setMaxImageHeight:(int)height;	// 0x30a66665
// declared property setter: - (void)setMaxImageWidth:(int)width;	// 0x30a66649
- (void)setPreferredImageFormat:(int)format atIndex:(unsigned)index;	// 0x30a66e91
// declared property setter: - (void)setPreferredImageFormats:(id)formats;	// 0x30a66fd9
- (void)writeTo:(id)to;	// 0x30a66af5
@end
