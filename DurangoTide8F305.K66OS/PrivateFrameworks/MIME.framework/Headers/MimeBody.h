/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageBody.h"

@class MimePart;

@interface MimeBody : MessageBody {
	MimePart *_topLevelPart;	// 8 = 0x8
	unsigned _preferredTextEncoding;	// 12 = 0xc
	unsigned _preferredAlternative : 16;	// 16 = 0x10
	unsigned _numAlternatives : 16;	// 18 = 0x12
}
@property(assign) int preferredAlternative;	// G=0x304b7c8d; S=0x304b7dd9; converted property
@property(assign) unsigned long preferredTextEncoding;	// G=0x304b7ae5; S=0x304b7af5; converted property
@property(retain) MimePart *topLevelPart;	// G=0x304b7ad5; S=0x304b8359; converted property
+ (id)copyNewMimeBoundary;	// 0x304b8489
+ (void)initialize;	// 0x304b83ed
+ (id)versionString;	// 0x304b7ac9
- (id)init;	// 0x304b7b09
- (id)attachments;	// 0x304b8195
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x304b7f5d
- (void)dealloc;	// 0x304b83a5
- (void)decodeIfNecessary;	// 0x304b7b05
- (BOOL)isHTML;	// 0x304b8109
- (BOOL)isRich;	// 0x304b8071
- (id)mimeSubtype;	// 0x304b8311
- (id)mimeType;	// 0x304b8335
- (int)numberOfAlternatives;	// 0x304b7e75
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x304b81c9
- (id)partWithNumber:(id)number;	// 0x304b8215
// converted property getter: - (int)preferredAlternative;	// 0x304b7c8d
- (id)preferredBodyPart;	// 0x304b7bdd
// converted property getter: - (unsigned long)preferredTextEncoding;	// 0x304b7ae5
// converted property setter: - (void)setPreferredAlternative:(int)alternative;	// 0x304b7dd9
// converted property setter: - (void)setPreferredTextEncoding:(unsigned long)encoding;	// 0x304b7af5
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0x304b8359
- (id)textHtmlPart;	// 0x304b7b55
// converted property getter: - (id)topLevelPart;	// 0x304b7ad5
- (unsigned)totalTextSize;	// 0x304b7f3d
@end
